/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140429280
 * Callers:
 *     VfPoolDelayFreeIfPossible @ 0x14020A930 (VfPoolDelayFreeIfPossible.c)
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     MmDeleteKernelStackEx @ 0x14026FB60 (MmDeleteKernelStackEx.c)
 *     PfFbLogEntryReserve @ 0x14028BE64 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14028C110 (PfFbLogEntryComplete.c)
 *     CcFreeWorkQueueEntry @ 0x14029C620 (CcFreeWorkQueueEntry.c)
 *     IopCompleteRequest @ 0x1402AB710 (IopCompleteRequest.c)
 *     RtlpHpFreeHeap @ 0x1402AC750 (RtlpHpFreeHeap.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     IopFreeIrp @ 0x1402AF4D0 (IopFreeIrp.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8FD0 (ExpWorkerFactoryCheckCreate.c)
 *     MiInsertInPageBlock @ 0x1402BD628 (MiInsertInPageBlock.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     PfTFullEventListAdd @ 0x1402F506C (PfTFullEventListAdd.c)
 *     MiQueuePageAccessLog @ 0x1402F5780 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402F5884 (PfpReturnAccessBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1402F5924 (PfFbBufferListInsertInFree.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F4E8 (EtwpCancelPendingStackWalkApcs.c)
 *     KeFreeInterrupt @ 0x14031F600 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x140320ACC (KeAllocateInterrupt.c)
 *     ExFreeHeapPool @ 0x140323340 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x1403238C0 (RtlpHpVsContextFree.c)
 *     MiDecayPfnFullyInitialized @ 0x14033F044 (MiDecayPfnFullyInitialized.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1403457A4 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036EBB0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiZeroPageCalibrateDpc @ 0x14038DE90 (MiZeroPageCalibrateDpc.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403A1110 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     PfFbBufferListAllocate @ 0x1403A1910 (PfFbBufferListAllocate.c)
 *     MiZeroPageCalibrate @ 0x1403AA7D0 (MiZeroPageCalibrate.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045CBD8 (HalpDmaReleaseBufferMappings.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140466592 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     EtwpFinalizePendingApc @ 0x140468C94 (EtwpFinalizePendingApc.c)
 *     EtwpPopFreeApcEntry @ 0x140468DF0 (EtwpPopFreeApcEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140468E86 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1404693CC (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x140469672 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140469970 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140469EA6 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14046A4B8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x14046A58A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     CmpFreeCallbackContext @ 0x14046BC0A (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x140541AC0 (HvlpReleaseHypercallPage.c)
 *     RtlStdReleaseStackTrace @ 0x1405A9AF0 (RtlStdReleaseStackTrace.c)
 *     ViGrowPoolAllocation @ 0x1405D0140 (ViGrowPoolAllocation.c)
 *     EtwpGetCrimsonStackKey @ 0x14060215C (EtwpGetCrimsonStackKey.c)
 *     EtwpCovSampLookasideGrow @ 0x140603E58 (EtwpCovSampLookasideGrow.c)
 *     ExpTrackRaiseLimitNotification @ 0x140608FD4 (ExpTrackRaiseLimitNotification.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1406448A4 (MiDeleteCachedKernelShadowStack.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406454DC (MiRemoveNonIdealCachedStacks.c)
 *     MmCreateKernelShadowStack @ 0x14064567C (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x140645B14 (MmDeleteKernelShadowStack.c)
 *     MiFreeTransitionPageHeatList @ 0x1406543F8 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x140654DAC (MiReplenishTransitionPageHeatList.c)
 *     MiStoreFreeWriteSupport @ 0x14065C7F4 (MiStoreFreeWriteSupport.c)
 *     MiRemovePteTracker @ 0x140661B50 (MiRemovePteTracker.c)
 *     MiRepurposeDecayNode @ 0x140661DC4 (MiRepurposeDecayNode.c)
 *     MiFreeUltraMdlContext @ 0x140661E88 (MiFreeUltraMdlContext.c)
 *     MiDeleteCloneDescriptor @ 0x140664390 (MiDeleteCloneDescriptor.c)
 *     MiClearPageFileHash @ 0x1406660E0 (MiClearPageFileHash.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     ObDeleteCapturedInsertInfo @ 0x140692B60 (ObDeleteCapturedInsertInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1406C2F30 (ObpFreeObjectNameBuffer.c)
 *     RtlpGetRegistryHandle @ 0x1406C61F0 (RtlpGetRegistryHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     EtwpWriteUserEvent @ 0x1406F4170 (EtwpWriteUserEvent.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     IopFreeMiniCompletionPacket @ 0x140728E00 (IopFreeMiniCompletionPacket.c)
 *     ObpFreeObject @ 0x140729A50 (ObpFreeObject.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F500 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     IopCreateFile @ 0x14073C880 (IopCreateFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140767ED0 (IoCreateStreamFileObjectEx2.c)
 *     WdipSemFastFree @ 0x140831B60 (WdipSemFastFree.c)
 *     EtwpEnableStackCaching @ 0x1408A8488 (EtwpEnableStackCaching.c)
 *     ObpFreeWorkItemBlock @ 0x14097CDBC (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x14097D168 (ObpInitStackAndObjectTables.c)
 *     ObpPushRefDerefInfo @ 0x14097D33C (ObpPushRefDerefInfo.c)
 *     EtwpAllocateStackwalkApcPool @ 0x1409E8CC4 (EtwpAllocateStackwalkApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x1409E8DEC (EtwpReferenceStackLookasideList.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1409F06EC (EtwpReferenceLastBranchLookasideList.c)
 *     CmpCleanupPathInfo @ 0x140A13D50 (CmpCleanupPathInfo.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140AA8390 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopInvokeSystemStateHandler @ 0x140AA840C (PopInvokeSystemStateHandler.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140AD0FD0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140AD141C (ViFreeTrackedPool.c)
 *     MiInitializeDecayPfns @ 0x140B5F9E4 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140B66418 (WheapInitializeEventing.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B91018 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  _SLIST_HEADER v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v5.Alignment + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return Region;
}
