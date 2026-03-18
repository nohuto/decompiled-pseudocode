/*
 * XREFs of PopUmpoMessageCallback @ 0x14036A1B0
 * Callers:
 *     <none>
 * Callees:
 *     PopUmpoProcessMessages @ 0x1407EFAD0 (PopUmpoProcessMessages.c)
 */

void __fastcall PopUmpoMessageCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopUmpoProcessMessages(CallbackContext, Argument1, Argument2);
}
