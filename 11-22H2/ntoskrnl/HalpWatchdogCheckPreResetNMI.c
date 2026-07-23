/*
 * XREFs of HalpWatchdogCheckPreResetNMI @ 0x14050B9A0
 * Callers:
 *     HalpPreprocessNmi @ 0x140366F20 (HalpPreprocessNmi.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

int HalpWatchdogCheckPreResetNMI()
{
  unsigned __int64 v0; // rax
  int v1; // ecx
  ULONG_PTR v2; // rbx
  LARGE_INTEGER InterruptTimePrecise; // r8
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  LODWORD(v0) = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
  {
    v1 = *(_DWORD *)(HalpWatchdogTimer + 228);
    if ( v1 == 7 )
    {
      LODWORD(v0) = KeGetPcr()->Prcb.Number;
      if ( (_DWORD)v0 )
        return v0;
      v0 = __readmsr(0x40000112u);
      if ( !v0 )
        return v0;
      __writemsr(0x40000112u, 0LL);
    }
    else
    {
      if ( v1 != 12 )
        return v0;
      v0 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset + 100000000;
      if ( v0 <= HalpTimerWatchdogTimeout )
        return v0;
    }
    v2 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    LODWORD(v0) = *(_DWORD *)(HalpWatchdogTimer + 228);
    if ( (_DWORD)v0 == 7 )
      KeBugCheckEx(
        0x1CAu,
        v2,
        InterruptTimePrecise.QuadPart,
        PerformanceCounter.QuadPart,
        (unsigned int)KiClockTimerOwner);
    if ( (_DWORD)v0 == 12 )
      KeBugCheckEx(
        0x1CFu,
        v2,
        InterruptTimePrecise.QuadPart,
        PerformanceCounter.QuadPart,
        (unsigned int)KiClockTimerOwner);
  }
  return v0;
}
