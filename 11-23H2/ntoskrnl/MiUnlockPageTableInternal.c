/*
 * XREFs of MiUnlockPageTableInternal @ 0x140319850
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
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiResolvePageTablePage @ 0x1402360F0 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x140236A10 (MiLockPageLeafPageTable.c)
 *     MiFastLockLeafPageTable @ 0x140237350 (MiFastLockLeafPageTable.c)
 *     MiProbeAndLockComplete @ 0x140238940 (MiProbeAndLockComplete.c)
 *     MiCheckProcessShadow @ 0x14023F1D0 (MiCheckProcessShadow.c)
 *     MiLockLowestValidPageTable @ 0x14025A520 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTables @ 0x14025BF90 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14025C400 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14025D330 (MiGetNextPageTablePte.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiSetVaAgeList @ 0x140270C70 (MiSetVaAgeList.c)
 *     MiQueryAddressState @ 0x140271E90 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x140273550 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x140273BA0 (MiCountSharedPages.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x140277940 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x14027C860 (MiClearPteAccessed.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F460 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027FA60 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x1402810A0 (MiWsleFlush.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     MiDeleteKernelStack @ 0x140283C20 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402845A0 (MiSetSystemCodeProtection.c)
 *     MiFillPoolCommitPageTable @ 0x140285620 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x1402863CC (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x1402867D0 (MiUnlockPoolCommitWs.c)
 *     MiRelockFaultState @ 0x140287128 (MiRelockFaultState.c)
 *     MiCaptureDeleteHierarchy @ 0x14028AF30 (MiCaptureDeleteHierarchy.c)
 *     MiSetPagingOfDriver @ 0x140291014 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiUnlockFaultPageTable @ 0x1402A19D8 (MiUnlockFaultPageTable.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiComputePageCommitment @ 0x1402E4D40 (MiComputePageCommitment.c)
 *     MiEvictPageTableLock @ 0x1402E54C0 (MiEvictPageTableLock.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E5680 (MiIsCfgBitMapPageShared.c)
 *     MiIsPageTableDeletable @ 0x1402E5B14 (MiIsPageTableDeletable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402E5DC0 (MiUnlockNestedPageTableWritePte.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiLockPagedAddress @ 0x1402ED780 (MiLockPagedAddress.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F17EC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403250DC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiReleaseWalkLocks @ 0x14033D52C (MiReleaseWalkLocks.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D63C (MiFlushDirtyBitsToPfn.c)
 *     MiMakeSystemCachePteValid @ 0x14034605C (MiMakeSystemCachePteValid.c)
 *     MiFillHyperPtes @ 0x1403496C0 (MiFillHyperPtes.c)
 *     MiMarkPteDirty @ 0x14034B6B0 (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14034BBDC (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x14034EC00 (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x140351718 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x140362254 (MiMakeProtoLeafValid.c)
 *     MiUnlockPageTable @ 0x140376678 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x14038E8F4 (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x14038F170 (MiGetNextNonGapPfnPage.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A7750 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B1724 (MiGetWsAndMakePageTablesNx.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D4238 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReacquireWalkLocks @ 0x14046BDC8 (MiReacquireWalkLocks.c)
 *     MiCheckCommitReleaseFromVad @ 0x140618180 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x14061A380 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14061E728 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x140626A30 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x140628E4C (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062CC00 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062D4D0 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 *     MiFaultInPagedPool @ 0x1406310A8 (MiFaultInPagedPool.c)
 *     MiInsertViewOfPhysicalSection @ 0x140631180 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406318CC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631C44 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406336DC (MiSwitchToTransition.c)
 *     MiMapRetpolineStubs @ 0x140640C2C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641764 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x1406427F8 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642E18 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x1406435CC (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x140644914 (MiDeleteKernelShadowStack.c)
 *     MmUpdateUserShadowStackValue @ 0x140646CD0 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646F60 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140647788 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648798 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x1406490D8 (MiWriteEnclavePte.c)
 *     MiQueryVaPhysicalContiguity @ 0x14064949C (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140649880 (MiWorkingSetInfoCheckPageTable.c)
 *     MiProtectAweRegion @ 0x14064B8F4 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064C428 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064D5A4 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14064D730 (MiUnlockPageTableRange.c)
 *     MiMakeProtoPrivate @ 0x14064D824 (MiMakeProtoPrivate.c)
 *     MiUnlockWorkingSetOptimal @ 0x140650880 (MiUnlockWorkingSetOptimal.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065FD24 (MiReleaseLargePdeMappings.c)
 *     MiComputeIdealLargePage @ 0x140667C70 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 *     MiMarkBootKernelStack @ 0x140B45D4C (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x140B5B894 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x140319A68 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockChainValid @ 0x14031A960 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140571A88 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14058045C (KiHaltOnAddressWakeEntireList.c)
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
