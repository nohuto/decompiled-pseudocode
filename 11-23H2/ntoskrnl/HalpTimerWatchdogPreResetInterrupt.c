/*
 * XREFs of HalpTimerWatchdogPreResetInterrupt @ 0x14051EB40
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42E0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x1402C4570 (HalpTimerGetInternalData.c)
 *     HalpTimerWatchdogResetCountdown @ 0x1403D4470 (HalpTimerWatchdogResetCountdown.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

char HalpTimerWatchdogPreResetInterrupt()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR InterruptTimePrecise; // rax
  LARGE_INTEGER v6; // [rsp+50h] [rbp+18h] BYREF

  InternalData = HalpTimerGetInternalData(HalpWatchdogTimer);
  (*(void (__fastcall **)(__int64))(v1 + 120))(InternalData);
  if ( (unsigned __int64)HalpTimerWatchdogResetCount <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v2 = MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset;
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset < (unsigned __int64)HalpTimerWatchdogResetCount >> 1 )
    {
      BugCheckParameter4 = (unsigned int)KiClockTimerOwner;
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v6);
      KeBugCheckEx(
        0x101u,
        v2,
        (unsigned __int64)HalpTimerWatchdogResetCount >> 1,
        InterruptTimePrecise,
        BugCheckParameter4);
    }
    HalpTimerWatchdogResetCountdown();
  }
  return 1;
}
