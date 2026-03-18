/*
 * XREFs of KiStackAttachProcess @ 0x14022D600
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020037C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     CmSiAcquireProcessLockedPagesCharge @ 0x140207D84 (CmSiAcquireProcessLockedPagesCharge.c)
 *     MmEnforceWorkingSetLimit @ 0x14020C03C (MmEnforceWorkingSetLimit.c)
 *     NtUnlockVirtualMemory @ 0x140283160 (NtUnlockVirtualMemory.c)
 *     MiDeleteFinalPageTables @ 0x1402915B4 (MiDeleteFinalPageTables.c)
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1402A3120 (NtLockVirtualMemory.c)
 *     IoRemoveIoCompletion @ 0x1402A9D60 (IoRemoveIoCompletion.c)
 *     KiUpdateProcessConcurrencyCount @ 0x1402C30C0 (KiUpdateProcessConcurrencyCount.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1402E9BBC (CmSiReleaseProcessLockedPagesCharge.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14030E9C0 (PspIsProcessReadyForRemoteThread.c)
 *     SepRmCallLsa @ 0x14031C8E0 (SepRmCallLsa.c)
 *     MiAttachWorkingSet @ 0x14033D9E4 (MiAttachWorkingSet.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140342DD8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeStackAttachProcess @ 0x14034DF50 (KeStackAttachProcess.c)
 *     KeForceAttachProcess @ 0x140353538 (KeForceAttachProcess.c)
 *     PsQueryProcessCommandLine @ 0x1403546F0 (PsQueryProcessCommandLine.c)
 *     MmAttachSession @ 0x140356350 (MmAttachSession.c)
 *     MiGetWorkingSetInfoEx @ 0x1403633AC (MiGetWorkingSetInfoEx.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1403741E8 (CmSiSetProcessWorkingSetMaximum.c)
 *     CmSiProcessTupleStartFromHandle @ 0x1403742A0 (CmSiProcessTupleStartFromHandle.c)
 *     SepAdtLogAuditRecord @ 0x14039B780 (SepAdtLogAuditRecord.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140465608 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     IoRaiseHardError @ 0x140556A80 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14056F740 (KeSecureProcess.c)
 *     KeCopyXfdMaskToTeb @ 0x1405724A0 (KeCopyXfdMaskToTeb.c)
 *     KiTpWriteMemory @ 0x14057EF6C (KiTpWriteMemory.c)
 *     PopStateTransitionTimeoutDispatch @ 0x14058F650 (PopStateTransitionTimeoutDispatch.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405C1778 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405C1CC0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     SmQuerySystemInformation @ 0x1405CDAA0 (SmQuerySystemInformation.c)
 *     ExpSvmServicePageFault @ 0x14060E9A0 (ExpSvmServicePageFault.c)
 *     MmSetCommitReleaseEligibility @ 0x140619A6C (MmSetCommitReleaseEligibility.c)
 *     MmUpdateOldWorkingSetPages @ 0x1406356DC (MmUpdateOldWorkingSetPages.c)
 *     MiFlushAllPages @ 0x140639C0C (MiFlushAllPages.c)
 *     MiLockDownWorkingSet @ 0x140665190 (MiLockDownWorkingSet.c)
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
 *     EtwpAddRegEntryToGroup @ 0x1406BE810 (EtwpAddRegEntryToGroup.c)
 *     ObpIncrementHandleCountEx @ 0x1406E7060 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MiCopyVirtualMemory @ 0x1406F7910 (MiCopyVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1406F91D0 (NtProtectVirtualMemory.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140708EC0 (EtwpRealtimeInjectEtwBuffer.c)
 *     ExpWnfWriteStateData @ 0x140714010 (ExpWnfWriteStateData.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A268 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A4A8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A858 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x14071ECE0 (AlpcViewDestroyProcedure.c)
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 *     MiMapViewOfSection @ 0x140721660 (MiMapViewOfSection.c)
 *     PspWriteTebImpersonationInfo @ 0x140734DF0 (PspWriteTebImpersonationInfo.c)
 *     MmProbeAndLockProcessPages @ 0x14073EDF0 (MmProbeAndLockProcessPages.c)
 *     ObSetHandleAttributes @ 0x14073F8F0 (ObSetHandleAttributes.c)
 *     ExSweepHandleTable @ 0x14073FC60 (ExSweepHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x14073FDC4 (ObCloseHandleTableEntry.c)
 *     ObpDecrementHandleCount @ 0x14073FF54 (ObpDecrementHandleCount.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     MmFreeVirtualMemory @ 0x1407450C0 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140747830 (NtResetWriteWatch.c)
 *     PfSnAsyncPrefetchWorker @ 0x14074DCA0 (PfSnAsyncPrefetchWorker.c)
 *     EtwTraceAppStateChange @ 0x1407519F8 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754850 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessEvent @ 0x1407550DC (EtwpWriteProcessEvent.c)
 *     PfSnPopulateReadList @ 0x14075C380 (PfSnPopulateReadList.c)
 *     PspProcessDelete @ 0x1407610B0 (PspProcessDelete.c)
 *     MmDeleteTeb @ 0x14076EBCC (MmDeleteTeb.c)
 *     PspWriteTebIdealProcessor @ 0x14076FA3C (PspWriteTebIdealProcessor.c)
 *     PspSetupUserStack @ 0x140773F44 (PspSetupUserStack.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14077D958 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpEnableGuid @ 0x14077FD00 (EtwpEnableGuid.c)
 *     PspWow64InitThread @ 0x14079F3C4 (PspWow64InitThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407A0844 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspSetupUserProcessAddressSpace @ 0x1407A125C (PspSetupUserProcessAddressSpace.c)
 *     MmCreatePeb @ 0x1407A189C (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1407A26FC (PspWritePebAffinityInfo.c)
 *     PsMapSystemDlls @ 0x1407A31C8 (PsMapSystemDlls.c)
 *     NtSetInformationVirtualMemory @ 0x1407A4020 (NtSetInformationVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4CF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     PoEnergyContextStart @ 0x1407B103C (PoEnergyContextStart.c)
 *     MmFlushVirtualMemory @ 0x1407B4258 (MmFlushVirtualMemory.c)
 *     SmFirstTimeInit @ 0x1407B7D14 (SmFirstTimeInit.c)
 *     PspQueryQuotaLimits @ 0x1407BCB94 (PspQueryQuotaLimits.c)
 *     AlpcpRestoreWriteAccess @ 0x1407C2F10 (AlpcpRestoreWriteAccess.c)
 *     PspWow64SetupUserStack @ 0x1407DE3D0 (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1407DEBCC (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x1407E2720 (EtwpTiQueryVad.c)
 *     PspSetQuotaLimits @ 0x1407E3914 (PspSetQuotaLimits.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1407E7E24 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1407E80D4 (PspDeleteUserStack.c)
 *     MiCombineIdenticalPages @ 0x1407EB514 (MiCombineIdenticalPages.c)
 *     CmpFinishSystemHivesLoad @ 0x14080AF10 (CmpFinishSystemHivesLoad.c)
 *     MmCreateShadowMapping @ 0x14081DBB0 (MmCreateShadowMapping.c)
 *     EtwpProcessEnumCallback @ 0x140820430 (EtwpProcessEnumCallback.c)
 *     PsStartSiloMonitor @ 0x14084A100 (PsStartSiloMonitor.c)
 *     PsCreateMinimalProcess @ 0x140852EAC (PsCreateMinimalProcess.c)
 *     PspAllocatePartition @ 0x140859010 (PspAllocatePartition.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140860E0C (MmInitializeHandBuiltProcess2.c)
 *     CmpMountPreloadedHives @ 0x1408630AC (CmpMountPreloadedHives.c)
 *     CmpStartCLFSLog @ 0x140873038 (CmpStartCLFSLog.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873344 (CmpAddRemoveContainerToCLFSLog.c)
 *     PspIumGetPhysicalPage @ 0x1408A5B90 (PspIumGetPhysicalPage.c)
 *     DbgkSendSystemDllMessages @ 0x140936DD4 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x14093740C (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1409376BC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140937784 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x14093970C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140939C40 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x140945044 (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140945320 (IopRaiseHardError.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1409756B0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     KiTpReadImageData @ 0x140976714 (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409794DC (AlpcpForceUnlinkSecureView.c)
 *     PfSnAppLaunchScenarioControl @ 0x14097F6E0 (PfSnAppLaunchScenarioControl.c)
 *     PspShutdownCsrProcess @ 0x1409AD2A8 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1409AE220 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409AED1C (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1409AEFE8 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1409AFB50 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x1409B0F60 (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x1409B1B0C (PspSetupUserShadowStack.c)
 *     PspApplyWorkingSetLimits @ 0x1409B1EB0 (PspApplyWorkingSetLimits.c)
 *     PspCatchCriticalBreak @ 0x1409B3A20 (PspCatchCriticalBreak.c)
 *     PsUnregisterSiloMonitor @ 0x1409B4010 (PsUnregisterSiloMonitor.c)
 *     VmpPrefetchWorker @ 0x1409DD680 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1409E7804 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1409E7A90 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFA60 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F23B0 (EtwpCovSampEnumerateProcess.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F55E4 (EtwpTrackGuidEntryRegistrations.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A05210 (NtPssCaptureVaSpaceBulk.c)
 *     MmQueryBadAddresses @ 0x140A2FDD8 (MmQueryBadAddresses.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35068 (MiApplyHotPatchToLoadedDriver.c)
 *     MiHotPatchAllProcesses @ 0x140A37408 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x140A396B0 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3B59C (MiQueryProcessActivePatches.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BD68 (MiUnapplyDriverHotPatch.c)
 *     MmIsFileMapped @ 0x140A3C5EC (MmIsFileMapped.c)
 *     MmDeleteShadowMapping @ 0x140A3C7D0 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3CFC4 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3E0D4 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x140A3E748 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A3E994 (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x140A3EAB0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x140A3EF90 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x140A3F270 (NtLoadEnclaveData.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140A3F950 (MiQueryMemoryPhysicalContiguity.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x140A42320 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x140A431D0 (MiInSwapSharedWorkingSetWorker.c)
 *     MmProcessWorkingSetControl @ 0x140A43514 (MmProcessWorkingSetControl.c)
 *     MiScrubActiveLargePage @ 0x140A46368 (MiScrubActiveLargePage.c)
 *     MiAllocateChildVads @ 0x140A4837C (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x140A48954 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x140A48CB8 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x140A4908C (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140A4934C (MiCopyLargeVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD240 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140AB1D30 (ExpDebuggerWorker.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     PspInitPhase3 @ 0x140B75C30 (PspInitPhase3.c)
 *     EmpMapPhysicalAddress @ 0x140B92E6C (EmpMapPhysicalAddress.c)
 * Callees:
 *     KiAttachProcess @ 0x14022DAB0 (KiAttachProcess.c)
 *     KiSetAddressPolicy @ 0x14022E120 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     KiInSwapSingleProcess @ 0x14034DBB4 (KiInSwapSingleProcess.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549890 (HvlSwitchVirtualAddressSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
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
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
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
        if ( KiIrqlFlags )
        {
          v29 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
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
