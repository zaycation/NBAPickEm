// zaycation.dev
//      NBA PICKEM

#include <stdio.h>
#include <string.h>



int main() {

    int wFinals;
    int eFinals;
    int age;

    printf("\n\n\t\t\t\t\t\t\tNBA Finals Poll\n");
    printf("\t\t\t\t\t\t~~~~~zaycation.dev~~~~~\n\n");

    printf("Instructions: \tThis poll will ask for the teams that you think will go the NBA Finals this year.\n");
    printf("For the best success, please enter the exact number that corresponds to your team. Below is the key:\n\n");

    printf("____________________________________________________________\n");
    printf("|\tWestern Conference\t\t\tEastern Conference\t\t\t|\n");
    printf("|\t\tDAL = 1\t\t\t\t\t\tATL = 16\t\t\t\t|\n");
    printf("|\t\tDEN = 2\t\t\t\t\t\tBKN = 17\t\t\t\t|\n");
    printf("|\t\tGSW = 3\t\t\t\t\t\tBOS = 18\t\t\t\t|\n");
    printf("|\t\tHOU = 4\t\t\t\t\t\tCHA = 19\t\t\t\t|\n");
    printf("|\t\tLAC = 5\t\t\t\t\t\tCHI = 20\t\t\t\t|\n");
    printf("|\t\tLAL = 6\t\t\t\t\t\tCLE = 21\t\t\t\t|\n");
    printf("|\t\tMEM = 7\t\t\t\t\t\tDET = 22\t\t\t\t|\n");
    printf("|\t\tMIN = 8\t\t\t\t\t\tIND = 23\t\t\t\t|\n");
    printf("|\t\tNOP = 9\t\t\t\t\t\tMIA = 24\t\t\t\t|\n");
    printf("|\t\tOKC = 10\t\t\t\t\tMIL = 25\t\t\t\t|\n");
    printf("|\t\tPHX = 11\t\t\t\t\tNYK = 26\t\t\t\t|\n");
    printf("|\t\tPOR = 12\t\t\t\t\tORL = 27\t\t\t\t|\n");
    printf("|\t\tSAC = 13\t\t\t\t\tPHI = 28\t\t\t\t|\n");
    printf("|\t\tNOP = 14\t\t\t\t\tTOR = 29\t\t\t\t|\n");
    printf("|\t\tUTA = 15\t\t\t\t\tWAS = 30\t\t\t\t|\n");
    printf("____________________________________________________________\n\n\n");

    printf("\n\n\t\t\t\t\t\t\t~START~\n\n\n\n");

    printf("1)\tWhat team will win the Western Conference Finals (WCF)?\n");
    scanf(" %d", &wFinals);

    printf("2)\tWhat team will win the Eastern Conference Finals (ECF)?\n");
    scanf(" %d", &eFinals);

    printf("3)\tHow old are you?\n");
    scanf(" %d", &age);


    printf("\n\n\n\n\t\t\t\t\t\tAnalyzing your selections...........\n\n\n\n\n");
    printf("\t\t\t\t\t\tHere are your selections:\n\n\n");
    printf("WCF Champions = %d \n", wFinals);
    printf("ECF Champions = %d \n\n", eFinals);
    printf("You are %d years old. \n\n", age);
    printf("\nPlease use the above key to double-check your answers. Please run the program again if you wish to vote again.");


    return 0;
}