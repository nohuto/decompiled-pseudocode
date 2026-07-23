/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1404292C0
 * Callers:
 *     MiFreePageFileHashPfns @ 0x14021D960 (MiFreePageFileHashPfns.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     PfFbBufferListFlushStandby @ 0x1402F59CC (PfFbBufferListFlushStandby.c)
 *     EtwpFreeStackWalkApcs @ 0x14031F4B0 (EtwpFreeStackWalkApcs.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F4E8 (EtwpCancelPendingStackWalkApcs.c)
 *     RtlpHpVsContextFree @ 0x1403238C0 (RtlpHpVsContextFree.c)
 *     ExpHpCompactionRoutine @ 0x140337D60 (ExpHpCompactionRoutine.c)
 *     RtlpHpHeapCompact @ 0x140337F84 (RtlpHpHeapCompact.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140345E88 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x1403586B0 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x140358740 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140366204 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     MiDrainZeroLookasides @ 0x1403BC388 (MiDrainZeroLookasides.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14046A530 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BF274 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x140603E08 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x140608EE0 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406454DC (MiRemoveNonIdealCachedStacks.c)
 *     MiStoreDeletePartition @ 0x14065C588 (MiStoreDeletePartition.c)
 *     MiInsertPteTracker @ 0x1406618D4 (MiInsertPteTracker.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14066445C (MiDeleteDeferredCloneDescriptors.c)
 *     PfpFlushEventBuffers @ 0x14074AECC (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14074B200 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x1408A85E6 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8A90 (EtwpCovSampCaptureWorkerThread.c)
 *     ObpInitStackAndObjectTables @ 0x14097D168 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x14097DC20 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1409F1220 (EtwpCovSampCaptureFreeLookasides.c)
 *     CmUnRegisterCallback @ 0x140A0F470 (CmUnRegisterCallback.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140ADA250 (ViPoolDelayFreeTrimThreadRoutine.c)
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
