/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140428F30
 * Callers:
 *     MiFreePageFileHashPfns @ 0x14021D960 (MiFreePageFileHashPfns.c)
 *     RtlpHpFreeHeap @ 0x1402AC4C0 (RtlpHpFreeHeap.c)
 *     PfFbBufferListFlushStandby @ 0x1402F573C (PfFbBufferListFlushStandby.c)
 *     EtwpFreeStackWalkApcs @ 0x14031F220 (EtwpFreeStackWalkApcs.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F258 (EtwpCancelPendingStackWalkApcs.c)
 *     RtlpHpVsContextFree @ 0x140323630 (RtlpHpVsContextFree.c)
 *     ExpHpCompactionRoutine @ 0x140337AD0 (ExpHpCompactionRoutine.c)
 *     RtlpHpHeapCompact @ 0x140337CF4 (RtlpHpHeapCompact.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140345BF8 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpFlushGeneralLookaside @ 0x140358510 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x1403585A0 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x140366064 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     MiDrainZeroLookasides @ 0x1403BC1A8 (MiDrainZeroLookasides.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x14046A130 (EtwpCovSampCaptureQueueDpc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BED04 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406038B8 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     ExpPlProcessNotifications @ 0x140608990 (ExpPlProcessNotifications.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140644F8C (MiRemoveNonIdealCachedStacks.c)
 *     MiStoreDeletePartition @ 0x14065C038 (MiStoreDeletePartition.c)
 *     MiInsertPteTracker @ 0x140661384 (MiInsertPteTracker.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x140663F0C (MiDeleteDeferredCloneDescriptors.c)
 *     PfpFlushEventBuffers @ 0x14074ACDC (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14074B010 (PfpFlushBuffers.c)
 *     EtwpFreeStackCache @ 0x1408A8396 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1408A8840 (EtwpCovSampCaptureWorkerThread.c)
 *     ObpInitStackAndObjectTables @ 0x14097CF68 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x14097DA20 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x14097F168 (PfTCleanup.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1409F0F90 (EtwpCovSampCaptureFreeLookasides.c)
 *     CmUnRegisterCallback @ 0x140A0F1C0 (CmUnRegisterCallback.c)
 *     PfTAccessTracingCleanup @ 0x140A874E0 (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140ADA260 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  union _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0
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
