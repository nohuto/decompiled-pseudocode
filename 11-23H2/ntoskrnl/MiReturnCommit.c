/*
 * XREFs of MiReturnCommit @ 0x1402DC250
 * Callers:
 *     MiDeleteSessionPdes @ 0x140200FD8 (MiDeleteSessionPdes.c)
 *     MiSessionUpdateImageCharges @ 0x14020AAD4 (MiSessionUpdateImageCharges.c)
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     MiCleanupPageTablePages @ 0x140212030 (MiCleanupPageTablePages.c)
 *     MmFreePoolMemory @ 0x140212224 (MmFreePoolMemory.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiChargeCrossPartitionSharedPage @ 0x140217824 (MiChargeCrossPartitionSharedPage.c)
 *     MiDeleteSegmentPages @ 0x140219670 (MiDeleteSegmentPages.c)
 *     MiFreePageFileHashPfns @ 0x14021D960 (MiFreePageFileHashPfns.c)
 *     MiProbeLockFrame @ 0x140236500 (MiProbeLockFrame.c)
 *     MiUnlockImageSection @ 0x14025A460 (MiUnlockImageSection.c)
 *     MiResolveTransitionFault @ 0x1402624D0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MmCreateKernelStack @ 0x1402716A0 (MmCreateKernelStack.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     MiDeleteKernelStack @ 0x140283990 (MiDeleteKernelStack.c)
 *     MiReturnExcessPoolCommit @ 0x140286598 (MiReturnExcessPoolCommit.c)
 *     MiDeleteProcessShadow @ 0x14029172C (MiDeleteProcessShadow.c)
 *     MiMakePartitionActive @ 0x140292600 (MiMakePartitionActive.c)
 *     MiUnlockWsle @ 0x1402A2700 (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
 *     MiFreeMdlPageRun @ 0x1402C89E0 (MiFreeMdlPageRun.c)
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
 *     MiDeletePerSessionProtos @ 0x14033EBC4 (MiDeletePerSessionProtos.c)
 *     MiReturnPoolCharges @ 0x140340768 (MiReturnPoolCharges.c)
 *     MiDeleteSystemPageTableTail @ 0x1403408A0 (MiDeleteSystemPageTableTail.c)
 *     MmReleaseResourceCharge @ 0x140345258 (MmReleaseResourceCharge.c)
 *     MiReturnFaultCharges @ 0x14035FEC0 (MiReturnFaultCharges.c)
 *     MiReturnSplitPageCharges @ 0x14037644C (MiReturnSplitPageCharges.c)
 *     MiPfnRangeIsZero @ 0x14038F184 (MiPfnRangeIsZero.c)
 *     MiDeleteBootRange @ 0x14038FEF8 (MiDeleteBootRange.c)
 *     MiFreeSlabEntry @ 0x1403B86D0 (MiFreeSlabEntry.c)
 *     MiFindContiguousPagesEx @ 0x1403BB018 (MiFindContiguousPagesEx.c)
 *     MiFreeContiguousPages @ 0x1403C39DC (MiFreeContiguousPages.c)
 *     MiRebuildLargePage @ 0x14046E7E8 (MiRebuildLargePage.c)
 *     MiManageUltraSpacePageTable @ 0x14046EC9C (MiManageUltraSpacePageTable.c)
 *     MiReleaseCommitForResetPages @ 0x1406190E8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140619278 (MiReleaseOutSwappedProcessCommit.c)
 *     MiEnableNewPfns @ 0x14061A960 (MiEnableNewPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x140623230 (MiFreeSmallPageFromMdl.c)
 *     MiReturnMdlCharges @ 0x140623650 (MiReturnMdlCharges.c)
 *     MiSetPagesModified @ 0x1406288FC (MiSetPagesModified.c)
 *     MiUnlinkBadPages @ 0x14062AD10 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1406324AC (MiPrefetchReleasePreallocatedPages.c)
 *     MiAttemptPageFileReductionApc @ 0x140637D70 (MiAttemptPageFileReductionApc.c)
 *     MiDeleteKernelShadowStack @ 0x1406443C4 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140644964 (MiInitializeBootShadowStackPage.c)
 *     MmCreateKernelShadowStack @ 0x14064512C (MmCreateKernelShadowStack.c)
 *     MiFreeContiguousLargePageRun @ 0x140649DB8 (MiFreeContiguousLargePageRun.c)
 *     MiMoveBadPageCrossPartition @ 0x14064D904 (MiMoveBadPageCrossPartition.c)
 *     MiDeleteSubsectionLargePages @ 0x14064EDA8 (MiDeleteSubsectionLargePages.c)
 *     MiFreeSecureKernelPage @ 0x140656984 (MiFreeSecureKernelPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065749C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406577AC (MmAllocateSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140657CB8 (MmFreeNonChargedSecurePages.c)
 *     MiInsertPartitionPages @ 0x14065A480 (MiInsertPartitionPages.c)
 *     MiTransferPartitionPageRun @ 0x14065B604 (MiTransferPartitionPageRun.c)
 *     MiProcessVaContiguityInformation @ 0x14065D9B4 (MiProcessVaContiguityInformation.c)
 *     MiReleaseNonPagedResources @ 0x14066106C (MiReleaseNonPagedResources.c)
 *     MiReplenishUltraPageTables @ 0x140661B7C (MiReplenishUltraPageTables.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066480C (MiGetCrossPartitionCloneCharges.c)
 *     MiGetFileHashPage @ 0x140665F0C (MiGetFileHashPage.c)
 *     MiMapPageFileHash @ 0x1406662EC (MiMapPageFileHash.c)
 *     MiCreateLargePfnList @ 0x1406679EC (MiCreateLargePfnList.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140668644 (MiFreeLargeProcessPagesToCache.c)
 *     MiIdealClusterPage @ 0x14066A490 (MiIdealClusterPage.c)
 *     MiGetSubsectionCharges @ 0x14066B1A8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B3B4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDereferenceSessionFinal @ 0x140681B80 (MiDereferenceSessionFinal.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiRemoveVadCharges @ 0x1406FB440 (MiRemoveVadCharges.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 *     MmDeleteProcessAddressSpace @ 0x1407059E8 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x140705E50 (MmCreateProcessAddressSpace.c)
 *     MiDeleteVadBitmap @ 0x140706BB4 (MiDeleteVadBitmap.c)
 *     MiDecommitRegion @ 0x140744560 (MiDecommitRegion.c)
 *     MiCreatePagingFileMap @ 0x140747994 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x140748008 (MiChargeSegmentCommit.c)
 *     MiReturnFullProcessCommitment @ 0x140764E54 (MiReturnFullProcessCommitment.c)
 *     MiAllocatePerSessionProtos @ 0x1407B5E60 (MiAllocatePerSessionProtos.c)
 *     MiMarkBootGuardPage @ 0x14081D648 (MiMarkBootGuardPage.c)
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     MiReturnSystemImageCommitment @ 0x140861800 (MiReturnSystemImageCommitment.c)
 *     MiRemovePhysicalMemory @ 0x140A2CC4C (MiRemovePhysicalMemory.c)
 *     MiRotateToFrameBuffer @ 0x140A316A0 (MiRotateToFrameBuffer.c)
 *     MiGetLargePagesForSystemMapping @ 0x140A322C4 (MiGetLargePagesForSystemMapping.c)
 *     MiDeletePagingFiles @ 0x140A329A8 (MiDeletePagingFiles.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A339DC (MiCreateFileOnlyImageFixupList.c)
 *     MiFreePartitionPhysicalPages @ 0x140A44AF4 (MiFreePartitionPhysicalPages.c)
 *     MiCreateBootSlabEntries @ 0x140B46868 (MiCreateBootSlabEntries.c)
 *     MiFreeBootDriverPages @ 0x140B47054 (MiFreeBootDriverPages.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140260360 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260E60 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403961E0 (MiSyncCommitSignals.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiRestockOverCommit @ 0x140656638 (MiRestockOverCommit.c)
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
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
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
