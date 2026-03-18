/*
 * XREFs of HalpTimerSelectFallbackPerformanceCounter @ 0x14050CE78
 * Callers:
 *     HalpTscFallback @ 0x14050DBB0 (HalpTscFallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalpTimerCalculateMaximumAllowableDrift @ 0x14050C520 (HalpTimerCalculateMaximumAllowableDrift.c)
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
