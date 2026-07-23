/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140429240
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14020C9A0 (EtwpAdjustTraceBuffers.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14021DA18 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiPruneCachedStackList @ 0x14021EB00 (MiPruneCachedStackList.c)
 *     ExAllocateFromLookasideListEx @ 0x14022D190 (ExAllocateFromLookasideListEx.c)
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     IopAllocateIrpPrivate @ 0x14022F0B0 (IopAllocateIrpPrivate.c)
 *     EtwpEventWriteFull @ 0x140258630 (EtwpEventWriteFull.c)
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MmCreateKernelStack @ 0x140271930 (MmCreateKernelStack.c)
 *     PfFbLogEntryReserve @ 0x14028BE64 (PfFbLogEntryReserve.c)
 *     IoMakeAssociatedIrpPriv @ 0x140290198 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x1402964E0 (MiCreateDecayPfn.c)
 *     CcAllocateWorkQueueEntry @ 0x14029B900 (CcAllocateWorkQueueEntry.c)
 *     ExAllocateHeapPool @ 0x1402AD570 (ExAllocateHeapPool.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6DC0 (ExAllocateFromNPagedLookasideList.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     MiGetInPageSupportBlock @ 0x1402E1574 (MiGetInPageSupportBlock.c)
 *     MiSlistGetFreePage @ 0x1402EBC24 (MiSlistGetFreePage.c)
 *     PfTFullEventListAdd @ 0x1402F506C (PfTFullEventListAdd.c)
 *     IopAllocateMdl @ 0x1402FC37C (IopAllocateMdl.c)
 *     KeAllocateInterrupt @ 0x140320ACC (KeAllocateInterrupt.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140345694 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14038E4AC (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrate @ 0x1403AA7D0 (MiZeroPageCalibrate.c)
 *     MiGetPageSlist @ 0x1403D73B0 (MiGetPageSlist.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045C164 (HalpDmaAcquireBufferMappings.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1404653A6 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14046561C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     EtwpGetStackLookasideListEntry @ 0x140468DC0 (EtwpGetStackLookasideListEntry.c)
 *     EtwpPopFreeApcEntry @ 0x140468DF0 (EtwpPopFreeApcEntry.c)
 *     EtwpTraceStackKey @ 0x140469970 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140469EA6 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampLookasidePop @ 0x14046A608 (EtwpCovSampLookasidePop.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     HvlpAcquireHypercallPage @ 0x140540E70 (HvlpAcquireHypercallPage.c)
 *     ObpDeferPushRefDerefInfo @ 0x140582FC8 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405AA014 (RtlpStdGetSpaceForTrace.c)
 *     ViGrowPoolAllocation @ 0x1405D0140 (ViGrowPoolAllocation.c)
 *     EtwpGetCrimsonStackKey @ 0x14060215C (EtwpGetCrimsonStackKey.c)
 *     MmCreateKernelShadowStack @ 0x14064567C (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x140645B14 (MmDeleteKernelShadowStack.c)
 *     MiGetTransitionPageHeatList @ 0x14065442C (MiGetTransitionPageHeatList.c)
 *     MiInsertPteTracker @ 0x1406618D4 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x140661F1C (MiGetUltraMdlContext.c)
 *     MiFreeClonePool @ 0x140664C6C (MiFreeClonePool.c)
 *     CmpExpandPathInfo @ 0x140690E54 (CmpExpandPathInfo.c)
 *     RtlpGetRegistryHandle @ 0x1406C61F0 (RtlpGetRegistryHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1406EF1D0 (ObpCaptureObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x140715568 (ObReferenceObjectByNameEx.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F500 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     IopCreateFile @ 0x14073C880 (IopCreateFile.c)
 *     IopAllocateMiniCompletionPacket @ 0x14073E1B8 (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x140831A8C (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x140980580 (PfFbBufferListCleanup.c)
 *     VfHandlePoolAlloc @ 0x140AD0FD0 (VfHandlePoolAlloc.c)
 *     VfPoolCheckForLeaks @ 0x140ADA0AC (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
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
