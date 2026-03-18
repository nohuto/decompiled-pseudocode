/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140428EF0
 * Callers:
 *     VfPoolDelayFreeIfPossible @ 0x14020A930 (VfPoolDelayFreeIfPossible.c)
 *     ExFreeToLookasideListEx @ 0x14020B9E0 (ExFreeToLookasideListEx.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     MmDeleteKernelStackEx @ 0x14026F8D0 (MmDeleteKernelStackEx.c)
 *     PfFbLogEntryReserve @ 0x14028BBD4 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14028BE80 (PfFbLogEntryComplete.c)
 *     CcFreeWorkQueueEntry @ 0x14029C390 (CcFreeWorkQueueEntry.c)
 *     IopCompleteRequest @ 0x1402AB480 (IopCompleteRequest.c)
 *     RtlpHpFreeHeap @ 0x1402AC4C0 (RtlpHpFreeHeap.c)
 *     IoFreeMdl @ 0x1402ACFE0 (IoFreeMdl.c)
 *     IopFreeIrp @ 0x1402AF240 (IopFreeIrp.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D40 (ExpWorkerFactoryCheckCreate.c)
 *     MiInsertInPageBlock @ 0x1402BD398 (MiInsertInPageBlock.c)
 *     CcSetDirtyInMask @ 0x1402C8FF0 (CcSetDirtyInMask.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     PfTFullEventListAdd @ 0x1402F4DDC (PfTFullEventListAdd.c)
 *     MiQueuePageAccessLog @ 0x1402F54F0 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402F55F4 (PfpReturnAccessBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1402F5694 (PfFbBufferListInsertInFree.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F258 (EtwpCancelPendingStackWalkApcs.c)
 *     KeFreeInterrupt @ 0x14031F370 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14032083C (KeAllocateInterrupt.c)
 *     ExFreeHeapPool @ 0x1403230B0 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x140323630 (RtlpHpVsContextFree.c)
 *     MiDecayPfnFullyInitialized @ 0x14033EDB4 (MiDecayPfnFullyInitialized.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140345514 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036EA10 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiZeroPageCalibrateDpc @ 0x14038DCB0 (MiZeroPageCalibrateDpc.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403A0F30 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     PfFbBufferListAllocate @ 0x1403A1730 (PfFbBufferListAllocate.c)
 *     MiZeroPageCalibrate @ 0x1403AA5F0 (MiZeroPageCalibrate.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045C7D8 (HalpDmaReleaseBufferMappings.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140466192 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     EtwpFinalizePendingApc @ 0x140468894 (EtwpFinalizePendingApc.c)
 *     EtwpPopFreeApcEntry @ 0x1404689F0 (EtwpPopFreeApcEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140468A86 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x140468FCC (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x140469272 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140469570 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140469AA6 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14046A0B8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x14046A18A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     CmpFreeCallbackContext @ 0x14046B80A (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x140541400 (HvlpReleaseHypercallPage.c)
 *     RtlStdReleaseStackTrace @ 0x1405A9580 (RtlStdReleaseStackTrace.c)
 *     ViGrowPoolAllocation @ 0x1405CFBD0 (ViGrowPoolAllocation.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C0C (EtwpGetCrimsonStackKey.c)
 *     EtwpCovSampLookasideGrow @ 0x140603908 (EtwpCovSampLookasideGrow.c)
 *     ExpTrackRaiseLimitNotification @ 0x140608A84 (ExpTrackRaiseLimitNotification.c)
 *     MiDeleteCachedKernelShadowStack @ 0x140644354 (MiDeleteCachedKernelShadowStack.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140644F8C (MiRemoveNonIdealCachedStacks.c)
 *     MmCreateKernelShadowStack @ 0x14064512C (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x1406455C4 (MmDeleteKernelShadowStack.c)
 *     MiFreeTransitionPageHeatList @ 0x140653EA8 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x14065485C (MiReplenishTransitionPageHeatList.c)
 *     MiStoreFreeWriteSupport @ 0x14065C2A4 (MiStoreFreeWriteSupport.c)
 *     MiRemovePteTracker @ 0x140661600 (MiRemovePteTracker.c)
 *     MiRepurposeDecayNode @ 0x140661874 (MiRepurposeDecayNode.c)
 *     MiFreeUltraMdlContext @ 0x140661938 (MiFreeUltraMdlContext.c)
 *     MiDeleteCloneDescriptor @ 0x140663E40 (MiDeleteCloneDescriptor.c)
 *     MiClearPageFileHash @ 0x140665B90 (MiClearPageFileHash.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     ObDeleteCapturedInsertInfo @ 0x140692B60 (ObDeleteCapturedInsertInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1406C2F00 (ObpFreeObjectNameBuffer.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E85F0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     EtwpWriteUserEvent @ 0x1406F4140 (EtwpWriteUserEvent.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     IopFreeMiniCompletionPacket @ 0x140728C00 (IopFreeMiniCompletionPacket.c)
 *     ObpFreeObject @ 0x140729850 (ObpFreeObject.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F300 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     IopCreateFile @ 0x14073C690 (IopCreateFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140767CE0 (IoCreateStreamFileObjectEx2.c)
 *     WdipSemFastFree @ 0x140831860 (WdipSemFastFree.c)
 *     EtwpEnableStackCaching @ 0x1408A8238 (EtwpEnableStackCaching.c)
 *     ObpFreeWorkItemBlock @ 0x14097CBBC (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x14097CF68 (ObpInitStackAndObjectTables.c)
 *     ObpPushRefDerefInfo @ 0x14097D13C (ObpPushRefDerefInfo.c)
 *     EtwpAllocateStackwalkApcPool @ 0x1409E8A34 (EtwpAllocateStackwalkApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x1409E8B5C (EtwpReferenceStackLookasideList.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1409F045C (EtwpReferenceLastBranchLookasideList.c)
 *     CmpCleanupPathInfo @ 0x140A13AA0 (CmpCleanupPathInfo.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140AA8520 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopInvokeSystemStateHandler @ 0x140AA859C (PopInvokeSystemStateHandler.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140AD0FE0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140AD142C (ViFreeTrackedPool.c)
 *     MiInitializeDecayPfns @ 0x140B5F9E4 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140B66418 (WheapInitializeEventing.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B91018 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  union _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  union _SLIST_HEADER v7; // rt0
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
