/*
 * XREFs of PopMonitorAlpcCallback @ 0x1409979C0
 * Callers:
 *     <none>
 * Callees:
 *     PopMonitorProcessLoop @ 0x140860448 (PopMonitorProcessLoop.c)
 */

void __fastcall PopMonitorAlpcCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  PopMonitorProcessLoop();
}
