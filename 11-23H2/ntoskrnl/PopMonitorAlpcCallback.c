/*
 * XREFs of PopMonitorAlpcCallback @ 0x140997910
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x1408602E8 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
