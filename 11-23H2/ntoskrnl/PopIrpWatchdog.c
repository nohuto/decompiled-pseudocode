/*
 * XREFs of PopIrpWatchdog @ 0x140583870
 * Callers:
 *     <none>
 * Callees:
 *     PopIrpWatchdogBugcheck @ 0x140583884 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall __noreturn PopIrpWatchdog(__int64 a1, ULONG a2)
{
  PopIrpWatchdogBugcheck(a2);
}
