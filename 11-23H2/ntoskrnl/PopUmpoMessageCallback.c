/*
 * XREFs of PopUmpoMessageCallback @ 0x14032BC80
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x1407A6B38 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
