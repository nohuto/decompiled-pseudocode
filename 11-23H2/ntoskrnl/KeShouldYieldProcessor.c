/*
 * XREFs of KeShouldYieldProcessor @ 0x140333F00
 * Callers:
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MiChangePageAttributeContiguous @ 0x14021A6A0 (MiChangePageAttributeContiguous.c)
 *     MiChangePageAttributeBatch @ 0x14021C9B4 (MiChangePageAttributeBatch.c)
 *     MiDispatchFault @ 0x140238000 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiQueryAddressSpan @ 0x140273FF0 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x140277F10 (MiSetProtectionOnSection.c)
 *     NtUnlockVirtualMemory @ 0x1402833F0 (NtUnlockVirtualMemory.c)
 *     MiFillPoolCommitPageTable @ 0x140285620 (MiFillPoolCommitPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140285CA0 (MiMoveDirtyBitsToPfns.c)
 *     MiCommitPoolMemory @ 0x1402860C0 (MiCommitPoolMemory.c)
 *     MiWalkVaRange @ 0x140293FE4 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1402A2B10 (MiProtectPrivateMemory.c)
 *     NtLockVirtualMemory @ 0x1402A33B0 (NtLockVirtualMemory.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiGetFreeLargePagesSearchTypes @ 0x1402D86A0 (MiGetFreeLargePagesSearchTypes.c)
 *     MiUnlockMdlWritePages @ 0x1402D9DC0 (MiUnlockMdlWritePages.c)
 *     MmPurgeSection @ 0x1402DCB60 (MmPurgeSection.c)
 *     MiProbePacketContended @ 0x1402E6814 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x1402E6870 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F17EC (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiDereferenceIoPages @ 0x140336384 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140336790 (MiReferenceIoPages.c)
 *     MiDoGangAssignment @ 0x14038C044 (MiDoGangAssignment.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14038C0C0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiZeroPageCalibrateDpc @ 0x14038DE90 (MiZeroPageCalibrateDpc.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403B8540 (MiConvertSmallPageRangeToLarge.c)
 *     MiDemoteSlabEntriesDpc @ 0x1403CD2A0 (MiDemoteSlabEntriesDpc.c)
 *     MiWritePageFileHash @ 0x14046FA06 (MiWritePageFileHash.c)
 *     IopMcShouldYield @ 0x14055FA90 (IopMcShouldYield.c)
 *     MiInitializeDynamicPfns @ 0x14061B448 (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x140620AF0 (MiHugePageOperation.c)
 *     MiSetGraphicsPtes @ 0x140626A30 (MiSetGraphicsPtes.c)
 *     MiUnlinkBadPages @ 0x14062B260 (MiUnlinkBadPages.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DF20 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x14062ECAC (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiInsertViewOfPhysicalSection @ 0x140631180 (MiInsertViewOfPhysicalSection.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1406318CC (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x140631C44 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632F88 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14063D350 (MiEnableLargeSubsection.c)
 *     MiAddPagesToEnclave @ 0x140646F60 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140647788 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647A30 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140648798 (MiProtectEnclavePages.c)
 *     MiQueryVaPhysicalContiguity @ 0x14064949C (MiQueryVaPhysicalContiguity.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x14064B638 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x14064CB0C (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x14064D970 (MiArePageContentsZero.c)
 *     MiTransferPartitionPageRun @ 0x14065BB54 (MiTransferPartitionPageRun.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065DC10 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiScrubLargeMappedPage @ 0x14065E98C (MiScrubLargeMappedPage.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405FDA1C (EtwTraceShouldYieldProcessor.c)
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
