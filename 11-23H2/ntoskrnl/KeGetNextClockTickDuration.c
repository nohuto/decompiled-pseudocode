/*
 * XREFs of KeGetNextClockTickDuration @ 0x14056FE50
 * Callers:
 *     HalpTimerClockPowerChange @ 0x140508DB4 (HalpTimerClockPowerChange.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 */

unsigned __int64 KeGetNextClockTickDuration()
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v1; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rcx
  unsigned __int64 NextTickDueTime; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( KiClockTimerPerCpuTickScheduling )
    NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
  else
    NextTickDueTime = KiClockTimerNextTickTime;
  if ( NextTickDueTime > InterruptTimePrecise.QuadPart )
    return NextTickDueTime - InterruptTimePrecise.QuadPart;
  return v1;
}
