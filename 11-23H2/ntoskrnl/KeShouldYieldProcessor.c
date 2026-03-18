/*
 * XREFs of KeShouldYieldProcessor @ 0x140333C70
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x14021C9B4 (MiChangePageAttributeBatch.c)
 *     MiDispatchFault @ 0x140237F30 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x14026C700 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140273D60 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x140277C80 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x140283160 (NtUnlockVirtualMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140285390 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285A10 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x140285E30 (MiCommitPoolMemory.c)
 *     MiWalkVaRange @ 0x140293D54 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1402A2880 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     MiGetFreeLargePagesSearchTypes @ 0x1402D8410 (MiGetFreeLargePagesSearchTypes.c)
 *     MiUnlockMdlWritePages @ 0x1402D9B30 (MiUnlockMdlWritePages.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiProbePacketContended @ 0x1402E6584 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiDereferenceIoPages @ 0x1403360F4 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140336500 (MiReferenceIoPages.c)
 *     MiDoGangAssignment @ 0x14038BE64 (MiDoGangAssignment.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14038BEE0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiZeroPageCalibrateDpc @ 0x14038DCB0 (MiZeroPageCalibrateDpc.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B8360 (MiConvertSmallPageRangeToLarge.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403CD0C0 (MiDemoteSlabEntriesDpc.c)
 *     MiWritePageFileHash @ 0x14046F606 (MiWritePageFileHash.c)
 *     IopMcShouldYield @ 0x14055F3D0 (IopMcShouldYield.c)
 *     MiInitializeDynamicPfns @ 0x14061AEF8 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x1406205A0 (MiHugePageOperation.c)
 *     MiSetGraphicsPtes @ 0x1406264E0 (MiSetGraphicsPtes.c)
 *     MiUnlinkBadPages @ 0x14062AD10 (MiUnlinkBadPages.c)
 *     MiDeleteStaleCacheMaps @ 0x14062D9D0 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062E75C (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630C30 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14063137C (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1406316F4 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632A38 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecrementLargeSubsections @ 0x14063C6F4 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14063CE00 (MiEnableLargeSubsection.c)
 *     MiAddPagesToEnclave @ 0x140646A10 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140647238 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1406474E0 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648248 (MiProtectEnclavePages.c)
 *     MiQueryVaPhysicalContiguity @ 0x140648F4C (MiQueryVaPhysicalContiguity.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x14064B0E8 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x14064C5BC (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x14064D420 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x14065B604 (MiTransferPartitionPageRun.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D6C0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E43C (MiScrubLargeMappedPage.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x140668DC0 (MiMapUserLargePages.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FD4AC (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rax
  LOGICAL v1; // edi
  int v2; // r8d
  __int64 v3; // r9
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // ebp
  _KTHREAD *NextThread; // rcx
  unsigned int v9; // esi
  struct _KPRCB *v10; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  v2 = 0;
  v3 = 0LL;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v9 = 1;
    v2 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_14;
      goto LABEL_10;
    }
    goto LABEL_6;
  }
  if ( !CurrentPrcb->NestingLevel )
  {
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v9 = 2;
      goto LABEL_14;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v9 = 3;
      goto LABEL_14;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v9 = 4;
      goto LABEL_14;
    }
LABEL_6:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v2 )
    {
LABEL_21:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      v10 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v12 = *SchedulerAssist;
        do
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
        }
        while ( v13 != v12 );
        if ( (v12 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v10);
      }
      _enable();
      v9 = 0;
      goto LABEL_14;
    }
    goto LABEL_10;
  }
  v3 = 1LL;
  if ( DpcWatchdogCount <= 7 )
    return 0;
  if ( CurrentPrcb->QuantumEnd )
  {
    v9 = 7;
    goto LABEL_14;
  }
LABEL_10:
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v9 = 5;
    goto LABEL_14;
  }
  if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
    goto LABEL_21;
  v9 = 6;
LABEL_14:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v9, DpcWatchdogCount, DpcTimeCount, v3);
  LOBYTE(v1) = v9 != 0;
  return v1;
}
