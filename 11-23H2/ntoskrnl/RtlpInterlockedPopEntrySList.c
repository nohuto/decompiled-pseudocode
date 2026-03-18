/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140428EB0
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14020C9A0 (EtwpAdjustTraceBuffers.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14021DA18 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiPruneCachedStackList @ 0x14021EB00 (MiPruneCachedStackList.c)
 *     ExAllocateFromLookasideListEx @ 0x14022D080 (ExAllocateFromLookasideListEx.c)
 *     IoAllocateMdl @ 0x14022E2A0 (IoAllocateMdl.c)
 *     IopAllocateIrpPrivate @ 0x14022EFA0 (IopAllocateIrpPrivate.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     MiGetPage @ 0x14026D360 (MiGetPage.c)
 *     MmCreateKernelStack @ 0x1402716A0 (MmCreateKernelStack.c)
 *     PfFbLogEntryReserve @ 0x14028BBD4 (PfFbLogEntryReserve.c)
 *     IoMakeAssociatedIrpPriv @ 0x14028FF08 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x140296250 (MiCreateDecayPfn.c)
 *     CcAllocateWorkQueueEntry @ 0x14029B670 (CcAllocateWorkQueueEntry.c)
 *     ExAllocateHeapPool @ 0x1402AD2E0 (ExAllocateHeapPool.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6B30 (ExAllocateFromNPagedLookasideList.c)
 *     CcSetDirtyInMask @ 0x1402C8FF0 (CcSetDirtyInMask.c)
 *     MiGetInPageSupportBlock @ 0x1402E12E4 (MiGetInPageSupportBlock.c)
 *     MiSlistGetFreePage @ 0x1402EB994 (MiSlistGetFreePage.c)
 *     PfTFullEventListAdd @ 0x1402F4DDC (PfTFullEventListAdd.c)
 *     IopAllocateMdl @ 0x1402FC0EC (IopAllocateMdl.c)
 *     KeAllocateInterrupt @ 0x14032083C (KeAllocateInterrupt.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140345404 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14038E2CC (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrate @ 0x1403AA5F0 (MiZeroPageCalibrate.c)
 *     MiGetPageSlist @ 0x1403D71D0 (MiGetPageSlist.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045BD64 (HalpDmaAcquireBufferMappings.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140464FA6 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14046521C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     EtwpGetStackLookasideListEntry @ 0x1404689C0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpPopFreeApcEntry @ 0x1404689F0 (EtwpPopFreeApcEntry.c)
 *     EtwpTraceStackKey @ 0x140469570 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140469AA6 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampLookasidePop @ 0x14046A208 (EtwpCovSampLookasidePop.c)
 *     MiStoreWriteModifiedPages @ 0x14046DAAA (MiStoreWriteModifiedPages.c)
 *     HvlpAcquireHypercallPage @ 0x1405407B0 (HvlpAcquireHypercallPage.c)
 *     ObpDeferPushRefDerefInfo @ 0x140582AD8 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405A9AA4 (RtlpStdGetSpaceForTrace.c)
 *     ViGrowPoolAllocation @ 0x1405CFBD0 (ViGrowPoolAllocation.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C0C (EtwpGetCrimsonStackKey.c)
 *     MmCreateKernelShadowStack @ 0x14064512C (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x1406455C4 (MmDeleteKernelShadowStack.c)
 *     MiGetTransitionPageHeatList @ 0x140653EDC (MiGetTransitionPageHeatList.c)
 *     MiInsertPteTracker @ 0x140661384 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1406619CC (MiGetUltraMdlContext.c)
 *     MiFreeClonePool @ 0x14066471C (MiFreeClonePool.c)
 *     CmpExpandPathInfo @ 0x140690E54 (CmpExpandPathInfo.c)
 *     RtlpGetRegistryHandle @ 0x1406C61C0 (RtlpGetRegistryHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E85F0 (CmpCallCallBacksEx.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1406EF1A0 (ObpCaptureObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x14071535C (ObReferenceObjectByNameEx.c)
 *     SepDuplicateToken @ 0x140729B80 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F300 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x1407308B0 (ObCreateObjectEx.c)
 *     IopCreateFile @ 0x14073C690 (IopCreateFile.c)
 *     IopAllocateMiniCompletionPacket @ 0x14073DFC8 (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x14083178C (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x140980380 (PfFbBufferListCleanup.c)
 *     VfHandlePoolAlloc @ 0x140AD0FE0 (VfHandlePoolAlloc.c)
 *     VfPoolCheckForLeaks @ 0x140ADA0BC (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  struct _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (struct _SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
