/*
 * XREFs of KeGetNextClockTickDuration @ 0x14056F910
 * Callers:
 *     HalpTimerClockPowerChange @ 0x140508864 (HalpTimerClockPowerChange.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42E0 (RtlGetInterruptTimePrecise.c)
 */

unsigned __int64 KeGetNextClockTickDuration()
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v1; // rbx
  unsigned __int64 InterruptTimePrecise; // rcx
  unsigned __int64 NextTickDueTime; // rax
  LARGE_INTEGER v5; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v5);
  if ( KiClockTimerPerCpuTickScheduling )
    NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
  else
    NextTickDueTime = KiClockTimerNextTickTime;
  if ( NextTickDueTime > InterruptTimePrecise )
    return NextTickDueTime - InterruptTimePrecise;
  return v1;
}
