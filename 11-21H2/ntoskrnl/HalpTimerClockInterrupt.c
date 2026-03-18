/*
 * XREFs of HalpTimerClockInterrupt @ 0x140303240
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcaQueueDpc @ 0x1402592CC (HalpMcaQueueDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpScanForProfilingCorruption @ 0x14050BAC8 (HalpScanForProfilingCorruption.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050EB80 (HalpTimerWatchdogTriggerSystemReset.c)
 */

char __fastcall HalpTimerClockInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v2; // si
  __int64 InternalData; // rax
  __int64 v4; // rdx
  char *v5; // rdi
  int v6; // eax
  __int16 v7; // ax
  _QWORD *v8; // rbx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_BYTE *)(v1 + 41);
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  (*(void (__fastcall **)(__int64))(v4 + 120))(InternalData);
  v5 = (char *)&HalpClockTickLog
     + 24 * (((unsigned __int8)_InterlockedExchangeAdd(&HalpClockTickLogIndex, 1u) + 1) & 0xF);
  *(_QWORD *)v5 = RtlGetInterruptTimePrecise(&v10);
  *((_DWORD *)v5 + 2) = KeGetPcr()->Prcb.Number;
  v5[12] = KeGetCurrentPrcb()->PendingTickFlags & 1;
  v5[13] = BYTE2(KeGetPcr()->HalReserved[5]);
  v6 = KiClockTimerOwner;
  v5[14] = KeGetCurrentPrcb()->ClockOwner;
  *((_DWORD *)v5 + 4) = v6;
  if ( BYTE2(KeGetPcr()->HalReserved[5]) )
  {
    BYTE2(KeGetPcr()->HalReserved[5]) = 0;
  }
  else if ( (KeGetCurrentPrcb()->PendingTickFlags & 1) != 0 )
  {
    KeClockInterruptNotify(v1, v2);
    if ( KeGetCurrentPrcb()->ClockOwner )
    {
      if ( (unsigned int)(*(_DWORD *)(HalpClockTimer + 60) - MEMORY[0xFFFFF78000000008]) > 0x47868C00 )
      {
        BYTE1(HalpClockWorkUnion) = 1;
        *(_DWORD *)(HalpClockTimer + 60) = MEMORY[0xFFFFF78000000008] + 1200000000;
      }
      v7 = HalpClockWorkUnion;
      if ( HalpClockWorkUnion && (_WORD)HalpClockWorkUnion )
      {
        LOWORD(HalpClockWorkUnion) = 0;
        HalpMcaQueueDpc(v7, SHIBYTE(v7));
      }
      if ( KeGetCurrentPrcb()->ClockOwner && HalpWatchdogTimer )
      {
        if ( MEMORY[0xFFFFF78000000008] - HalpTimerWatchdogLastReset > (unsigned __int64)HalpTimerWatchdogResetCount )
          off_140C01F10[0]();
        if ( HalpTimerWatchdogResetCount == -1 )
          HalpTimerWatchdogTriggerSystemReset(0LL);
      }
      if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[2]) > 0 && (KeGetCurrentPrcb()->HalReserved[2] & 1) == 0 )
      {
        LODWORD(v5) = KeGetPcr()->Prcb.Number;
        v8 = (_QWORD *)(HalpCounterSetInfo + 24LL * (_QWORD)v5);
        if ( MEMORY[0xFFFFF78000000008] - v8[2] >= 0x4C4B40uLL )
        {
          if ( (_QWORD *)*v8 != v8 )
            ((void (__fastcall *)(_QWORD, _QWORD))off_140C01E28[0])(0LL, 0LL);
          HalpScanForProfilingCorruption((unsigned int)v5);
          v8[2] = MEMORY[0xFFFFF78000000008];
        }
      }
    }
  }
  return 1;
}
