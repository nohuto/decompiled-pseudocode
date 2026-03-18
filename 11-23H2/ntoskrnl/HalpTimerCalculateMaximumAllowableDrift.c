/*
 * XREFs of HalpTimerCalculateMaximumAllowableDrift @ 0x1403A42D0
 * Callers:
 *     HalpInitializeTimers @ 0x1403A4134 (HalpInitializeTimers.c)
 *     HalpTimerSelectFallbackPerformanceCounter @ 0x140509750 (HalpTimerSelectFallbackPerformanceCounter.c)
 * Callees:
 *     <none>
 */

unsigned __int64 HalpTimerCalculateMaximumAllowableDrift()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 v1; // r8
  unsigned __int64 result; // rax

  v0 = *(_QWORD *)(HalpPerformanceCounter + 192);
  v1 = *(_QWORD *)(HalpAlwaysOnCounter + 192);
  if ( v0 <= v1 )
    result = 10 * v1 / v0;
  else
    result = 10 * v0 / v1;
  if ( result < 0xA )
    return 10LL;
  return result;
}
