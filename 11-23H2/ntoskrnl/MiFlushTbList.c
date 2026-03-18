/*
 * XREFs of MiFlushTbList @ 0x140279880
 * Callers:
 *     MiDeleteNonPagedPoolTail @ 0x1402109E0 (MiDeleteNonPagedPoolTail.c)
 *     MiDecommitLargePoolVa @ 0x140211A20 (MiDecommitLargePoolVa.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiFlushTbListEarly @ 0x140216C24 (MiFlushTbListEarly.c)
 *     MmOutPageKernelStack @ 0x140222E50 (MmOutPageKernelStack.c)
 *     MiGetNextPageTablePte @ 0x14025D0A0 (MiGetNextPageTablePte.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiMakeSystemAddressValid @ 0x140277430 (MiMakeSystemAddressValid.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeleteVaTail @ 0x140279120 (MiDeleteVaTail.c)
 *     MiTerminateWsleCluster @ 0x1402791A0 (MiTerminateWsleCluster.c)
 *     MiFlushTbAsNeeded @ 0x140279F50 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x14027A5C0 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x14027BA20 (MiResetAccessBitPte.c)
 *     MiAgePteWorker @ 0x14027C1F0 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiFreeWsleList @ 0x140280C20 (MiFreeWsleList.c)
 *     MiWsleFlush @ 0x140280E10 (MiWsleFlush.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiGetPteFromCopyList @ 0x140284030 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285A10 (MiMoveDirtyBitsToPfns.c)
 *     MiSetPagingOfDriver @ 0x140290D84 (MiSetPagingOfDriver.c)
 *     MiWalkVaRange @ 0x140293D54 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiProtectPrivateMemory @ 0x1402A2880 (MiProtectPrivateMemory.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiReleaseSmallPteMappings @ 0x1402CBF20 (MiReleaseSmallPteMappings.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiCreateSystemPageTable @ 0x1402E4410 (MiCreateSystemPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MmUnmapIoSpace @ 0x140335CD0 (MmUnmapIoSpace.c)
 *     MiZeroAndFlushPtes @ 0x140335E5C (MiZeroAndFlushPtes.c)
 *     MiDeleteEmptyPageTableTail @ 0x14033CC90 (MiDeleteEmptyPageTableTail.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D3AC (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTableTail @ 0x1403408A0 (MiDeleteSystemPageTableTail.c)
 *     MiResetAccessBitsTail @ 0x140348650 (MiResetAccessBitsTail.c)
 *     MiCreateSystemPageTableTail @ 0x140357460 (MiCreateSystemPageTableTail.c)
 *     MiGetNextPageTableTail @ 0x1403584B0 (MiGetNextPageTableTail.c)
 *     MiZeroPageWorkMapping @ 0x140368944 (MiZeroPageWorkMapping.c)
 *     MmRemoveExecuteGrants @ 0x14036E06C (MmRemoveExecuteGrants.c)
 *     MiFlushValidPteFromTb @ 0x14038C8B4 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x14038F4F8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038F6A4 (MiDemoteValidLargePageOneLevel.c)
 *     MiClearSystemAccessBits @ 0x14038FC04 (MiClearSystemAccessBits.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A7570 (MiMapMdlCommon.c)
 *     MmSetPageProtection @ 0x1403C2C70 (MmSetPageProtection.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5CA4 (MiClearPteAccessedBitRange.c)
 *     MiSimpleAgeWorkingSetTail @ 0x14046C210 (MiSimpleAgeWorkingSetTail.c)
 *     MiUnmapMdlCommon @ 0x14061E1D8 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061EDD0 (MmProtectMdlSystemAddress.c)
 *     MiReadyReservedView @ 0x14062EE90 (MiReadyReservedView.c)
 *     MiMapMemoryDumpMdl @ 0x14062FD48 (MiMapMemoryDumpMdl.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632A38 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiPersistMdl @ 0x14063E614 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F86C (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x140641214 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x14064646C (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x140647FFC (MiFlushEnclaveTb.c)
 *     MiFreePhysicalPages @ 0x14064A540 (MiFreePhysicalPages.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E490 (MiWritePteHighLevelIsr.c)
 *     MiScrubLargeMappedPage @ 0x14065E43C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065F7D4 (MiReleaseLargePdeMappings.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CAB0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140A3C7D0 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A441C4 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MiReloadBootLoadedDrivers @ 0x140B469CC (MiReloadBootLoadedDrivers.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140B5C1BC (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B6F3F8 (MiProtectSharedUserPage.c)
 * Callees:
 *     KeFlushTb @ 0x140279970 (KeFlushTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14038C75C (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14038C840 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeTb @ 0x1403903B4 (KeFlushMultipleRangeTb.c)
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
