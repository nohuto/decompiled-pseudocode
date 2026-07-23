/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140428830
 * Callers:
 *     VfPoolDelayFreeIfPossible @ 0x14020A950 (VfPoolDelayFreeIfPossible.c)
 *     ExFreeToLookasideListEx @ 0x14020BA00 (ExFreeToLookasideListEx.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     MmDeleteKernelStackEx @ 0x14026F7B0 (MmDeleteKernelStackEx.c)
 *     PfFbLogEntryReserve @ 0x14028BAB4 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14028BD60 (PfFbLogEntryComplete.c)
 *     CcFreeWorkQueueEntry @ 0x14029C270 (CcFreeWorkQueueEntry.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     RtlpHpFreeHeap @ 0x1402AC490 (RtlpHpFreeHeap.c)
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     IopFreeIrp @ 0x1402AF210 (IopFreeIrp.c)
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402B8D10 (ExpWorkerFactoryCheckCreate.c)
 *     MiInsertInPageBlock @ 0x1402BD368 (MiInsertInPageBlock.c)
 *     CcSetDirtyInMask @ 0x1402C8FC0 (CcSetDirtyInMask.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     PfTFullEventListAdd @ 0x1402F4DDC (PfTFullEventListAdd.c)
 *     MiQueuePageAccessLog @ 0x1402F54F0 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x1402F55F4 (PfpReturnAccessBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1402F5694 (PfFbBufferListInsertInFree.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14031F078 (EtwpCancelPendingStackWalkApcs.c)
 *     KeFreeInterrupt @ 0x14031F190 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14032065C (KeAllocateInterrupt.c)
 *     ExFreeHeapPool @ 0x140322ED0 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x140323450 (RtlpHpVsContextFree.c)
 *     MiDecayPfnFullyInitialized @ 0x14033EBB4 (MiDecayPfnFullyInitialized.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140345024 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036E3C0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiZeroPageCalibrateDpc @ 0x14038B7A0 (MiZeroPageCalibrateDpc.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403A0C40 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     PfFbBufferListAllocate @ 0x1403A1440 (PfFbBufferListAllocate.c)
 *     MiZeroPageCalibrate @ 0x1403A9F00 (MiZeroPageCalibrate.c)
 *     HalpDmaReleaseBufferMappings @ 0x14045C178 (HalpDmaReleaseBufferMappings.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140465B32 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     EtwpFinalizePendingApc @ 0x140468234 (EtwpFinalizePendingApc.c)
 *     EtwpPopFreeApcEntry @ 0x140468390 (EtwpPopFreeApcEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140468426 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x14046896C (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x140468C12 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140468F10 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140469446 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140469A58 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140469B2A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     CmpFreeCallbackContext @ 0x14046B1AA (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x1405414B0 (HvlpReleaseHypercallPage.c)
 *     RtlStdReleaseStackTrace @ 0x1405A9610 (RtlStdReleaseStackTrace.c)
 *     ViGrowPoolAllocation @ 0x1405CFC60 (ViGrowPoolAllocation.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C7C (EtwpGetCrimsonStackKey.c)
 *     EtwpCovSampLookasideGrow @ 0x140603978 (EtwpCovSampLookasideGrow.c)
 *     ExpTrackRaiseLimitNotification @ 0x140608AF4 (ExpTrackRaiseLimitNotification.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1406443C4 (MiDeleteCachedKernelShadowStack.c)
 *     MiRemoveNonIdealCachedStacks @ 0x140644FFC (MiRemoveNonIdealCachedStacks.c)
 *     MmCreateKernelShadowStack @ 0x14064519C (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x140645634 (MmDeleteKernelShadowStack.c)
 *     MiFreeTransitionPageHeatList @ 0x140653F18 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x1406548CC (MiReplenishTransitionPageHeatList.c)
 *     MiStoreFreeWriteSupport @ 0x14065C314 (MiStoreFreeWriteSupport.c)
 *     MiRemovePteTracker @ 0x140661670 (MiRemovePteTracker.c)
 *     MiRepurposeDecayNode @ 0x1406618E4 (MiRepurposeDecayNode.c)
 *     MiFreeUltraMdlContext @ 0x1406619A8 (MiFreeUltraMdlContext.c)
 *     MiDeleteCloneDescriptor @ 0x140663EB0 (MiDeleteCloneDescriptor.c)
 *     MiClearPageFileHash @ 0x140665C00 (MiClearPageFileHash.c)
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     ObDeleteCapturedInsertInfo @ 0x140692B60 (ObDeleteCapturedInsertInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x1406C2FB0 (ObpFreeObjectNameBuffer.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     IopFreeMiniCompletionPacket @ 0x140728C70 (IopFreeMiniCompletionPacket.c)
 *     ObpFreeObject @ 0x1407298C0 (ObpFreeObject.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F370 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F7D0 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     IopCreateFile @ 0x14073CBA0 (IopCreateFile.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1407681F0 (IoCreateStreamFileObjectEx2.c)
 *     WdipSemFastFree @ 0x1408333B0 (WdipSemFastFree.c)
 *     EtwpEnableStackCaching @ 0x1408A8718 (EtwpEnableStackCaching.c)
 *     ObpFreeWorkItemBlock @ 0x14097CC6C (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x14097D018 (ObpInitStackAndObjectTables.c)
 *     ObpPushRefDerefInfo @ 0x14097D1EC (ObpPushRefDerefInfo.c)
 *     EtwpAllocateStackwalkApcPool @ 0x1409E8AE4 (EtwpAllocateStackwalkApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x1409E8C0C (EtwpReferenceStackLookasideList.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1409F050C (EtwpReferenceLastBranchLookasideList.c)
 *     CmpCleanupPathInfo @ 0x140A13B50 (CmpCleanupPathInfo.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140AA85E0 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopInvokeSystemStateHandler @ 0x140AA865C (PopInvokeSystemStateHandler.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140AD1FB0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140AD23FC (ViFreeTrackedPool.c)
 *     MiInitializeDecayPfns @ 0x140B63554 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140B677B8 (WheapInitializeEventing.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B92018 (HalpDmaAllocateReservedMappingArray.c)
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
