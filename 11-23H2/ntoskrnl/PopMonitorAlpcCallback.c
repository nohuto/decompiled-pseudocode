/*
 * XREFs of PopMonitorAlpcCallback @ 0x140997B10
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x140860528 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
