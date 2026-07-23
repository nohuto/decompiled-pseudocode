/*
 * XREFs of MiInsertTbFlushEntry @ 0x14027F800
 * Callers:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiDeleteSystemPageTable @ 0x14021DDF0 (MiDeleteSystemPageTable.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiRevertValidPte @ 0x140278D10 (MiRevertValidPte.c)
 *     MiTerminateWsleCluster @ 0x140279430 (MiTerminateWsleCluster.c)
 *     MiFlushTbAsNeeded @ 0x14027A1E0 (MiFlushTbAsNeeded.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiAgePteWorker @ 0x14027C480 (MiAgePteWorker.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F460 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiDeletePteWsleCluster @ 0x140280940 (MiDeletePteWsleCluster.c)
 *     MiWsleFlush @ 0x1402810A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     MiGetPteFromCopyList @ 0x1402842C0 (MiGetPteFromCopyList.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiMakePteClean @ 0x140285B00 (MiMakePteClean.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiReleaseSmallPteMappings @ 0x1402CC1B0 (MiReleaseSmallPteMappings.c)
 *     MiTrimPteWorker @ 0x1402E3B68 (MiTrimPteWorker.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiZeroAndFlushPtes @ 0x1403360EC (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D63C (MiFlushDirtyBitsToPfn.c)
 *     MiEmptyWorkingSetHelper @ 0x14034947C (MiEmptyWorkingSetHelper.c)
 *     MiDeleteEmptyPageTable @ 0x140357E80 (MiDeleteEmptyPageTable.c)
 *     MiRevokeExecutePte @ 0x140358D30 (MiRevokeExecutePte.c)
 *     MiMakeVaRangeNoAccess @ 0x14035BDBC (MiMakeVaRangeNoAccess.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140368338 (MiInsertRecursiveTbFlushEntries.c)
 *     MiDeletePhysmemPte @ 0x140368954 (MiDeletePhysmemPte.c)
 *     MiZeroPageWorkMapping @ 0x140368AE4 (MiZeroPageWorkMapping.c)
 *     MiClearSystemAccessBits @ 0x14038FDE4 (MiClearSystemAccessBits.c)
 *     MiReplacePageTablePage @ 0x14039502C (MiReplacePageTablePage.c)
 *     MiMapMdlCommon @ 0x1403A7750 (MiMapMdlCommon.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MmSetPageProtection @ 0x1403C2E50 (MmSetPageProtection.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5E84 (MiClearPteAccessedBitRange.c)
 *     MiUnmapMdlCommon @ 0x14061E728 (MiUnmapMdlCommon.c)
 *     MmProtectMdlSystemAddress @ 0x14061F320 (MmProtectMdlSystemAddress.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 *     MiReadyReservedView @ 0x14062F3E0 (MiReadyReservedView.c)
 *     MiMapMemoryDumpMdl @ 0x140630298 (MiMapMemoryDumpMdl.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiDecommitLargePte @ 0x140635E20 (MiDecommitLargePte.c)
 *     MiPersistMdl @ 0x14063EB64 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063FDBC (MiTransferFileExtent.c)
 *     MiUnmapRetpolineStubs @ 0x140641764 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MiLargePageFault @ 0x1406469BC (MiLargePageFault.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiFlushEnclaveTb @ 0x14064854C (MiFlushEnclaveTb.c)
 *     MiProtectEnclavePages @ 0x140648798 (MiProtectEnclavePages.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064C428 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiWritePteHighLevelIsr @ 0x14064E9E0 (MiWritePteHighLevelIsr.c)
 *     MiDeleteLargeUserPde @ 0x1406508B4 (MiDeleteLargeUserPde.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiEliminateZeroPages @ 0x140696B90 (MiEliminateZeroPages.c)
 *     MiProtectLargeKernelHalRange @ 0x14081CD80 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140A3CA80 (MmDeleteShadowMapping.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140A44474 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 *     MiInitializeTbFlush @ 0x140B5C1BC (MiInitializeTbFlush.c)
 *     MiProtectSharedUserPage @ 0x140B6F3F8 (MiProtectSharedUserPage.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x14033E668 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403DA610 (qsort.c)
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
