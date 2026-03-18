/*
 * XREFs of MiInsertTbFlushEntry @ 0x14027F570
 * Callers:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiDeleteSystemPageTable @ 0x14021DDF0 (MiDeleteSystemPageTable.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140278A80 (MiRevertValidPte.c)
 *     MiTerminateWsleCluster @ 0x1402791A0 (MiTerminateWsleCluster.c)
 *     MiFlushTbAsNeeded @ 0x140279F50 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x14027A5C0 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14027C1F0 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x1402806B0 (MiDeletePteWsleCluster.c)
 *     MiWsleFlush @ 0x140280E10 (MiWsleFlush.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x140283160 (NtUnlockVirtualMemory.c)
 *     MiGetPteFromCopyList @ 0x140284030 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x140285870 (MiMakePteClean.c)
 *     MiSetPagingOfDriver @ 0x140290D84 (MiSetPagingOfDriver.c)
 *     MiWalkVaRange @ 0x140293D54 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiReleaseSmallPteMappings @ 0x1402CBF20 (MiReleaseSmallPteMappings.c)
 *     MiTrimPteWorker @ 0x1402E38D8 (MiTrimPteWorker.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiZeroAndFlushPtes @ 0x140335E5C (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D3AC (MiFlushDirtyBitsToPfn.c)
 *     MiEmptyWorkingSetHelper @ 0x1403491EC (MiEmptyWorkingSetHelper.c)
 *     MiDeleteEmptyPageTable @ 0x140357CE0 (MiDeleteEmptyPageTable.c)
 *     MiRevokeExecutePte @ 0x140358B90 (MiRevokeExecutePte.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BC1C (MiMakeVaRangeNoAccess.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140368198 (MiInsertRecursiveTbFlushEntries.c)
 *     MiDeletePhysmemPte @ 0x1403687B4 (MiDeletePhysmemPte.c)
 *     MiZeroPageWorkMapping @ 0x140368944 (MiZeroPageWorkMapping.c)
 *     MiClearSystemAccessBits @ 0x14038FC04 (MiClearSystemAccessBits.c)
 *     MiReplacePageTablePage @ 0x140394E4C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A7570 (MiMapMdlCommon.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MmSetPageProtection @ 0x1403C2C70 (MmSetPageProtection.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5CA4 (MiClearPteAccessedBitRange.c)
 *     MiUnmapMdlCommon @ 0x14061E1D8 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061EDD0 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D6CC (MiDeprioritizeVirtualAddresses.c)
 *     MiReadyReservedView @ 0x14062EE90 (MiReadyReservedView.c)
 *     MiMapMemoryDumpMdl @ 0x14062FD48 (MiMapMemoryDumpMdl.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632A38 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiDecommitLargePte @ 0x1406358D0 (MiDecommitLargePte.c)
 *     MiPersistMdl @ 0x14063E614 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F86C (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x140641214 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x14064646C (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x140647FFC (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x140648248 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064BED8 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E490 (MiWritePteHighLevelIsr.c)
 *     MiDeleteLargeUserPde @ 0x140650364 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14065E43C (MiScrubLargeMappedPage.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiEliminateZeroPages @ 0x140696B90 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CAB0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140A3C7D0 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A441C4 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140B5C1BC (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B6F3F8 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x14033E3D8 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403DA430 (qsort.c)
 */

unsigned __int64 __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  _BYTE *v9; // r15
  __int64 v10; // r10
  __int64 v11; // rbp
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // r10
  char v18; // al
  unsigned __int64 v19; // rcx

  v6 = 4096LL << (9 * (unsigned __int8)a4);
  v7 = a2;
  if ( *(_DWORD *)a1 != 1 )
  {
    v18 = *(_BYTE *)(a1 + 4);
    if ( (v18 & 8) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_BYTE *)(a1 + 4) = v18 | 8;
  }
  LODWORD(v8) = *(_DWORD *)(a1 + 12);
  v9 = (_BYTE *)(a1 + 4);
  if ( !(_DWORD)v8 || (*v9 & 4) != 0 )
  {
    v11 = a4;
    v10 = (unsigned int)(v8 - 1);
    result = a1 + 4;
    if ( !(_DWORD)v8 )
      goto LABEL_10;
  }
  else
  {
    v10 = (unsigned int)(v8 - 1);
    v11 = a4;
    if ( ((*(_QWORD *)(a1 + 8 * v10 + 24) >> 10) & 3LL) == a4 )
    {
      v12 = *(_QWORD *)(a1 + 8 * v10 + 24) & 0x3FFLL;
      if ( (*(_QWORD *)(a1 + 8 * v10 + 24) & 0xFFFFFFFFFFFFF000uLL) + v6 * (v12 + 1) == v7
        && v12 + a3 > v12
        && v12 + a3 <= 0x3FF )
      {
        result = *(_QWORD *)(a1 + 8 * v10 + 24);
        *(_QWORD *)(a1 + 16) += a3;
        *(_QWORD *)(a1 + 8 * v10 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
        return result;
      }
      result = a1 + 4;
    }
    else
    {
      result = a1 + 4;
    }
  }
  if ( (*(_BYTE *)result & 4) == 0 )
  {
    result = *(_QWORD *)(a1 + 8 * v10 + 24);
    v17 = a1 + 8 * v10;
    if ( ((result >> 10) & 3) == v11 && (result & 0xFFFFFFFFFFFFF000uLL) == a3 * v6 + v7 )
    {
      v19 = result & 0x3FF;
      if ( v19 + a3 > v19 && v19 + a3 <= 0x3FF )
      {
        *(_QWORD *)(a1 + 16) += a3;
        result -= a3 * v6;
        *(_QWORD *)(v17 + 24) = result ^ ((unsigned __int16)result ^ (unsigned __int16)(result + a3)) & 0x3FF;
        return result;
      }
    }
  }
LABEL_10:
  if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 8) )
  {
LABEL_31:
    *(_BYTE *)(a1 + 5) = 1;
    return result;
  }
  if ( a3 )
  {
    v14 = (unsigned __int64)(v11 & 3) << 10;
    while ( 1 )
    {
      v15 = 1024LL;
      if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
        v15 = a3;
      a3 -= v15;
      result = v14 | v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v15 - 1) & 0x3FF;
      v7 += v15 * v6;
      *(_QWORD *)(a1 + 8LL * (unsigned int)v8 + 24) = result;
      v16 = *(_DWORD *)(a1 + 12);
      *(_QWORD *)(a1 + 16) += v15;
      LODWORD(v8) = v16 + 1;
      *(_DWORD *)(a1 + 12) = v8;
      if ( (_DWORD)v8 == *(_DWORD *)(a1 + 8) && (*v9 & 4) == 0 )
      {
        qsort((void *)(a1 + 24), (unsigned int)v8, 8uLL, MiTbFlushSort);
        result = MiCompressTbFlushList(a1);
        v8 = *(unsigned int *)(a1 + 12);
        if ( (_DWORD)v8 == *(_DWORD *)(a1 + 8) )
          break;
      }
      if ( !a3 )
        return result;
    }
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16) = v8;
      goto LABEL_31;
    }
  }
  return result;
}
