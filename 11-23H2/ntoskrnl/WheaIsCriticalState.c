/*
 * XREFs of WheaIsCriticalState @ 0x140380B70
 * Callers:
 *     WheaLogInternalEvent @ 0x140380A50 (WheaLogInternalEvent.c)
 *     WheaReportHwError @ 0x140610630 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x1406132C8 (WheapGenerateETWEvents.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 */

bool WheaIsCriticalState()
{
  return ObGetCurrentIrql() >= 2u && WheapCriticalStateRefCount > 0;
}
