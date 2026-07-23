/*
 * XREFs of MiFlushTbList @ 0x140279B10
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x1402109E0 (MiDeleteNonPagedPoolTail.c)
 *     MiDecommitLargePoolVa @ 0x140211A20 (MiDecommitLargePoolVa.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiFlushTbListEarly @ 0x140216C24 (MiFlushTbListEarly.c)
 *     MmOutPageKernelStack @ 0x140222E50 (MmOutPageKernelStack.c)
 *     MiGetNextPageTablePte @ 0x14025D330 (MiGetNextPageTablePte.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeleteVaTail @ 0x1402793B0 (MiDeleteVaTail.c)
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiFlushTbAsNeeded @ 0x14027A1E0 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x14027BCB0 (MiResetAccessBitPte.c)
 *     MiAgePteWorker @ 0x14027C480 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F460 (MmSetAddressRangeModifiedEx.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x1402810A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiGetPteFromCopyList @ 0x1402842C0 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiReleaseSmallPteMappings @ 0x1402CC1B0 (MiReleaseSmallPteMappings.c)
 *     MiZeroPage @ 0x1402D0C80 (MiZeroPage.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiCreateSystemPageTable @ 0x1402E46A0 (MiCreateSystemPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MmUnmapIoSpace @ 0x140335F60 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x1403360EC (MiZeroAndFlushPtes.c)
 *     MiDeleteEmptyPageTableTail @ 0x14033CF20 (MiDeleteEmptyPageTableTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D63C (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTableTail @ 0x140340B30 (MiDeleteSystemPageTableTail.c)
 *     MiResetAccessBitsTail @ 0x1403488E0 (MiResetAccessBitsTail.c)
 *     MiCreateSystemPageTableTail @ 0x140357600 (MiCreateSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x140358650 (MiGetNextPageTableTail.c)
 *     MiZeroPageWorkMapping @ 0x140368AE4 (MiZeroPageWorkMapping.c)
 *     MmRemoveExecuteGrants @ 0x14036E20C (MmRemoveExecuteGrants.c)
 *     MiFlushValidPteFromTb @ 0x14038CA94 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F6D8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F884 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038FDE4 (MiClearSystemAccessBits.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A7750 (MiMapMdlCommon.c)
 *     MmSetPageProtection @ 0x1403C2E50 (MmSetPageProtection.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5E84 (MiClearPteAccessedBitRange.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14046C610 (MiSimpleAgeWorkingSetTail.c)
 *     MiUnmapMdlCommon @ 0x14061E728 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061F320 (MmProtectMdlSystemAddress.c)
 *     MiReadyReservedView @ 0x14062F3E0 (MiReadyReservedView.c)
 *     MiMapMemoryDumpMdl @ 0x140630298 (MiMapMemoryDumpMdl.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiPersistMdl @ 0x14063EB64 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063FDBC (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x140641764 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x1406469BC (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14064854C (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x14064AA90 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E9E0 (MiWritePteHighLevelIsr.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065FD24 (MiReleaseLargePdeMappings.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CD80 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140A3CA80 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A44474 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140B469CC (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140B5C1BC (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B6F3F8 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x140279C00 (KeFlushTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038C93C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14038CA20 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x140390594 (KeFlushMultipleRangeTb.c)
 */

void __fastcall MiFlushTbList(int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  _KPROCESS *Process; // rdx
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 *v8; // rdi

  v2 = (unsigned int)a1[3];
  if ( !(_DWORD)v2 )
    return;
  v3 = *((unsigned __int8 *)a1 + 4);
  v4 = qword_140C65B90;
  if ( (v3 & 2) != 0 || *a1 != 1 )
  {
    v6 = *a1;
    if ( *a1 != 1 )
    {
      if ( (v3 & 8) != 0 )
        v7 = 2LL;
      else
        v7 = 1LL;
      goto LABEL_8;
    }
  }
  else
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.StaticBitmap[5] || Process->SecureState.SecureHandle )
    {
      v6 = *a1;
      v4 = -1LL;
    }
    else
    {
      v6 = *a1;
    }
  }
  v7 = 0LL;
LABEL_8:
  v8 = (unsigned __int64 *)(a1 + 4);
  if ( *((_BYTE *)a1 + 5) || *v8 > v4 )
  {
    if ( (v3 & 1) != 0 )
      KeFlushCurrentTbOnly(v6, v7, v3, v4);
    else
      KeFlushTb(v6, v7, v3, v4);
    *((_BYTE *)a1 + 5) = 0;
  }
  else if ( (v3 & 1) != 0 )
  {
    KeFlushMultipleRangeCurrentTb(v2, a1 + 6, v6);
  }
  else
  {
    KeFlushMultipleRangeTb(v2, a1 + 6, v6, (unsigned int)v7);
  }
  *((_BYTE *)a1 + 4) &= ~8u;
  *v8 = 0LL;
  a1[3] = 0;
}
