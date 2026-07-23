/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x1404287F0
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14020C9C0 (EtwpAdjustTraceBuffers.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14021DA38 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiPruneCachedStackList @ 0x14021EB20 (MiPruneCachedStackList.c)
 *     ExAllocateFromLookasideListEx @ 0x14022D0A0 (ExAllocateFromLookasideListEx.c)
 *     IoAllocateMdl @ 0x14022E2C0 (IoAllocateMdl.c)
 *     IopAllocateIrpPrivate @ 0x14022EFC0 (IopAllocateIrpPrivate.c)
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     MiGetPage @ 0x14026D240 (MiGetPage.c)
 *     MmCreateKernelStack @ 0x140271580 (MmCreateKernelStack.c)
 *     PfFbLogEntryReserve @ 0x14028BAB4 (PfFbLogEntryReserve.c)
 *     IoMakeAssociatedIrpPriv @ 0x14028FDE8 (IoMakeAssociatedIrpPriv.c)
 *     MiCreateDecayPfn @ 0x140296130 (MiCreateDecayPfn.c)
 *     CcAllocateWorkQueueEntry @ 0x14029B550 (CcAllocateWorkQueueEntry.c)
 *     ExAllocateHeapPool @ 0x1402AD2B0 (ExAllocateHeapPool.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6B00 (ExAllocateFromNPagedLookasideList.c)
 *     CcSetDirtyInMask @ 0x1402C8FC0 (CcSetDirtyInMask.c)
 *     MiGetInPageSupportBlock @ 0x1402E12E4 (MiGetInPageSupportBlock.c)
 *     MiSlistGetFreePage @ 0x1402EB994 (MiSlistGetFreePage.c)
 *     PfTFullEventListAdd @ 0x1402F4DDC (PfTFullEventListAdd.c)
 *     IopAllocateMdl @ 0x1402FC0EC (IopAllocateMdl.c)
 *     KeAllocateInterrupt @ 0x14032065C (KeAllocateInterrupt.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140344F14 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14038BDBC (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrate @ 0x1403A9F00 (MiZeroPageCalibrate.c)
 *     MiGetPageSlist @ 0x1403D6B70 (MiGetPageSlist.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045B704 (HalpDmaAcquireBufferMappings.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140464946 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140464BBC (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     EtwpGetStackLookasideListEntry @ 0x140468360 (EtwpGetStackLookasideListEntry.c)
 *     EtwpPopFreeApcEntry @ 0x140468390 (EtwpPopFreeApcEntry.c)
 *     EtwpTraceStackKey @ 0x140468F10 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140469446 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampLookasidePop @ 0x140469BA8 (EtwpCovSampLookasidePop.c)
 *     MiStoreWriteModifiedPages @ 0x14046D44A (MiStoreWriteModifiedPages.c)
 *     HvlpAcquireHypercallPage @ 0x140540860 (HvlpAcquireHypercallPage.c)
 *     ObpDeferPushRefDerefInfo @ 0x140582B68 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405A9B34 (RtlpStdGetSpaceForTrace.c)
 *     ViGrowPoolAllocation @ 0x1405CFC60 (ViGrowPoolAllocation.c)
 *     EtwpGetCrimsonStackKey @ 0x140601C7C (EtwpGetCrimsonStackKey.c)
 *     MmCreateKernelShadowStack @ 0x14064519C (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x140645634 (MmDeleteKernelShadowStack.c)
 *     MiGetTransitionPageHeatList @ 0x140653F4C (MiGetTransitionPageHeatList.c)
 *     MiInsertPteTracker @ 0x1406613F4 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x140661A3C (MiGetUltraMdlContext.c)
 *     MiFreeClonePool @ 0x14066478C (MiFreeClonePool.c)
 *     CmpExpandPathInfo @ 0x140690E54 (CmpExpandPathInfo.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1406EF250 (ObpCaptureObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     IopAllocRealFileObject @ 0x14072F370 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072F7D0 (CmpCreateKeyBody.c)
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 *     IopCreateFile @ 0x14073CBA0 (IopCreateFile.c)
 *     IopAllocateMiniCompletionPacket @ 0x14073E4D8 (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x1408332DC (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x140980430 (PfFbBufferListCleanup.c)
 *     VfHandlePoolAlloc @ 0x140AD1FB0 (VfHandlePoolAlloc.c)
 *     VfPoolCheckForLeaks @ 0x140ADB08C (VfPoolCheckForLeaks.c)
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
