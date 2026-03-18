/*
 * XREFs of MiUnlockPageTableInternal @ 0x1403195C0
 * Callers:
 *     MiConvertAndFlushWsleVas @ 0x14020B2DC (MiConvertAndFlushWsleVas.c)
 *     MiClearNonPagedPtes @ 0x140212458 (MiClearNonPagedPtes.c)
 *     MiSetReadOnlyOnSectionView @ 0x1402152F8 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiCopyToUserVa @ 0x14021CBDC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE44 (MiSplitPrivatePage.c)
 *     MiInitializeWorkingSetList @ 0x140223424 (MiInitializeWorkingSetList.c)
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiResolvePageTablePage @ 0x140236020 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x140236940 (MiLockPageLeafPageTable.c)
 *     MiFastLockLeafPageTable @ 0x140237280 (MiFastLockLeafPageTable.c)
 *     MiProbeAndLockComplete @ 0x140238870 (MiProbeAndLockComplete.c)
 *     MiCheckProcessShadow @ 0x14023F100 (MiCheckProcessShadow.c)
 *     MiLockLowestValidPageTable @ 0x14025A290 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTables @ 0x14025BD00 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14025C170 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14025D0A0 (MiGetNextPageTablePte.c)
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267860 (MiMakeSystemCacheRangeValid.c)
 *     MiSetVaAgeList @ 0x1402709E0 (MiSetVaAgeList.c)
 *     MiQueryAddressState @ 0x140271C00 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x1402732C0 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x140273910 (MiCountSharedPages.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140277430 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x1402776B0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A160 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x14027C5D0 (MiClearPteAccessed.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F1D0 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027F7D0 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x140280E10 (MiWsleFlush.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x140283160 (NtUnlockVirtualMemory.c)
 *     MiDeleteKernelStack @ 0x140283990 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x140284310 (MiSetSystemCodeProtection.c)
 *     MiFillPoolCommitPageTable @ 0x140285390 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285A10 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x140285E30 (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x14028613C (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x140286540 (MiUnlockPoolCommitWs.c)
 *     MiRelockFaultState @ 0x140286E98 (MiRelockFaultState.c)
 *     MiCaptureDeleteHierarchy @ 0x14028ACA0 (MiCaptureDeleteHierarchy.c)
 *     MiSetPagingOfDriver @ 0x140290D84 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293D54 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiUnlockFaultPageTable @ 0x1402A1748 (MiUnlockFaultPageTable.c)
 *     MiProtectPrivateMemory @ 0x1402A2880 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiComputePageCommitment @ 0x1402E4AB0 (MiComputePageCommitment.c)
 *     MiEvictPageTableLock @ 0x1402E5230 (MiEvictPageTableLock.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiIsPageTableDeletable @ 0x1402E5884 (MiIsPageTableDeletable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5B30 (MiUnlockNestedPageTableWritePte.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324E4C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiReleaseWalkLocks @ 0x14033D29C (MiReleaseWalkLocks.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D3AC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeSystemCachePteValid @ 0x140345DCC (MiMakeSystemCachePteValid.c)
 *     MiFillHyperPtes @ 0x140349430 (MiFillHyperPtes.c)
 *     MiMarkPteDirty @ 0x14034B510 (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14034BA3C (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x14034EA60 (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x140351578 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x1403620B4 (MiMakeProtoLeafValid.c)
 *     MiUnlockPageTable @ 0x1403764D8 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x14038E714 (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x14038EF90 (MiGetNextNonGapPfnPage.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A7570 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B1544 (MiGetWsAndMakePageTablesNx.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D4058 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReacquireWalkLocks @ 0x14046B9C8 (MiReacquireWalkLocks.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617C30 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x140619E30 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14061E1D8 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x1406264E0 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062C6B0 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062CF80 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D6CC (MiDeprioritizeVirtualAddresses.c)
 *     MiFaultInPagedPool @ 0x140630B58 (MiFaultInPagedPool.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630C30 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14063137C (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1406316F4 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632A38 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x14063318C (MiSwitchToTransition.c)
 *     MiMapRetpolineStubs @ 0x1406406DC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641214 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x1406422A8 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406428C8 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x14064307C (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x1406443C4 (MiDeleteKernelShadowStack.c)
 *     MmUpdateUserShadowStackValue @ 0x140646780 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646A10 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140647238 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648248 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140648B88 (MiWriteEnclavePte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648F4C (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140649330 (MiWorkingSetInfoCheckPageTable.c)
 *     MiProtectAweRegion @ 0x14064B3A4 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064BED8 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064D054 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14064D1E0 (MiUnlockPageTableRange.c)
 *     MiMakeProtoPrivate @ 0x14064D2D4 (MiMakeProtoPrivate.c)
 *     MiUnlockWorkingSetOptimal @ 0x140650330 (MiUnlockWorkingSetOptimal.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D6C0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E43C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065F7D4 (MiReleaseLargePdeMappings.c)
 *     MiComputeIdealLargePage @ 0x140667720 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x140668DC0 (MiMapUserLargePages.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7C00 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x1403197D8 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockChainValid @ 0x14031A6D0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571548 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FF6C (KiHaltOnAddressWakeEntireList.c)
 */

void __fastcall MiUnlockPageTableInternal(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  char v4; // dl
  signed __int64 v5; // rdx
  bool v6; // zf
  signed __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v10; // eax
  int v11; // edx
  signed __int32 v12; // ett
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rdi
  __int64 Next; // rax
  __int64 Lock; // rcx
  char v16; // al
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v18; // r9
  int v19; // eax
  struct _LIST_ENTRY *Flink; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  signed __int32 v23[8]; // [rsp+0h] [rbp-38h] BYREF
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v25; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v4 = v2 & 7;
  v25 = 0;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v4 )
    {
      v16 = v2 & 7;
      if ( v16 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v16 == 5 )
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        else
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(SelfmapLockHandle, retaddr);
      return;
    }
    _m_prefetchw(SelfmapLockHandle);
    Next = (__int64)SelfmapLockHandle->LockQueue.Next;
    if ( !SelfmapLockHandle->LockQueue.Next )
    {
      if ( SelfmapLockHandle == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                         (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
                                                         0LL,
                                                         (signed __int64)SelfmapLockHandle) )
        return;
      Next = KxWaitForLockChainValid(SelfmapLockHandle);
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    Lock = (__int64)SelfmapLockHandle->LockQueue.Lock;
    if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(Next + 8), Lock)) & 4) != 0 )
    {
      _InterlockedOr(v23, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(Next + 8) >> 5) & 0x7F], 0LL));
    }
  }
  else
  {
    if ( a2 < 0xFFFFF6FB7DBED000uLL )
      goto LABEL_3;
    if ( v4 )
    {
      if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v25);
        v10 = *PageTableLockBuffer;
        v11 = ~(3 << v25);
        do
        {
          v12 = v10;
          v10 = _InterlockedCompareExchange(PageTableLockBuffer, v10 & v11, v10);
        }
        while ( v12 != v10 );
        return;
      }
      goto LABEL_3;
    }
    if ( a2 > 0xFFFFF6FB7DBEDFFFuLL
      || (v8 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624)) == 0 )
    {
LABEL_3:
      v5 = *(_QWORD *)a2;
      if ( a2 >= 0xFFFFF6FB7DBED000uLL
        && a2 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v5 & 1) != 0
        && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v21 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
          v22 = v5 | 0x20;
          if ( (v21 & 0x20) == 0 )
            v22 = *(_QWORD *)a2;
          v5 = v22;
          if ( (v21 & 0x42) != 0 )
            v5 = v22 | 0x42;
        }
      }
      do
      {
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v5 & 0xCFFFFFFFFFFFFFFFuLL, v5);
        v6 = v5 == v7;
        v5 = v7;
      }
      while ( !v6 );
      return;
    }
    v18 = (a2 >> 3) & 0x1FF;
    v19 = *(_DWORD *)(v8 + 4 * v18);
    if ( (v19 & 0x3FFFFFFF) != 0 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v8 + 4 * v18));
    }
    else
    {
      if ( v19 >= 0 )
        KeBugCheckEx(0x10u, v8 + 4 * v18, 0x100uLL, 0LL, 0LL);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 4 * v18));
    }
  }
}
