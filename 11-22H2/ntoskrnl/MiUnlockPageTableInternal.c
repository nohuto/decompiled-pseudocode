/*
 * XREFs of MiUnlockPageTableInternal @ 0x1403193E0
 * Callers:
 *     MiConvertAndFlushWsleVas @ 0x14020B2FC (MiConvertAndFlushWsleVas.c)
 *     MiClearNonPagedPtes @ 0x140212478 (MiClearNonPagedPtes.c)
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x140217EB0 (MiSoftFaultMappedView.c)
 *     MiOutPageSingleKernelStack @ 0x14021B5A0 (MiOutPageSingleKernelStack.c)
 *     MiCopyToUserVa @ 0x14021CBFC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MiInitializeWorkingSetList @ 0x140223444 (MiInitializeWorkingSetList.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiResolvePageTablePage @ 0x140236000 (MiResolvePageTablePage.c)
 *     MiLockPageLeafPageTable @ 0x140236920 (MiLockPageLeafPageTable.c)
 *     MiFastLockLeafPageTable @ 0x140237260 (MiFastLockLeafPageTable.c)
 *     MiProbeAndLockComplete @ 0x140238850 (MiProbeAndLockComplete.c)
 *     MiCheckProcessShadow @ 0x14023F0E0 (MiCheckProcessShadow.c)
 *     MiLockLowestValidPageTable @ 0x14025A170 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTables @ 0x14025BBE0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14025C050 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14025CF80 (MiGetNextPageTablePte.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267740 (MiMakeSystemCacheRangeValid.c)
 *     MiSetVaAgeList @ 0x1402708C0 (MiSetVaAgeList.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiAllocateKernelStackPages @ 0x1402731A0 (MiAllocateKernelStackPages.c)
 *     MiCountSharedPages @ 0x1402737F0 (MiCountSharedPages.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiMakeHyperRangeAccessible @ 0x140277590 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeletePagablePteRange @ 0x14027A040 (MiDeletePagablePteRange.c)
 *     MiClearPteAccessed @ 0x14027C4B0 (MiClearPteAccessed.c)
 *     MmSetAddressRangeModifiedEx @ 0x14027F0B0 (MmSetAddressRangeModifiedEx.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiWsleFlush @ 0x140280CF0 (MiWsleFlush.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiDeleteKernelStack @ 0x140283870 (MiDeleteKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x1402841F0 (MiSetSystemCodeProtection.c)
 *     MiFillPoolCommitPageTable @ 0x140285270 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x140285D10 (MiCommitPoolMemory.c)
 *     MiLockPoolCommitPageTable @ 0x14028601C (MiLockPoolCommitPageTable.c)
 *     MiUnlockPoolCommitWs @ 0x140286420 (MiUnlockPoolCommitWs.c)
 *     MiRelockFaultState @ 0x140286D78 (MiRelockFaultState.c)
 *     MiCaptureDeleteHierarchy @ 0x14028AB80 (MiCaptureDeleteHierarchy.c)
 *     MiSetPagingOfDriver @ 0x140290C64 (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiUnlockFaultPageTable @ 0x1402A1628 (MiUnlockFaultPageTable.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
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
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140324C6C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiReleaseWalkLocks @ 0x14033D09C (MiReleaseWalkLocks.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D1AC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeSystemCachePteValid @ 0x1403458DC (MiMakeSystemCachePteValid.c)
 *     MiFillHyperPtes @ 0x140348F40 (MiFillHyperPtes.c)
 *     MiMarkPteDirty @ 0x14034AF10 (MiMarkPteDirty.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14034B43C (MiUnlockProbePacketWorkingSet.c)
 *     MiEncodeProtoFill @ 0x14034E460 (MiEncodeProtoFill.c)
 *     MiDirtySystemCachePte @ 0x140350F78 (MiDirtySystemCachePte.c)
 *     MiMakeProtoLeafValid @ 0x140361A64 (MiMakeProtoLeafValid.c)
 *     MiUnlockPageTable @ 0x140376B28 (MiUnlockPageTable.c)
 *     MiMapWithLargePages @ 0x14038CB94 (MiMapWithLargePages.c)
 *     MiGetNextNonGapPfnPage @ 0x14038D410 (MiGetNextNonGapPfnPage.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiMapMdlCommon @ 0x1403A6DE0 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403B0EB4 (MiGetWsAndMakePageTablesNx.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403D39F8 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReacquireWalkLocks @ 0x14046B368 (MiReacquireWalkLocks.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617CA0 (MiCheckCommitReleaseFromVad.c)
 *     MiLockDriverPageRange @ 0x140619EA0 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x14061E248 (MiUnmapMdlCommon.c)
 *     MiSetGraphicsPtes @ 0x140626550 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x14062CFF0 (MiJumpStackTarget.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D73C (MiDeprioritizeVirtualAddresses.c)
 *     MiFaultInPagedPool @ 0x140630BC8 (MiFaultInPagedPool.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406313EC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631764 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632AA8 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiMapRetpolineStubs @ 0x14064074C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641284 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MiCommitHotPatchTable @ 0x140642318 (MiCommitHotPatchTable.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642938 (MiPrepareImagePagesForHotPatch.c)
 *     MmMapHotPatchTablePage @ 0x1406430EC (MmMapHotPatchTablePage.c)
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 *     MmUpdateUserShadowStackValue @ 0x1406467F0 (MmUpdateUserShadowStackValue.c)
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1406472A8 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 *     MiWriteEnclavePte @ 0x140648BF8 (MiWriteEnclavePte.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648FBC (MiQueryVaPhysicalContiguity.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1406493A0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiUnmapLegacyAwePage @ 0x14064BF48 (MiUnmapLegacyAwePage.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiLockPageTableRange @ 0x14064D0C4 (MiLockPageTableRange.c)
 *     MiUnlockPageTableRange @ 0x14064D250 (MiUnlockPageTableRange.c)
 *     MiMakeProtoPrivate @ 0x14064D344 (MiMakeProtoPrivate.c)
 *     MiUnlockWorkingSetOptimal @ 0x1406503A0 (MiUnlockWorkingSetOptimal.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D730 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 *     MiReleaseLargePdeMappings @ 0x14065F844 (MiReleaseLargePdeMappings.c)
 *     MiComputeIdealLargePage @ 0x140667790 (MiComputeIdealLargePage.c)
 *     MiMapUserLargePages @ 0x140668E30 (MiMapUserLargePages.c)
 *     MiMarkBootKernelStack @ 0x140B4944C (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x140B5E8D4 (MmFreeLoaderBlock.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x1403195F8 (MiGetPageTableLockBuffer.c)
 *     KxWaitForLockChainValid @ 0x14031A4F0 (KxWaitForLockChainValid.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405715E8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057FFFC (KiHaltOnAddressWakeEntireList.c)
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
