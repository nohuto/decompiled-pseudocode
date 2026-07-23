/*
 * XREFs of HalpTimerSelectFallbackPerformanceCounter @ 0x140509CA0
 * Callers:
 *     HalpTscFallback @ 0x14050ABF0 (HalpTscFallback.c)
 * Callees:
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x1403A44B0 (HalpTimerCalculateMaximumAllowableDrift.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
