/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140428870
 * Callers:
 *     MiFreePageFileHashPfns @ 0x14021D980 (MiFreePageFileHashPfns.c)
 *     RtlpHpFreeHeap @ 0x1402AC490 (RtlpHpFreeHeap.c)
 *     PfFbBufferListFlushStandby @ 0x1402F573C (PfFbBufferListFlushStandby.c)
 *     EtwpFreeStackWalkApcs @ 0x14031F040 (EtwpFreeStackWalkApcs.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F078 (EtwpCancelPendingStackWalkApcs.c)
 *     RtlpHpVsContextFree @ 0x140323450 (RtlpHpVsContextFree.c)
 *     ExpHpCompactionRoutine @ 0x140337930 (ExpHpCompactionRoutine.c)
 *     RtlpHpHeapCompact @ 0x140337B54 (RtlpHpHeapCompact.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140345708 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x140357F10 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140357FA0 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140365A14 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     MiDrainZeroLookasides @ 0x1403BBB48 (MiDrainZeroLookasides.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x140469AD0 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BED94 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x140603928 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x140608A00 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140644FFC (MiRemoveNonIdealCachedStacks.c)
 *     MiStoreDeletePartition @ 0x14065C0A8 (MiStoreDeletePartition.c)
 *     MiInsertPteTracker @ 0x1406613F4 (MiInsertPteTracker.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x140663F7C (MiDeleteDeferredCloneDescriptors.c)
 *     PfpFlushEventBuffers @ 0x14074B1EC (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14074B520 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x1408A8876 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8D20 (EtwpCovSampCaptureWorkerThread.c)
 *     ObpInitStackAndObjectTables @ 0x14097D018 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x14097DAD0 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x14097F218 (PfTCleanup.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1409F1040 (EtwpCovSampCaptureFreeLookasides.c)
 *     CmUnRegisterCallback @ 0x140A0F270 (CmUnRegisterCallback.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140ADB230 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}
