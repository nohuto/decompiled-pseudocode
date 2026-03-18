/*
 * XREFs of WheaIsCriticalState @ 0x1403D2BA0
 * Callers:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x140645F80 (WheapGenerateETWEvents.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 */

bool WheaIsCriticalState()
{
  return ObGetCurrentIrql() >= 2u && WheapCriticalStateRefCount > 0;
}
