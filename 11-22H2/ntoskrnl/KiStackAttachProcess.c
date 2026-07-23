/*
 * XREFs of KiStackAttachProcess @ 0x14022D620
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020037C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x140207D84 (CmSiAcquireProcessLockedPagesCharge.c)
 *     MmEnforceWorkingSetLimit @ 0x14020C05C (MmEnforceWorkingSetLimit.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiDeleteFinalPageTables @ 0x140291494 (MiDeleteFinalPageTables.c)
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     IoRemoveIoCompletion @ 0x1402A9C40 (IoRemoveIoCompletion.c)
 *     KiUpdateProcessConcurrencyCount @ 0x1402C3090 (KiUpdateProcessConcurrencyCount.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9BBC (CmSiReleaseProcessLockedPagesCharge.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14030E7E0 (PspIsProcessReadyForRemoteThread.c)
 *     SepRmCallLsa @ 0x14031C700 (SepRmCallLsa.c)
 *     MiAttachWorkingSet @ 0x14033D7E4 (MiAttachWorkingSet.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403428E8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeStackAttachProcess @ 0x14034D950 (KeStackAttachProcess.c)
 *     KeForceAttachProcess @ 0x140352F38 (KeForceAttachProcess.c)
 *     PsQueryProcessCommandLine @ 0x1403540F0 (PsQueryProcessCommandLine.c)
 *     MmAttachSession @ 0x140355D50 (MmAttachSession.c)
 *     MiGetWorkingSetInfoEx @ 0x140362D5C (MiGetWorkingSetInfoEx.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x14037483C (CmSiSetProcessWorkingSetMaximum.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1403748F4 (CmSiProcessTupleStartFromHandle.c)
 *     SepAdtLogAuditRecord @ 0x14039B490 (SepAdtLogAuditRecord.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140464FA8 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     IoRaiseHardError @ 0x140556B20 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14056F7E0 (KeSecureProcess.c)
 *     KeCopyXfdMaskToTeb @ 0x140572540 (KeCopyXfdMaskToTeb.c)
 *     KiTpWriteMemory @ 0x14057EFFC (KiTpWriteMemory.c)
 *     PopStateTransitionTimeoutDispatch @ 0x14058F6E0 (PopStateTransitionTimeoutDispatch.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405C1808 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405C1D50 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     SmQuerySystemInformation @ 0x1405CDB30 (SmQuerySystemInformation.c)
 *     ExpSvmServicePageFault @ 0x14060EA10 (ExpSvmServicePageFault.c)
 *     MmSetCommitReleaseEligibility @ 0x140619ADC (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x14063574C (MmUpdateOldWorkingSetPages.c)
 *     MiFlushAllPages @ 0x140639C7C (MiFlushAllPages.c)
 *     MiLockDownWorkingSet @ 0x140665200 (MiLockDownWorkingSet.c)
 *     MiInSwapStoreWorker @ 0x1406817B0 (MiInSwapStoreWorker.c)
 *     MmPrefetchVirtualMemory @ 0x140681A70 (MmPrefetchVirtualMemory.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     MmAssignProcessToJob @ 0x1406A0694 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406A0894 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 *     MmCreateTeb @ 0x1406AAF44 (MmCreateTeb.c)
 *     MiMapImageInSystemSpace @ 0x1406AC9FC (MiMapImageInSystemSpace.c)
 *     MmInitializeProcessAddressSpace @ 0x1406B2A9C (MmInitializeProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7110 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MiCopyVirtualMemory @ 0x1406F79C0 (MiCopyVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1406F9280 (NtProtectVirtualMemory.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140708F70 (EtwpRealtimeInjectEtwBuffer.c)
 *     ExpWnfWriteStateData @ 0x1407140C0 (ExpWnfWriteStateData.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A2D8 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A518 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A8C8 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x14071ED50 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1407216D0 (MiMapViewOfSection.c)
 *     PspWriteTebImpersonationInfo @ 0x1407352F0 (PspWriteTebImpersonationInfo.c)
 *     MmProbeAndLockProcessPages @ 0x14073F300 (MmProbeAndLockProcessPages.c)
 *     ObSetHandleAttributes @ 0x14073FE00 (ObSetHandleAttributes.c)
 *     ExSweepHandleTable @ 0x140740170 (ExSweepHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1407402D4 (ObCloseHandleTableEntry.c)
 *     ObpDecrementHandleCount @ 0x140740464 (ObpDecrementHandleCount.c)
 *     PspAllocateThread @ 0x140740EE0 (PspAllocateThread.c)
 *     MmFreeVirtualMemory @ 0x1407455D0 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140747D40 (NtResetWriteWatch.c)
 *     PfSnAsyncPrefetchWorker @ 0x14074E1B0 (PfSnAsyncPrefetchWorker.c)
 *     EtwTraceAppStateChange @ 0x140751F08 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754D60 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessEvent @ 0x1407555EC (EtwpWriteProcessEvent.c)
 *     PfSnPopulateReadList @ 0x14075C890 (PfSnPopulateReadList.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     MmDeleteTeb @ 0x14076F0DC (MmDeleteTeb.c)
 *     PspWriteTebIdealProcessor @ 0x14076FF4C (PspWriteTebIdealProcessor.c)
 *     PspSetupUserStack @ 0x140774454 (PspSetupUserStack.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077DE68 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpEnableGuid @ 0x140780210 (EtwpEnableGuid.c)
 *     PspWow64InitThread @ 0x14079F8D4 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407A0D54 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A176C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1407A1DAC (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1407A2C0C (PspWritePebAffinityInfo.c)
 *     PsMapSystemDlls @ 0x1407A36D8 (PsMapSystemDlls.c)
 *     NtSetInformationVirtualMemory @ 0x1407A4530 (NtSetInformationVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A5200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PoEnergyContextStart @ 0x1407B15EC (PoEnergyContextStart.c)
 *     MmFlushVirtualMemory @ 0x1407B4808 (MmFlushVirtualMemory.c)
 *     SmFirstTimeInit @ 0x1407B82C4 (SmFirstTimeInit.c)
 *     PspQueryQuotaLimits @ 0x1407BD124 (PspQueryQuotaLimits.c)
 *     AlpcpRestoreWriteAccess @ 0x1407C34A0 (AlpcpRestoreWriteAccess.c)
 *     PspWow64SetupUserStack @ 0x1407DE950 (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1407DF14C (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x1407E2CA0 (EtwpTiQueryVad.c)
 *     PspSetQuotaLimits @ 0x1407E3E94 (PspSetQuotaLimits.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1407E83A4 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1407E8654 (PspDeleteUserStack.c)
 *     MiCombineIdenticalPages @ 0x1407EBA94 (MiCombineIdenticalPages.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     MmCreateShadowMapping @ 0x140820130 (MmCreateShadowMapping.c)
 *     EtwpProcessEnumCallback @ 0x140827970 (EtwpProcessEnumCallback.c)
 *     PsStartSiloMonitor @ 0x14084B360 (PsStartSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x14085A080 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140860EDC (MmInitializeHandBuiltProcess2.c)
 *     CmpMountPreloadedHives @ 0x1408632CC (CmpMountPreloadedHives.c)
 *     CmpStartCLFSLog @ 0x140873508 (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873814 (CmpAddRemoveContainerToCLFSLog.c)
 *     PspIumGetPhysicalPage @ 0x1408A6070 (PspIumGetPhysicalPage.c)
 *     DbgkSendSystemDllMessages @ 0x140936E84 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x1409374BC (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x14093776C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140937834 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x1409397BC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x1409450F4 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x1409453D0 (IopRaiseHardError.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x140975760 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x1409767C4 (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x14097958C (AlpcpForceUnlinkSecureView.c)
 *     PfSnAppLaunchScenarioControl @ 0x14097F790 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1409AE2D0 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409AEDCC (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1409AF098 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1409AFC00 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x1409B1010 (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x1409B1BBC (PspSetupUserShadowStack.c)
 *     PspApplyWorkingSetLimits @ 0x1409B1F60 (PspApplyWorkingSetLimits.c)
 *     PspCatchCriticalBreak @ 0x1409B3AD0 (PspCatchCriticalBreak.c)
 *     PsUnregisterSiloMonitor @ 0x1409B40C0 (PsUnregisterSiloMonitor.c)
 *     VmpPrefetchWorker @ 0x1409DD730 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1409E78B4 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1409E7B40 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFB10 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F2460 (EtwpCovSampEnumerateProcess.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5694 (EtwpTrackGuidEntryRegistrations.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A052C0 (NtPssCaptureVaSpaceBulk.c)
 *     MmQueryBadAddresses @ 0x140A2FE48 (MmQueryBadAddresses.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A350D8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiHotPatchAllProcesses @ 0x140A37478 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x140A39720 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3B60C (MiQueryProcessActivePatches.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BDD8 (MiUnapplyDriverHotPatch.c)
 *     MmIsFileMapped @ 0x140A3C65C (MmIsFileMapped.c)
 *     MmDeleteShadowMapping @ 0x140A3C840 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3D034 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E144 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E7B8 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A3EA04 (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x140A3EB20 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140A3F000 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x140A3F2E0 (NtLoadEnclaveData.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F9C0 (MiQueryMemoryPhysicalContiguity.c)
 *     MiAllocateUserPhysicalPages @ 0x140A403C8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42390 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140A43240 (MiInSwapSharedWorkingSetWorker.c)
 *     MmProcessWorkingSetControl @ 0x140A43584 (MmProcessWorkingSetControl.c)
 *     MiScrubActiveLargePage @ 0x140A463D8 (MiScrubActiveLargePage.c)
 *     MiAllocateChildVads @ 0x140A483EC (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x140A489C4 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x140A48D28 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x140A490FC (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140A493BC (MiCopyLargeVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD300 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140AB2C90 (ExpDebuggerWorker.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 *     PspInitPhase3 @ 0x140B76BC0 (PspInitPhase3.c)
 *     EmpMapPhysicalAddress @ 0x140B93E6C (EmpMapPhysicalAddress.c)
 * Callees:
 *     KiAttachProcess @ 0x14022DAD0 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x14022E140 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiInSwapSingleProcess @ 0x14034D5B4 (KiInSwapSingleProcess.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549930 (HvlSwitchVirtualAddressSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall KiStackAttachProcess(_KPROCESS *BugCheckParameter1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v4; // rax
  int v5; // ebx
  unsigned __int8 CurrentIrql; // r12
  __int64 v10; // r13
  $C71981A45BEB2B45F82C232A7085991E *v11; // rdx
  $115DCDF994C6370D29323EAB0E0C9502 *v12; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _KTHREAD *v14; // r8
  _LIST_ENTRY *v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 GroupIndex; // r13
  __int64 v19; // r14
  unsigned __int64 DirectoryTableBase; // rbp
  unsigned __int64 v21; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  unsigned __int8 v24; // cl
  struct _LIST_ENTRY *v25; // rcx
  _DWORD *v26; // r8
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v28; // rcx
  unsigned __int8 v29; // cl
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  bool v33; // zf
  int v35; // [rsp+30h] [rbp-38h] BYREF
  _KPROCESS *v36; // [rsp+38h] [rbp-30h]
  int v37; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  LODWORD(v4) = KeGetPcr()->Prcb.DpcRequestSummary;
  v5 = a2 & 2;
  CurrentIrql = 0;
  if ( (v4 & 0x10001) != 0 && (a2 & 2) == 0 || (*(_DWORD *)&BugCheckParameter1->0 & 0x800) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)BugCheckParameter1,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == BugCheckParameter1 )
  {
    *(_QWORD *)(a3 + 32) = 1LL;
  }
  else
  {
    LODWORD(v10) = 4;
    if ( (a2 & 2) == 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v23) = 4;
        else
          v23 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v23;
      }
      v37 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v37);
        while ( CurrentThread->ThreadLock );
      }
    }
    if ( CurrentThread->ApcStateIndex )
    {
      LODWORD(v4) = KiAttachProcess((_DWORD)CurrentThread, (_DWORD)BugCheckParameter1, CurrentIrql, a2, a3);
    }
    else
    {
      v11 = &CurrentThread->152;
      v12 = &CurrentThread->600;
      CurrentThread->SavedApcState.Process = CurrentThread->ApcState.Process;
      CurrentThread->SavedApcState.InProgressFlags = CurrentThread->ApcState.InProgressFlags;
      CurrentThread->SavedApcState.KernelApcPending = CurrentThread->ApcState.KernelApcPending;
      CurrentThread->SavedApcState.UserApcPendingAll = CurrentThread->ApcState.UserApcPendingAll;
      Flink = CurrentThread->ApcState.ApcListHead[0].Flink;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink == v11 )
      {
        CurrentThread->SavedApcState.ApcListHead[0].Blink = CurrentThread->SavedApcState.ApcListHead;
        v12->SavedApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v12;
        CurrentThread->SavedApcState.KernelApcPending = 0;
      }
      else
      {
        Blink = CurrentThread->ApcState.ApcListHead[0].Blink;
        v12->SavedApcState.ApcListHead[0].Flink = Flink;
        CurrentThread->SavedApcState.ApcListHead[0].Blink = Blink;
        Flink->Blink = (struct _LIST_ENTRY *)v12;
        Blink->Flink = (struct _LIST_ENTRY *)v12;
      }
      v14 = (struct _KTHREAD *)CurrentThread->ApcState.ApcListHead[1].Flink;
      v15 = &CurrentThread->SavedApcState.ApcListHead[1];
      if ( v14 == (struct _KTHREAD *)&CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->SavedApcState.ApcListHead[1].Blink = &CurrentThread->SavedApcState.ApcListHead[1];
        v15->Flink = v15;
        CurrentThread->SavedApcState.UserApcPendingAll = 0;
      }
      else
      {
        v25 = CurrentThread->ApcState.ApcListHead[1].Blink;
        v15->Flink = (struct _LIST_ENTRY *)v14;
        CurrentThread->SavedApcState.ApcListHead[1].Blink = v25;
        v14->Header.WaitListHead.Flink = v15;
        v25->Flink = v15;
      }
      CurrentThread->ApcState.ApcListHead[0].Blink = CurrentThread->ApcState.ApcListHead;
      CurrentThread->ApcState.ApcListHead[1].Blink = &CurrentThread->ApcState.ApcListHead[1];
      CurrentThread->ApcState.ApcListHead[1].Flink = &CurrentThread->ApcState.ApcListHead[1];
      v11->ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)v11;
      CurrentThread->ApcStateIndex = 1;
      *(_WORD *)&CurrentThread->ApcStateFill[40] = 0;
      CurrentThread->ApcState.UserApcPendingAll = 0;
      if ( (a2 & 1) == 0 && (_InterlockedExchangeAdd(&BugCheckParameter1->StackCount.Value, 8u) & 7) != 0 )
      {
        CurrentThread->ThreadLock = 0LL;
        KiInSwapSingleProcess(CurrentThread, BugCheckParameter1, CurrentIrql);
        v24 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
        {
          v26 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v24 != 2 )
            v10 = (-1LL << (v24 + 1)) & 4;
          v26[5] |= v10;
        }
        v35 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v35);
          while ( CurrentThread->ThreadLock );
        }
      }
      CurrentThread->MiscFlags |= 0x800u;
      CurrentThread->ApcState.Process = BugCheckParameter1;
      if ( !v5 )
        CurrentThread->ThreadLock = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      Process = CurrentThread->SavedApcState.Process;
      v36 = Process;
      GroupIndex = CurrentPrcb->GroupIndex;
      v19 = 8LL * CurrentPrcb->Group + 376;
      _interlockedbittestandset64(
        (volatile signed __int32 *)((char *)&BugCheckParameter1->Header.Lock + v19),
        GroupIndex);
      DirectoryTableBase = BugCheckParameter1->DirectoryTableBase;
      if ( KiKvaShadow )
      {
        v21 = BugCheckParameter1->DirectoryTableBase;
        if ( (DirectoryTableBase & 2) != 0 )
          v21 = DirectoryTableBase | 0x8000000000000000uLL;
        __writegsqword(0xA000u, v21);
        KiSetAddressPolicy(BugCheckParameter1->AddressPolicy);
        Process = v36;
      }
      LODWORD(v4) = HvlEnlightenments;
      if ( (HvlEnlightenments & 1) != 0 )
      {
        LODWORD(v4) = HvlSwitchVirtualAddressSpace(DirectoryTableBase);
        Process = v36;
      }
      else
      {
        __writecr3(DirectoryTableBase);
      }
      if ( !KiFlushPcid && KiKvaShadow )
      {
        v28 = __readcr4();
        if ( (v28 & 0x20080) != 0 )
        {
          LODWORD(v4) = v28 ^ 0x80;
          __writecr4(v28 ^ 0x80);
          __writecr4(v28);
        }
        else
        {
          v4 = __readcr3();
          __writecr3(v4);
        }
      }
      _interlockedbittestandreset64((volatile signed __int32 *)((char *)&Process->Header.Lock + v19), GroupIndex);
      CurrentThread->MiscFlags &= ~0x800u;
      if ( !v5 )
      {
        if ( (_DWORD)KiIrqlFlags )
        {
          v29 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v33 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
        LODWORD(v4) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      *(_QWORD *)(a3 + 32) = 0LL;
    }
  }
  return v4;
}
