/*
 * XREFs of VslpEnterIumSecureMode @ 0x14033FCF0
 * Callers:
 *     KeRequestTerminationThread @ 0x1403099FC (KeRequestTerminationThread.c)
 *     VslGetNestedPageProtectionFlags @ 0x140340320 (VslGetNestedPageProtectionFlags.c)
 *     MmProtectDriverSection @ 0x14036E870 (MmProtectDriverSection.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F59C (MiFlushEntireTbDueToAttributeChange.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140388154 (VslGetSecureSpeculationControlInformation.c)
 *     KeBalanceSetManager @ 0x140394500 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403B0A3C (VslpIumPhase4Initialize.c)
 *     VslGetSecurePciEnabled @ 0x1403B6540 (VslGetSecurePciEnabled.c)
 *     VslExchangeEntropy @ 0x1403C6DA0 (VslExchangeEntropy.c)
 *     KeSetPagePrivilege @ 0x1403D4D14 (KeSetPagePrivilege.c)
 *     VslConfigureSecureAtsDevice @ 0x14040FC4C (VslConfigureSecureAtsDevice.c)
 *     VslTerminateSecureServices @ 0x14040FCD8 (VslTerminateSecureServices.c)
 *     VslApplySecureImageFixups @ 0x14045F54C (VslApplySecureImageFixups.c)
 *     VslFastFlushSecureRangeList @ 0x14045F5D8 (VslFastFlushSecureRangeList.c)
 *     VslSetPlaceholderPages @ 0x14045F6C8 (VslSetPlaceholderPages.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140544EC0 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x1405450B4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x1405454E4 (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x140546C6C (HvlPrepareForSecureHibernate.c)
 *     VslAbortLiveDump @ 0x14054A938 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x14054A9A0 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x14054AB70 (VslApplyHotPatch.c)
 *     VslCollectLiveDumpInSk @ 0x14054AC4C (VslCollectLiveDumpInSk.c)
 *     VslConfigureDynamicMemory @ 0x14054ACC4 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x14054AD60 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x14054ADE8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14054AF00 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x14054AFFC (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x14054B0D0 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x14054B228 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054B2D0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14054B370 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslInitializeSecureKernelCfg @ 0x14054B53C (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x14054B610 (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x14054B698 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x14054B798 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x14054B820 (VslIumEfiRuntimeService.c)
 *     VslKernelShadowStackAssist @ 0x14054BA40 (VslKernelShadowStackAssist.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14054BB44 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x14054BBEC (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x14054BC88 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x14054BD18 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x14054BD80 (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x14054BE08 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054BE64 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x14054BF74 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x14054C010 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemDlls @ 0x14054C1B8 (VslRegisterSecureSystemDlls.c)
 *     VslRegisterSecureSystemProcess @ 0x14054C23C (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x14054C2E0 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x14054C440 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x14054C56C (VslRevertHotPatch.c)
 *     VslSecurePoolAllocate @ 0x14054C618 (VslSecurePoolAllocate.c)
 *     VslSecurePoolFree @ 0x14054C714 (VslSecurePoolFree.c)
 *     VslSecurePoolUpdate @ 0x14054C7B0 (VslSecurePoolUpdate.c)
 *     VslSetupLiveDumpBufferInSk @ 0x14054C8B4 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x14054C9BC (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x14054CAA8 (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x14054CB54 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x14054CC20 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14054CC80 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14054CD1C (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x14054CDD0 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x14054CE98 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14054CF24 (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x14054D8D0 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14054D940 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14054D9D0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14054DAD0 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14054DC00 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14054DD00 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x14054DDF8 (VslFreeSecureImageIat.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14054DE60 (VslInitFunctionOverrideCapabilities.c)
 *     VslMakeCodeCatalog @ 0x14054DF30 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14054DFC0 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14054E1E0 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14054E260 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14054E370 (VslValidateSecureImagePages.c)
 *     KeCopyPrivilegedPage @ 0x14056EC28 (KeCopyPrivilegedPage.c)
 *     KeUnsecureProcess @ 0x14056F7F8 (KeUnsecureProcess.c)
 *     KeRebootSystemForRecovery @ 0x14057A3AC (KeRebootSystemForRecovery.c)
 *     PspIumWorker @ 0x1405A6410 (PspIumWorker.c)
 *     ExCreatePool @ 0x140606C70 (ExCreatePool.c)
 *     ExpSecurePoolDestroy @ 0x14060CF54 (ExpSecurePoolDestroy.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 *     MmWriteSystemImageTracepoint @ 0x14064336C (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x140653A48 (MiWaitForFreePage.c)
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2B0 (DbgkCopyProcessDebugPort.c)
 *     NtQueryInformationProcess @ 0x1406FCA90 (NtQueryInformationProcess.c)
 *     VslQuerySecureDevice @ 0x1408585D0 (VslQuerySecureDevice.c)
 *     VslValidateDynamicCodePages @ 0x14087EEF8 (VslValidateDynamicCodePages.c)
 *     VslCompleteSecureDriverLoad @ 0x140885934 (VslCompleteSecureDriverLoad.c)
 *     VslReserveProtectedPages @ 0x140885B64 (VslReserveProtectedPages.c)
 *     VslCallEnclave @ 0x1408A4A98 (VslCallEnclave.c)
 *     NtDebugActiveProcess @ 0x1409386C0 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140938AE0 (NtRemoveProcessDebug.c)
 *     VslAllocateKernelShadowStack @ 0x14094175C (VslAllocateKernelShadowStack.c)
 *     VslAllocateSecureHibernateResources @ 0x14094180C (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x1409418B0 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x1409419F0 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140941B50 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x140941BF0 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140941D10 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140941DD8 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x140941EB0 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x140942010 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x140942078 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140942124 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x1409421A4 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14094220C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeKernelShadowStack @ 0x1409422B8 (VslFreeKernelShadowStack.c)
 *     VslFreeSecureHibernateResources @ 0x140942320 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14094237C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x1409424B0 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14094253C (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x1409425CC (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x1409426A4 (VslInitializeEnclave.c)
 *     VslIsEncryptionKeyAvailable @ 0x140942794 (VslIsEncryptionKeyAvailable.c)
 *     VslIumEtwEnableCallback @ 0x140942810 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveData @ 0x1409428CC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x1409429C8 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140942AF8 (VslObtainHotPatchUndoTable.c)
 *     VslPublishSyscallProviderServiceTables @ 0x140942CA8 (VslPublishSyscallProviderServiceTables.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140942D28 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x140942E08 (VslRelaxQuotas.c)
 *     VslResetKernelShadowStack @ 0x140942E88 (VslResetKernelShadowStack.c)
 *     VslRundownSecureProcess @ 0x140942F10 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140942F78 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x14094300C (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14094326C (VslTerminateSecureThread.c)
 *     VslTransformDumpKey @ 0x140943300 (VslTransformDumpKey.c)
 *     VslUpdateFreezeTimeBias @ 0x1409434CC (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x1409435F0 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1409436C0 (VslpConnectedStandbyWnfCallback.c)
 *     VslCaptureSecureImageIat @ 0x14094378C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140943894 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x1409439B0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14096F5D8 (PipUnprotectDevice.c)
 *     PspSecureThreadStartup @ 0x1409B18F0 (PspSecureThreadStartup.c)
 *     PsRegisterSyscallProvider @ 0x1409B4560 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x1409B49D0 (PspDestroySyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x1409B77C4 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B7830 (PsTerminateVsmEnclave.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B45044 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140B457F0 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B45958 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyFunctionOverrideToBootDrivers @ 0x140B45AC0 (MiApplyFunctionOverrideToBootDrivers.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B45CC4 (MiApplyBootLoadedDriversFixups.c)
 *     VslConnectSwInterrupt @ 0x140B728D4 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B729B8 (VslRegisterBootDrivers.c)
 *     PsInitializeSyscallProviders @ 0x140B75DE4 (PsInitializeSyscallProviders.c)
 *     VslApplyDynamicRelocations @ 0x140B93348 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140B933D4 (VslBindNtIum.c)
 *     VslReapplyBootIndirectPatches @ 0x140B93544 (VslReapplyBootIndirectPatches.c)
 *     VslpIumPhase0Initialize @ 0x140B935CC (VslpIumPhase0Initialize.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x14022EBD0 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphoreEx @ 0x1402B71A0 (KeReleaseSemaphoreEx.c)
 *     HvlQueryVsmConnection @ 0x140340388 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     HvlSwitchToVsmVtl1 @ 0x14041ABA0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x14041AD10 (VslpDispatchIumSyscall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     PsDispatchIumService @ 0x1405A4E64 (PsDispatchIumService.c)
 */

__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  bool v4; // si
  __int16 v5; // r14
  char v8; // r13
  unsigned __int8 CurrentIrql; // r15
  __int16 v10; // dx
  int v11; // ecx
  __int64 v12; // r9
  __int32 v13; // edi
  __int32 v14; // eax
  char v15; // si
  __int16 v16; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 v21; // al
  unsigned int SecureThreadCookie; // ecx
  NTSTATUS v23; // esi
  char v24; // r13
  _QWORD *v25; // r9
  char v26; // al
  __int64 v27; // rdx
  char PreviousMode; // si
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v31; // rdx
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  char v37; // [rsp+38h] [rbp-49h]
  int v39; // [rsp+3Ch] [rbp-45h]
  char v40; // [rsp+40h] [rbp-41h]
  _WORD v41[2]; // [rsp+48h] [rbp-39h] BYREF
  _WORD v42[2]; // [rsp+4Ch] [rbp-35h] BYREF
  _WORD v43[2]; // [rsp+50h] [rbp-31h] BYREF
  _WORD v44[2]; // [rsp+54h] [rbp-2Dh] BYREF
  int v45; // [rsp+58h] [rbp-29h]
  __int64 v46; // [rsp+60h] [rbp-21h]
  _WORD *v47; // [rsp+68h] [rbp-19h] BYREF
  int v48; // [rsp+70h] [rbp-11h]
  int v49; // [rsp+74h] [rbp-Dh]
  _WORD *v50; // [rsp+78h] [rbp-9h] BYREF
  int v51; // [rsp+80h] [rbp-1h]
  int v52; // [rsp+84h] [rbp+3h]
  _QWORD v53[2]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v54[2]; // [rsp+98h] [rbp+17h] BYREF

  v4 = 0;
  v5 = a1;
  v39 = a3;
  v40 = 0;
  v37 = 0;
  v8 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection() )
    return 3221225629LL;
  v13 = v11 + 1;
  if ( v10 == 271 && (_BYTE)v5 == 2 )
    v14 = _InterlockedExchange(&VslpVsmTerminated, v13);
  else
    v14 = VslpVsmTerminated;
  if ( v14 )
    return 3221225629LL;
  *(_BYTE *)v12 = v5;
  *(_WORD *)(v12 + 2) = v10;
  v46 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v5 > 2u )
  {
    if ( (BYTE4(xmmword_140D1EAD0) & 8) != 0 )
    {
      v49 &= v11;
      v41[0] = v5;
      v41[1] = v10;
      v15 = v11 + 1;
      v16 = v5;
      v47 = v41;
      v48 = 4;
      EtwTraceKernelEvent((int)&v47, 1, 0xA0000008, 1353, 4200706);
    }
    else
    {
      v16 = v5;
      v15 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v46);
    if ( v15 )
    {
      v52 = 0;
      v42[1] = a2;
      v42[0] = v16;
      v50 = v42;
      v51 = 4;
      EtwTraceKernelEvent((int)&v50, 1, 0xA0000008, 1354, 4200706);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0LL;
  }
  if ( !KeAreInterruptsEnabled() )
  {
    if ( VslVsmEnabled )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v13) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v19) = 0x8000;
          else
            v19 = (-1LL << ((unsigned __int8)v13 + CurrentIrql)) & 0xFFFC;
          SchedulerAssist[5] |= v19;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v21 = KeGetCurrentIrql();
  if ( (_BYTE)v5 == 1 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else
  {
    if ( a3 )
    {
      *(_DWORD *)(a4 + 4) = a3;
    }
    else if ( v21 < 2u )
    {
      SecureThreadCookie = CurrentThread->SecureThreadCookie;
      if ( SecureThreadCookie )
      {
        v39 = CurrentThread->SecureThreadCookie;
        *(_DWORD *)(a4 + 4) = SecureThreadCookie;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
        if ( VslVsmEnabled )
          v8 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      v39 = 1;
    }
    v4 = CurrentThread->SecureThreadCookie == 0;
    v40 = v4;
  }
  if ( v21 == 1 )
  {
    v40 = 1;
LABEL_41:
    --CurrentThread->KernelApcDisable;
    goto LABEL_42;
  }
  if ( v21 < 2u )
  {
    if ( v4 )
      goto LABEL_41;
  }
  else
  {
    v40 = 0;
  }
LABEL_42:
  if ( !v8 )
    goto LABEL_45;
  v23 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v23 < 0 )
    goto LABEL_82;
  v37 = 1;
  while ( 1 )
  {
LABEL_45:
    if ( (BYTE4(xmmword_140D1EAD0) & 8) != 0 )
    {
      v43[1] = a2;
      v43[0] = v5;
      v53[0] = v43;
      v53[1] = 4LL;
      v24 = 1;
      EtwTraceKernelEvent((int)v53, 1, 0xA0000008, 1353, 4200706);
    }
    else
    {
      v24 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v46);
    v25 = (_QWORD *)(a4 + 8);
    v23 = *(_DWORD *)(a4 + 8);
    if ( v24 )
    {
      v44[1] = a2;
      v44[0] = v5;
      v54[0] = v44;
      v54[1] = 4LL;
      EtwTraceKernelEvent((int)v54, 1, 0xA0000008, 1354, 4200706);
      v25 = (_QWORD *)(a4 + 8);
    }
    v26 = *(_BYTE *)(a4 + 1);
    if ( v26 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v26 = *(_BYTE *)(a4 + 1);
    }
    if ( v26 == 6 )
      break;
    if ( v26 == 1 )
      goto LABEL_80;
    if ( (_BYTE)v5 == 1 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    else if ( !v39 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    v27 = *(unsigned __int8 *)(a4 + 1);
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_62:
        PsDispatchIumService(a4, v27, 0LL);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *v25 = -1073741776LL;
          break;
        }
LABEL_69:
        if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( (_BYTE)v27 == 3 )
            CurrentThread->PreviousMode = 0;
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                       v25,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *v25 = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_69;
      case 5:
        goto LABEL_62;
    }
    if ( !v39 && (_BYTE)v5 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags )
  {
    v29 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v29 - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v31 = CurrentPrcb->SchedulerAssist;
      v32 = (v31[5] & 0xFFFF0001) == 0;
      v31[5] &= 0xFFFF0001;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_80:
  if ( v37 )
  {
    v45 = 0;
    KeReleaseSemaphoreEx((__int64)&VslpIumThreadSemaphore, 0, 1);
  }
LABEL_82:
  if ( v40 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( KiIrqlFlags )
    {
      v33 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v32 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v23;
}
