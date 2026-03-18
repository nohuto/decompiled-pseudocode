/*
 * XREFs of HalpTimerFinalizeAuxiliaryCounter @ 0x1403AC830
 * Callers:
 *     HalpTimerInitSystem @ 0x14037AA30 (HalpTimerInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1403AC8AC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 */

void HalpTimerFinalizeAuxiliaryCounter()
{
  __int64 v0; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v0 = HalpAuxiliaryCounter;
  PerformanceFrequency.QuadPart = 0LL;
  if ( HalpAuxiliaryCounter )
  {
    if ( HalpTimerAuxiliaryClockEnabled )
    {
      if ( (*(_DWORD *)(HalpAuxiliaryCounter + 224) & 0x6000) != 0 )
      {
        v0 = 0LL;
        HalpAuxiliaryCounter = 0LL;
      }
      if ( v0 )
      {
        if ( !HalpTimerQpcFreqForAuxQpcConversion )
        {
          KeQueryPerformanceCounter(&PerformanceFrequency);
          HalpTimerQpcFreqForAuxQpcConversion = PerformanceFrequency.QuadPart;
        }
        HalpTimerEarliestQpcAllowedToConvert = KeQueryPerformanceCounter(0LL).QuadPart;
        HalpTimerCaptureCloestAuxiliaryQpcPair();
      }
    }
    else
    {
      HalpAuxiliaryCounter = 0LL;
    }
  }
}
