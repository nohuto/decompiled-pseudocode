/*
 * XREFs of KiUnstackDetachProcess @ 0x1402D0930
 * Callers:
 *     MmEnforceWorkingSetLimit @ 0x1402091B0 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteFinalPageTables @ 0x140216EE8 (MiDeleteFinalPageTables.c)
 *     MmDetachSession @ 0x140231240 (MmDetachSession.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140237230 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeForceDetachProcess @ 0x140241980 (KeForceDetachProcess.c)
 *     PsQueryProcessCommandLine @ 0x140241D20 (PsQueryProcessCommandLine.c)
 *     PspIsProcessReadyForRemoteThread @ 0x14024E388 (PspIsProcessReadyForRemoteThread.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14025E9D0 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     MiWaitForInPageComplete @ 0x14027AA30 (MiWaitForInPageComplete.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     KiUpdateProcessConcurrencyCount @ 0x140302650 (KiUpdateProcessConcurrencyCount.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiEmptyAccessLogs @ 0x140375ED0 (MiEmptyAccessLogs.c)
 *     MiFlushAllPages @ 0x14038A880 (MiFlushAllPages.c)
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x140394080 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     SepAdtLogAuditRecord @ 0x1403CD84C (SepAdtLogAuditRecord.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     KeSecureProcess @ 0x14056C6B8 (KeSecureProcess.c)
 *     KeCopyXfdMaskToTeb @ 0x14056FA60 (KeCopyXfdMaskToTeb.c)
 *     KiTpWriteMemory @ 0x140573408 (KiTpWriteMemory.c)
 *     MmSetCommitReleaseEligibility @ 0x14058196C (MmSetCommitReleaseEligibility.c)
 *     MmQueryBadAddresses @ 0x14058FE88 (MmQueryBadAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x14059774C (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1405A6204 (MiGetWorkingSetInfoEx.c)
 *     MiLockDownWorkingSet @ 0x1405BB938 (MiLockDownWorkingSet.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1405F7344 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405F774C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExpSvmServicePageFault @ 0x140641840 (ExpSvmServicePageFault.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067259C (PspSetupUserProcessAddressSpace.c)
 *     PspWritePebAffinityInfo @ 0x140672BD8 (PspWritePebAffinityInfo.c)
 *     PoEnergyContextStart @ 0x140673B4C (PoEnergyContextStart.c)
 *     PspWow64InitThread @ 0x1406747FC (PspWow64InitThread.c)
 *     MmAssignProcessToJob @ 0x140682D84 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140682EA4 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14069CEC8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PspQueryQuotaLimits @ 0x1406B48F0 (PspQueryQuotaLimits.c)
 *     PspWow64SetupUserStack @ 0x1406C9C7C (PspWow64SetupUserStack.c)
 *     PspSetupReservedUserMappings @ 0x1406D94F0 (PspSetupReservedUserMappings.c)
 *     EtwpTiQueryVad @ 0x1406D98F8 (EtwpTiQueryVad.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406E5B58 (SmProcessStoreMemoryPriorityRequest.c)
 *     PspDeleteUserStack @ 0x1406E616C (PspDeleteUserStack.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 *     MiMapImageInSystemSpace @ 0x1406F3884 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x1406F39F8 (MiUnmapImageInSystemSpace.c)
 *     AlpcpRestoreWriteAccess @ 0x1406F60E8 (AlpcpRestoreWriteAccess.c)
 *     AlpcViewDestroyProcedure @ 0x1406F6A30 (AlpcViewDestroyProcedure.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F71A0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiMapViewOfSection @ 0x1406FCA10 (MiMapViewOfSection.c)
 *     NtResetWriteWatch @ 0x140700F70 (NtResetWriteWatch.c)
 *     PspWriteTebIdealProcessor @ 0x1407028B8 (PspWriteTebIdealProcessor.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407049DC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     MmProbeAndLockProcessPages @ 0x140708890 (MmProbeAndLockProcessPages.c)
 *     MmCreateTeb @ 0x1407096A4 (MmCreateTeb.c)
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 *     EtwpWriteProcessEvent @ 0x14070AE08 (EtwpWriteProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x140712868 (EtwTraceAppStateChange.c)
 *     ObpIncrementHandleCountEx @ 0x140733B40 (ObpIncrementHandleCountEx.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     NtSetInformationVirtualMemory @ 0x140753430 (NtSetInformationVirtualMemory.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 *     PsMapSystemDlls @ 0x140756164 (PsMapSystemDlls.c)
 *     EtwpEnableGuid @ 0x14079028C (EtwpEnableGuid.c)
 *     ExpWnfWriteStateData @ 0x14079350C (ExpWnfWriteStateData.c)
 *     EtwpAddRegEntryToGroup @ 0x140794F30 (EtwpAddRegEntryToGroup.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140798F44 (EtwpRealtimeInjectEtwBuffer.c)
 *     MmDeleteTeb @ 0x14079EE84 (MmDeleteTeb.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     ExSweepHandleTable @ 0x1407A2CB0 (ExSweepHandleTable.c)
 *     ObCloseHandleTableEntry @ 0x1407A2E10 (ObCloseHandleTableEntry.c)
 *     ObpDecrementHandleCount @ 0x1407A2FA0 (ObpDecrementHandleCount.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     AlpcpPrepareViewForDelivery @ 0x1407A4774 (AlpcpPrepareViewForDelivery.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x1407A4A8C (MmSecureVirtualMemoryAgainstWrites.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 *     PspWriteTebImpersonationInfo @ 0x1407AF4B0 (PspWriteTebImpersonationInfo.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiCopyVirtualMemory @ 0x1407BB560 (MiCopyVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1407BEBF0 (NtProtectVirtualMemory.c)
 *     PfSnAsyncPrefetchWorker @ 0x1407DC0D0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnPopulateReadList @ 0x1407DF200 (PfSnPopulateReadList.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     PspSetupUserStack @ 0x1407E4964 (PspSetupUserStack.c)
 *     MmFlushVirtualMemory @ 0x1407F0478 (MmFlushVirtualMemory.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     MmProcessWorkingSetControl @ 0x1407F5540 (MmProcessWorkingSetControl.c)
 *     MiCombineIdenticalPages @ 0x1407F8CF0 (MiCombineIdenticalPages.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14080B938 (CmpAddRemoveContainerToCLFSLog.c)
 *     CmpStartCLFSLog @ 0x14080CD20 (CmpStartCLFSLog.c)
 *     EtwpProcessEnumCallback @ 0x140814660 (EtwpProcessEnumCallback.c)
 *     MmCreateShadowMapping @ 0x14082A644 (MmCreateShadowMapping.c)
 *     PsStartSiloMonitor @ 0x140852D60 (PsStartSiloMonitor.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140860DAC (MmInitializeHandBuiltProcess2.c)
 *     PspIumGetPhysicalPage @ 0x1408824D0 (PspIumGetPhysicalPage.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 *     DbgkpMarkProcessPeb @ 0x1409279CC (DbgkpMarkProcessPeb.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140927C7C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140927D44 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x14092972C (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     IopIsNotNativeDriverImage @ 0x1409348AC (IopIsNotNativeDriverImage.c)
 *     IopRaiseHardError @ 0x140934B80 (IopRaiseHardError.c)
 *     KiTpReadImageData @ 0x14096324C (KiTpReadImageData.c)
 *     AlpcpForceUnlinkSecureView @ 0x140967328 (AlpcpForceUnlinkSecureView.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140971848 (MiApplyHotPatchToLoadedDriver.c)
 *     MiHotPatchAllProcesses @ 0x140973630 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x140975748 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x14097723C (MiQueryProcessActivePatches.c)
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 *     MmIsFileMapped @ 0x1409780D4 (MmIsFileMapped.c)
 *     MiQueryMemoryPhysicalContiguity @ 0x140978430 (MiQueryMemoryPhysicalContiguity.c)
 *     MmDeleteShadowMapping @ 0x140978B04 (MmDeleteShadowMapping.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x14097A358 (MiLoadDataIntoVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x14097A9C4 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x14097AC04 (MiUnmapImageForEnclaveUse.c)
 *     NtCreateEnclave @ 0x14097AD20 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14097B220 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14097B500 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14097FF40 (MiInSwapSharedWorkingSetWorker.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 *     MiDeleteInsertedCloneVads @ 0x140980A20 (MiDeleteInsertedCloneVads.c)
 *     MiInsertChildVads @ 0x140980DD8 (MiInsertChildVads.c)
 *     MiCopyLargeVad @ 0x140982B6C (MiCopyLargeVad.c)
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 *     PspShutdownCsrProcess @ 0x1409AC388 (PspShutdownCsrProcess.c)
 *     PsQueryProcessExceptionFlags @ 0x1409AD320 (PsQueryProcessExceptionFlags.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x1409ADDA4 (PspProcessDynamicEHContinuationTargets.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1409AE050 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspTrySetProcessPebThrottlingFlags @ 0x1409AEAA0 (PspTrySetProcessPebThrottlingFlags.c)
 *     PspCreateSecureThread @ 0x1409AF550 (PspCreateSecureThread.c)
 *     PspSetupUserShadowStack @ 0x1409AFB7C (PspSetupUserShadowStack.c)
 *     PspApplyWorkingSetLimits @ 0x1409AFE9C (PspApplyWorkingSetLimits.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 *     VmpPrefetchWorker @ 0x1409DA4D0 (VmpPrefetchWorker.c)
 *     EtwpUMGLEnabled @ 0x1409E47C4 (EtwpUMGLEnabled.c)
 *     EtwpUpdateProcessTracingCallback @ 0x1409E4A50 (EtwpUpdateProcessTracingCallback.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EB400 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409F1110 (EtwpCovSampEnumerateProcess.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1409F5570 (EtwpTrackGuidEntryRegistrations.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A07780 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140A6A570 (MiDeleteAllHardwareEnclaves.c)
 *     ExpDebuggerWorker @ 0x140A70F90 (ExpDebuggerWorker.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmSaveKeyToBuffer @ 0x140AB4770 (CmSaveKeyToBuffer.c)
 *     EmpCacheBiosDate @ 0x140B0D974 (EmpCacheBiosDate.c)
 *     EmpMapPhysicalAddress @ 0x140B0DAC4 (EmpMapPhysicalAddress.c)
 *     PspInitPhase3 @ 0x140B313B8 (PspInitPhase3.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     HalRequestSoftwareInterrupt @ 0x14022BAA0 (HalRequestSoftwareInterrupt.c)
 *     KiSwapProcess @ 0x1402D0BA0 (KiSwapProcess.c)
 *     KiMoveApcState @ 0x1402D0C60 (KiMoveApcState.c)
 *     KiDecrementProcessStackCount @ 0x1402D0CE0 (KiDecrementProcessStackCount.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 */

__int64 __fastcall KiUnstackDetachProcess(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r15
  int v6; // esi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v9; // rcx
  $CEA84C04E3712D858E5667A507841A2A *v10; // rdi
  _DWORD *SchedulerAssist; // r9
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  bool v19; // zf
  _DWORD *v20; // r9
  struct _KPRCB *v21; // rdi
  _DWORD *v22; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  int v32; // [rsp+60h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+10h]
  int v34; // [rsp+70h] [rbp+18h] BYREF

  v33 = a2;
  result = *(_QWORD *)(a1 + 32);
  v3 = a2;
  if ( result != 1 )
  {
    if ( result )
    {
      return KiDetachProcess(a1, a2);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Process = CurrentThread->ApcState.Process;
      v6 = a2 & 2;
      if ( (a2 & 2) != 0 )
      {
        CurrentIrql = 15;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v32 = 0;
        v9 = CurrentPrcb->SchedulerAssist;
        if ( v9 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v9[6];
            v9[6] = v14 + 1;
            if ( v14 == -1 )
LABEL_32:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v12 = CurrentPrcb->SchedulerAssist;
          if ( v12 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = v12[6] - 1;
              v12[6] = v15;
              if ( !v15 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v32);
          while ( CurrentThread->ThreadLock );
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v16 = v13[6];
              v13[6] = v16 + 1;
              if ( v16 == -1 )
                goto LABEL_32;
            }
          }
        }
      }
      if ( CurrentThread->ApcState.KernelApcPending )
      {
        do
        {
          if ( CurrentThread->SpecialApcDisable || CurrentIrql )
            break;
          KiReleaseThreadLockSafe((__int64)CurrentThread);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v17 = KeGetCurrentPrcb();
              v18 = v17->SchedulerAssist;
              v19 = (v18[5] & 0xFFFF0001) == 0;
              v18[5] &= 0xFFFF0001;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v17);
            }
          }
          __writecr8(0LL);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            v20 = KeGetCurrentPrcb()->SchedulerAssist;
            v20[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          v21 = KeGetCurrentPrcb();
          v34 = 0;
          v22 = v21->SchedulerAssist;
          if ( v22 )
          {
            if ( v21->NestingLevel <= 1u )
            {
              v23 = v22[6];
              v22[6] = v23 + 1;
              if ( v23 == -1 )
LABEL_53:
                KiRemoveSystemWorkPriorityKick(v21);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v24 = v21->SchedulerAssist;
            if ( v24 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v25 = v24[6] - 1;
                v24[6] = v25;
                if ( !v25 )
                  KiRemoveSystemWorkPriorityKick(v21);
              }
            }
            do
              KeYieldProcessorEx(&v34);
            while ( CurrentThread->ThreadLock );
            v26 = v21->SchedulerAssist;
            if ( v26 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v27 = v26[6];
                v26[6] = v27 + 1;
                if ( v27 == -1 )
                  goto LABEL_53;
              }
            }
          }
        }
        while ( CurrentThread->ApcState.KernelApcPending );
        v3 = v33;
      }
      if ( !CurrentThread->ApcStateIndex
        || (CurrentThread->ApcState.InProgressFlags & 1) != 0
        || (v10 = &CurrentThread->152, ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != v10)
        || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        KeBugCheck(6u);
      }
      CurrentThread->MiscFlags |= 0x800u;
      KiMoveApcState(&CurrentThread->600, &CurrentThread->152);
      CurrentThread->SavedApcState.Process = 0LL;
      CurrentThread->ApcStateIndex = 0;
      if ( v6 )
      {
        result = KiSwapProcess(CurrentThread->ApcState.Process, Process);
        CurrentThread->MiscFlags &= ~0x800u;
      }
      else
      {
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        KiSwapProcess(CurrentThread->ApcState.Process, Process);
        CurrentThread->MiscFlags &= ~0x800u;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
            {
              v29 = KeGetCurrentPrcb();
              v30 = v29->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v19 = (v31 & v30[5]) == 0;
              v30[5] &= v31;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v29);
            }
          }
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
      }
      if ( (v3 & 1) == 0 )
        result = KiDecrementProcessStackCount(Process);
      if ( ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != v10 )
      {
        CurrentThread->ApcState.KernelApcPending = 1;
        return HalRequestSoftwareInterrupt(1);
      }
    }
  }
  return result;
}
