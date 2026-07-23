/*
 * XREFs of WheaIsCriticalState @ 0x1403D2BA0
 * Callers:
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 *     sub_140645F80 @ 0x140645F80 (sub_140645F80.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140244120 (KeGetEffectiveIrql.c)
 */

bool WheaIsCriticalState()
{
  return KeGetEffectiveIrql() >= 2u && dword_140CE21C0 > 0;
}
