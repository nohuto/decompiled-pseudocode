/*
 * XREFs of KiSoftParkElectionDpcRoutine @ 0x14057E740
 * Callers:
 *     <none>
 * Callees:
 *     KiShouldSoftParkElectionBePerformed @ 0x140234DF0 (KiShouldSoftParkElectionBePerformed.c)
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x140318BF8 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireSoftParkElectionLock @ 0x140410424 (KiAcquireSoftParkElectionLock.c)
 *     KiPerformMultiRoundSoftParkElection @ 0x1404111A4 (KiPerformMultiRoundSoftParkElection.c)
 *     KiReleaseParkSummaryLockExclusive @ 0x1404112BC (KiReleaseParkSummaryLockExclusive.c)
 *     KiSoftParkElectionUnparkProcessor @ 0x1404112D8 (KiSoftParkElectionUnparkProcessor.c)
 *     KiAdvanceSoftParkElectionGeneration @ 0x14057DFA8 (KiAdvanceSoftParkElectionGeneration.c)
 */

void __fastcall KiSoftParkElectionDpcRoutine(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64
                                                                       * (unsigned __int64)*(unsigned __int16 *)(a2 + 662)
                                                                       + *(unsigned __int8 *)(a2 + 657)]]
                 + 192);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 112));
  KiAcquireSoftParkElectionLock(a2);
  *(_BYTE *)(a2 + 708) = 0;
  if ( KiShouldSoftParkElectionBePerformed(a2)
    && (v5 = KiPerformMultiRoundSoftParkElection(v4, a2), KiAdvanceSoftParkElectionGeneration(a2), v5) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 688), 0LL);
    v8[0] = 0LL;
    do
    {
      _BitScanForward64(&v6, v5);
      v5 &= ~(1LL << v6);
      KiSoftParkElectionUnparkProcessor(
        (__int64)CurrentPrcb,
        KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(v4 + 136) + (unsigned int)v6]],
        v4,
        v8);
    }
    while ( v5 );
    KiReleaseParkSummaryLockExclusive(v4);
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    v7 = v8[0];
    if ( v8[0] )
    {
      v8[0] = *(_QWORD *)v8[0];
      do
      {
        KiDeferredReadySingleThread((__int64)CurrentPrcb, v7 - 216, (__int64)v8);
        v7 = v8[0];
        LOBYTE(v5) = v5 + 1;
        if ( v8[0] )
          v8[0] = *(_QWORD *)v8[0];
        if ( (v5 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
      }
      while ( v7 );
    }
    KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    if ( CurrentPrcb->NextThread )
    {
      if ( !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 688), 0LL);
    KiReleaseParkSummaryLockExclusive(v4);
  }
}
