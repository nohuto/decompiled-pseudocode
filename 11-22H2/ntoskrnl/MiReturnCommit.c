/*
 * XREFs of MiReturnCommit @ 0x1402DC250
 * Callers:
 *     MiDeleteSessionPdes @ 0x140200FD8 (MiDeleteSessionPdes.c)
 *     MiSessionUpdateImageCharges @ 0x14020AAF4 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MiCleanupPageTablePages @ 0x140212050 (MiCleanupPageTablePages.c)
 *     MmFreePoolMemory @ 0x140212244 (MmFreePoolMemory.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiChargeCrossPartitionSharedPage @ 0x140217844 (MiChargeCrossPartitionSharedPage.c)
 *     MiDeleteSegmentPages @ 0x140219690 (MiDeleteSegmentPages.c)
 *     MiFreePageFileHashPfns @ 0x14021D980 (MiFreePageFileHashPfns.c)
 *     MiProbeLockFrame @ 0x1402364E0 (MiProbeLockFrame.c)
 *     MiUnlockImageSection @ 0x14025A340 (MiUnlockImageSection.c)
 *     MiResolveTransitionFault @ 0x1402623B0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MmCreateKernelStack @ 0x140271580 (MmCreateKernelStack.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeleteKernelStack @ 0x140283870 (MiDeleteKernelStack.c)
 *     MiReturnExcessPoolCommit @ 0x140286478 (MiReturnExcessPoolCommit.c)
 *     MiDeleteProcessShadow @ 0x14029160C (MiDeleteProcessShadow.c)
 *     MiMakePartitionActive @ 0x1402924E0 (MiMakePartitionActive.c)
 *     MiUnlockWsle @ 0x1402A25E0 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiFreeMdlPageRun @ 0x1402C89B0 (MiFreeMdlPageRun.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402D9300 (MiFinishHardFault.c)
 *     MiUnlockMdlWritePages @ 0x1402D9B30 (MiUnlockMdlWritePages.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x1402DC320 (MiChargeForLockedPage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiUnlockPageTableCharges @ 0x1402E2B40 (MiUnlockPageTableCharges.c)
 *     MiGetPageTablePages @ 0x1402E40B8 (MiGetPageTablePages.c)
 *     MiObtainSystemCharges @ 0x1402E4250 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiReplenishSlabAllocator @ 0x1402E6AC4 (MiReplenishSlabAllocator.c)
 *     MiAllocateSlabEntry @ 0x1402E6C40 (MiAllocateSlabEntry.c)
 *     MiFinishLargePageFree @ 0x1402E7594 (MiFinishLargePageFree.c)
 *     MiDeleteUltraMapContext @ 0x1402E92DC (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402EC46C (MiCreateUltraThreadContextHelper.c)
 *     MiReturnCrossPartitionCloneCharges @ 0x1402F3DC0 (MiReturnCrossPartitionCloneCharges.c)
 *     MiWriteCompletePfn @ 0x1402F4750 (MiWriteCompletePfn.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402F48D8 (MiReleaseWriteInProgressCharges.c)
 *     MiObtainMdlCharges @ 0x1402F8E6C (MiObtainMdlCharges.c)
 *     MiDeletePerSessionProtos @ 0x14033E9C4 (MiDeletePerSessionProtos.c)
 *     MiReturnPoolCharges @ 0x140340278 (MiReturnPoolCharges.c)
 *     MiDeleteSystemPageTableTail @ 0x1403403B0 (MiDeleteSystemPageTableTail.c)
 *     MmReleaseResourceCharge @ 0x140344D68 (MmReleaseResourceCharge.c)
 *     MiReturnFaultCharges @ 0x14035F870 (MiReturnFaultCharges.c)
 *     MiReturnSplitPageCharges @ 0x140376A9C (MiReturnSplitPageCharges.c)
 *     MiPfnRangeIsZero @ 0x14038D604 (MiPfnRangeIsZero.c)
 *     MiDeleteBootRange @ 0x14038E378 (MiDeleteBootRange.c)
 *     MiFreeSlabEntry @ 0x1403B8070 (MiFreeSlabEntry.c)
 *     MiFindContiguousPagesEx @ 0x1403BA9B8 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403C337C (MiFreeContiguousPages.c)
 *     MiRebuildLargePage @ 0x14046E188 (MiRebuildLargePage.c)
 *     MiManageUltraSpacePageTable @ 0x14046E63C (MiManageUltraSpacePageTable.c)
 *     MiReleaseCommitForResetPages @ 0x140619158 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406192E8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEnableNewPfns @ 0x14061A9D0 (MiEnableNewPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x1406232A0 (MiFreeSmallPageFromMdl.c)
 *     MiReturnMdlCharges @ 0x1406236C0 (MiReturnMdlCharges.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     MiUnlinkBadPages @ 0x14062AD80 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14063251C (MiPrefetchReleasePreallocatedPages.c)
 *     MiAttemptPageFileReductionApc @ 0x140637DE0 (MiAttemptPageFileReductionApc.c)
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x1406449D4 (MiInitializeBootShadowStackPage.c)
 *     MmCreateKernelShadowStack @ 0x14064519C (MmCreateKernelShadowStack.c)
 *     MiFreeContiguousLargePageRun @ 0x140649E28 (MiFreeContiguousLargePageRun.c)
 *     MiMoveBadPageCrossPartition @ 0x14064D974 (MiMoveBadPageCrossPartition.c)
 *     MiDeleteSubsectionLargePages @ 0x14064EE18 (MiDeleteSubsectionLargePages.c)
 *     MiFreeSecureKernelPage @ 0x1406569F4 (MiFreeSecureKernelPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065750C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x14065781C (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140657D28 (MmFreeNonChargedSecurePages.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x14065B674 (MiTransferPartitionPageRun.c)
 *     MiProcessVaContiguityInformation @ 0x14065DA24 (MiProcessVaContiguityInformation.c)
 *     MiReleaseNonPagedResources @ 0x1406610DC (MiReleaseNonPagedResources.c)
 *     MiReplenishUltraPageTables @ 0x140661BEC (MiReplenishUltraPageTables.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066487C (MiGetCrossPartitionCloneCharges.c)
 *     MiGetFileHashPage @ 0x140665F7C (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x14066635C (MiMapPageFileHash.c)
 *     MiCreateLargePfnList @ 0x140667A5C (MiCreateLargePfnList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406686B4 (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x14066A500 (MiIdealClusterPage.c)
 *     MiGetSubsectionCharges @ 0x14066B218 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B424 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiRemoveVadCharges @ 0x1406FB4F0 (MiRemoveVadCharges.c)
 *     MiFreeInitializationCode @ 0x140703BAC (MiFreeInitializationCode.c)
 *     MmDeleteProcessAddressSpace @ 0x140705A98 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140706C64 (MiDeleteVadBitmap.c)
 *     MiDecommitRegion @ 0x140744A70 (MiDecommitRegion.c)
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x140748518 (MiChargeSegmentCommit.c)
 *     MiReturnFullProcessCommitment @ 0x140765364 (MiReturnFullProcessCommitment.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 *     MiMarkBootGuardPage @ 0x14081FBC8 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     MiReturnSystemImageCommitment @ 0x1408618D0 (MiReturnSystemImageCommitment.c)
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiGetLargePagesForSystemMapping @ 0x140A32334 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x140A32A18 (MiDeletePagingFiles.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A33A4C (MiCreateFileOnlyImageFixupList.c)
 *     MiFreePartitionPhysicalPages @ 0x140A44B64 (MiFreePartitionPhysicalPages.c)
 *     MiCreateBootSlabEntries @ 0x140B49F68 (MiCreateBootSlabEntries.c)
 *     MiFreeBootDriverPages @ 0x140B4A754 (MiFreeBootDriverPages.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x140394660 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x1406566A8 (MiRestockOverCommit.c)
 */

void __fastcall MiReturnCommit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KPRCB *v4; // rdx
  __int64 CachedCommit; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v2 = a2;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( !*(_QWORD *)(a1 + 16440) )
      goto LABEL_27;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 16424), &LockHandle);
    v2 = MiRestockOverCommit(a1, v2);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
    {
LABEL_27:
      if ( (_UNKNOWN *)a1 == &MiSystemPartition
        && (v4 = KeGetCurrentPrcb(),
            _m_prefetchw((const void *)&v4->CachedCommit),
            CachedCommit = v4->CachedCommit,
            (unsigned __int64)(v2 + CachedCommit) <= 0x100) )
      {
        while ( 1 )
        {
          v6 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&v4->CachedCommit,
                 v2 + CachedCommit,
                 CachedCommit);
          if ( v6 == CachedCommit )
            break;
          CachedCommit = v6;
          if ( (unsigned __int64)(v6 + v2) > 0x100 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17576), -v2);
        v8 = *(_QWORD *)(a1 + 16416);
        if ( v7 >= v8 && v7 - v2 < v8 || (v9 = *(_QWORD *)(a1 + 16408), v7 >= v9) && v7 - v2 < v9 )
          MiSyncCommitSignals(a1, 0LL);
      }
    }
  }
}
