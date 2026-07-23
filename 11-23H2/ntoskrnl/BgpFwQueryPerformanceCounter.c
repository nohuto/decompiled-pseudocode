/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x140385150
 * Callers:
 *     LogFwReport @ 0x140AEC0F4 (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AED710 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x140AED85C (LogFwStat.c)
 *     AnFwpProgressAnimationManual @ 0x140AF22BC (AnFwpProgressAnimationManual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
