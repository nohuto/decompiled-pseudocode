/*
 * XREFs of HalpTimerClockIpiRoutine @ 0x1402C4820
 * Callers:
 *     <none>
 * Callees:
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpScanForProfilingCorruption @ 0x14045BCC4 (HalpScanForProfilingCorruption.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050C170 (HalpTimerWatchdogTriggerSystemReset.c)
 */

char __fastcall HalpTimerClockIpiRoutine(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rbx

  KeClockInterruptNotify(*(_QWORD *)(a1 + 136), *(unsigned __int8 *)(*(_QWORD *)(a1 + 136) + 41LL), 2LL);
  if ( KeGetCurrentPrcb()->ClockOwner && HalpWatchdogTimer )
  {
    if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
      off_140C01CD0[0]();
    if ( HalpTimerWatchdogResetCount == -1 )
      HalpTimerWatchdogTriggerSystemReset(0LL);
  }
  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[2]) <= 0 || (KeGetCurrentPrcb()->HalReserved[2] & 1) != 0 )
    return 1;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
  if ( MEMORY[0xFFFFF78000000008] - v3[2] >= 0x4C4B40uLL )
  {
    if ( (_QWORD *)*v3 != v3 )
      ((void (__fastcall *)(_QWORD, _QWORD))off_140C01BE8[0])(0LL, 0LL);
    HalpScanForProfilingCorruption((unsigned int)v1);
    v3[2] = MEMORY[0xFFFFF78000000008];
  }
  return 1;
}
