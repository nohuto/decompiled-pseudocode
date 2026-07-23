/*
 * XREFs of HalpTimerAlwaysOnClockInterrupt @ 0x14051E910
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402C42B0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x1402C4540 (HalpTimerGetInternalData.c)
 *     KeClockInterruptNotify @ 0x1402C4670 (KeClockInterruptNotify.c)
 *     HalpMcaQueueDpc @ 0x140369318 (HalpMcaQueueDpc.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     HalpScanForProfilingCorruption @ 0x14045B264 (HalpScanForProfilingCorruption.c)
 *     HalpTimerSwitchToNormalClock @ 0x140508674 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050B890 (HalpTimerWatchdogTriggerSystemReset.c)
 */

char __fastcall HalpTimerAlwaysOnClockInterrupt(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 v2; // si
  __int64 InternalData; // rax
  __int64 v4; // rdx
  __int64 v5; // rbx
  char v6; // cl
  char v7; // r8
  __int16 v8; // ax
  _QWORD *v9; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_BYTE *)(v1 + 41);
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  (*(void (__fastcall **)(__int64))(v4 + 120))(InternalData);
  v5 = 3LL * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  HalpClockTickLog[v5] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  HalpClockTickLog[v5 + 1].LowPart = KeGetPcr()->Prcb.Number;
  HalpClockTickLog[v5 + 1].HighPart = KiClockTimerOwner;
  LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = 0;
  v6 = KeGetCurrentPrcb()->PendingTickFlags & 1;
  LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = v6;
  v7 = v6 | KeGetCurrentPrcb()->PendingTickFlags & 2;
  LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = v7;
  if ( BYTE2(KeGetPcr()->HalReserved[5]) )
  {
    v7 |= 4u;
    LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = v7;
  }
  if ( KeGetCurrentPrcb()->ClockOwner )
    v7 |= 8u;
  LOBYTE(HalpClockTickLog[v5 + 2].LowPart) = v7 | 0x10;
  if ( (KeGetCurrentPrcb()->PendingTickFlags & 2) != 0 )
  {
    HalpTimerSwitchToNormalClock(1);
    KeClockInterruptNotify(v1, v2, 1u);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v8 = HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        HalpMcaQueueDpc(v8, SHIBYTE(v8));
      }
      if ( KeGetCurrentPrcb()->ClockOwner && HalpWatchdogTimer )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          off_140C01CD0[0]();
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[2]) > 0 && (KeGetCurrentPrcb()->HalReserved[2] & 1) == 0 )
      {
        LODWORD(v1) = KeGetPcr()->Prcb.Number;
        v9 = (_QWORD *)(HalpCounterSetInfo + 24 * v1);
        if ( MEMORY[0xFFFFF78000000008] - v9[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v9 != v9 )
            ((void (__fastcall *)(_QWORD, _QWORD))off_140C01BE8[0])(0LL, 0LL);
          HalpScanForProfilingCorruption(v1);
          v9[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
