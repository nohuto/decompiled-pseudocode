/*
 * XREFs of WheaIsCriticalState @ 0x140380D10
 * Callers:
 *     WheaLogInternalEvent @ 0x140380BF0 (WheaLogInternalEvent.c)
 *     WheaReportHwError @ 0x140610B80 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x140613818 (WheapGenerateETWEvents.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 */

bool WheaIsCriticalState()
{
  return ObGetCurrentIrql() >= 2u && WheapCriticalStateRefCount > 0;
}
