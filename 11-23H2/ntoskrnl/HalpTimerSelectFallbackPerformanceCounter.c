/*
 * XREFs of HalpTimerSelectFallbackPerformanceCounter @ 0x140509750
 * Callers:
 *     HalpTscFallback @ 0x14050A6A0 (HalpTscFallback.c)
 * Callees:
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1403A42D0 (HalpTimerCalculateMaximumAllowableDrift.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

unsigned __int64 HalpTimerSelectFallbackPerformanceCounter()
{
  unsigned __int64 result; // rax

  result = HalpFallbackPerformanceCounter;
  if ( !HalpFallbackPerformanceCounter )
    KeBugCheckEx(
      0x5Cu,
      0x1000uLL,
      HalpPerformanceCounter,
      (ULONG_PTR)&HalpRegisteredTimers,
      (unsigned int)HalpRegisteredTimerCount);
  HalpPerformanceCounter = HalpFallbackPerformanceCounter;
  if ( HalpAlwaysOnCounter )
  {
    result = HalpTimerCalculateMaximumAllowableDrift();
    HalpTimerMaximumAllowableDrift = result;
  }
  return result;
}
