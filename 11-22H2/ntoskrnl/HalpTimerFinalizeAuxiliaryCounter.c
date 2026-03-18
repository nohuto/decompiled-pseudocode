/*
 * XREFs of HalpTimerFinalizeAuxiliaryCounter @ 0x1403AC050
 * Callers:
 *     HalpTimerInitSystem @ 0x14037B080 (HalpTimerInitSystem.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1403AC0CC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
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
