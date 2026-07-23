/*
 * XREFs of VslpEnterIumSecureMode @ 0x14033FF80
 * Callers:
 *     KeRequestTerminationThread @ 0x140309C8C (KeRequestTerminationThread.c)
 *     VslGetNestedPageProtectionFlags @ 0x1403405B0 (VslGetNestedPageProtectionFlags.c)
 *     MmProtectDriverSection @ 0x14036EA10 (MmProtectDriverSection.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F73C (MiFlushEntireTbDueToAttributeChange.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140388334 (VslGetSecureSpeculationControlInformation.c)
 *     KeBalanceSetManager @ 0x1403946E0 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403B0C1C (VslpIumPhase4Initialize.c)
 *     VslGetSecurePciEnabled @ 0x1403B6720 (VslGetSecurePciEnabled.c)
 *     VslExchangeEntropy @ 0x1403C6F80 (VslExchangeEntropy.c)
 *     KeSetPagePrivilege @ 0x1403D4EF4 (KeSetPagePrivilege.c)
 *     VslConfigureSecureAtsDevice @ 0x14040FE2C (VslConfigureSecureAtsDevice.c)
 *     VslTerminateSecureServices @ 0x14040FEB8 (VslTerminateSecureServices.c)
 *     VslApplySecureImageFixups @ 0x14045F94C (VslApplySecureImageFixups.c)
 *     VslFastFlushSecureRangeList @ 0x14045F9D8 (VslFastFlushSecureRangeList.c)
 *     VslSetPlaceholderPages @ 0x14045FAC8 (VslSetPlaceholderPages.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140545580 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x140545774 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140545BA4 (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x14054732C (HvlPrepareForSecureHibernate.c)
 *     VslAbortLiveDump @ 0x14054AFF8 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x14054B060 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x14054B230 (VslApplyHotPatch.c)
 *     VslCollectLiveDumpInSk @ 0x14054B30C (VslCollectLiveDumpInSk.c)
 *     VslConfigureDynamicMemory @ 0x14054B384 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x14054B420 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x14054B4A8 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14054B5C0 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x14054B6BC (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x14054B790 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x14054B8E8 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054B990 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14054BA30 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslInitializeSecureKernelCfg @ 0x14054BBFC (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x14054BCD0 (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x14054BD58 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x14054BE58 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x14054BEE0 (VslIumEfiRuntimeService.c)
 *     VslKernelShadowStackAssist @ 0x14054C100 (VslKernelShadowStackAssist.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14054C204 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x14054C2AC (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x14054C348 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x14054C3D8 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x14054C440 (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x14054C4C8 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054C524 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x14054C634 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x14054C6D0 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemDlls @ 0x14054C878 (VslRegisterSecureSystemDlls.c)
 *     VslRegisterSecureSystemProcess @ 0x14054C8FC (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x14054C9A0 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x14054CB00 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x14054CC2C (VslRevertHotPatch.c)
 *     VslSecurePoolAllocate @ 0x14054CCD8 (VslSecurePoolAllocate.c)
 *     VslSecurePoolFree @ 0x14054CDD4 (VslSecurePoolFree.c)
 *     VslSecurePoolUpdate @ 0x14054CE70 (VslSecurePoolUpdate.c)
 *     VslSetupLiveDumpBufferInSk @ 0x14054CF74 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x14054D07C (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x14054D168 (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x14054D214 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x14054D2E0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14054D340 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14054D3DC (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x14054D490 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x14054D558 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14054D5E4 (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x14054DF90 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14054E000 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14054E090 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14054E190 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14054E2C0 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14054E3C0 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x14054E4B8 (VslFreeSecureImageIat.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14054E520 (VslInitFunctionOverrideCapabilities.c)
 *     VslMakeCodeCatalog @ 0x14054E5F0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14054E680 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14054E8A0 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14054E920 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14054EA30 (VslValidateSecureImagePages.c)
 *     KeCopyPrivilegedPage @ 0x14056F168 (KeCopyPrivilegedPage.c)
 *     KeUnsecureProcess @ 0x14056FD38 (KeUnsecureProcess.c)
 *     KeRebootSystemForRecovery @ 0x14057A89C (KeRebootSystemForRecovery.c)
 *     PspIumWorker @ 0x1405A6980 (PspIumWorker.c)
 *     ExCreatePool @ 0x1406071C0 (ExCreatePool.c)
 *     ExpSecurePoolDestroy @ 0x14060D4A4 (ExpSecurePoolDestroy.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MmWriteSystemImageTracepoint @ 0x1406438BC (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x140653F98 (MiWaitForFreePage.c)
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2E0 (DbgkCopyProcessDebugPort.c)
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 *     VslQuerySecureDevice @ 0x140858810 (VslQuerySecureDevice.c)
 *     VslValidateDynamicCodePages @ 0x14087F138 (VslValidateDynamicCodePages.c)
 *     VslCompleteSecureDriverLoad @ 0x140885B74 (VslCompleteSecureDriverLoad.c)
 *     VslReserveProtectedPages @ 0x140885DA4 (VslReserveProtectedPages.c)
 *     VslCallEnclave @ 0x1408A4CE8 (VslCallEnclave.c)
 *     NtDebugActiveProcess @ 0x1409388C0 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140938CE0 (NtRemoveProcessDebug.c)
 *     VslAllocateKernelShadowStack @ 0x14094195C (VslAllocateKernelShadowStack.c)
 *     VslAllocateSecureHibernateResources @ 0x140941A0C (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x140941AB0 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x140941BF0 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140941D50 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x140941DF0 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140941F10 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140941FD8 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x1409420B0 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x140942210 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x140942278 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x140942324 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x1409423A4 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14094240C (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeKernelShadowStack @ 0x1409424B8 (VslFreeKernelShadowStack.c)
 *     VslFreeSecureHibernateResources @ 0x140942520 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14094257C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x1409426B0 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x14094273C (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x1409427CC (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x1409428A4 (VslInitializeEnclave.c)
 *     VslIsEncryptionKeyAvailable @ 0x140942994 (VslIsEncryptionKeyAvailable.c)
 *     VslIumEtwEnableCallback @ 0x140942A10 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveData @ 0x140942ACC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140942BC8 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140942CF8 (VslObtainHotPatchUndoTable.c)
 *     VslPublishSyscallProviderServiceTables @ 0x140942EA8 (VslPublishSyscallProviderServiceTables.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140942F28 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x140943008 (VslRelaxQuotas.c)
 *     VslResetKernelShadowStack @ 0x140943088 (VslResetKernelShadowStack.c)
 *     VslRundownSecureProcess @ 0x140943110 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140943178 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x14094320C (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14094346C (VslTerminateSecureThread.c)
 *     VslTransformDumpKey @ 0x140943500 (VslTransformDumpKey.c)
 *     VslUpdateFreezeTimeBias @ 0x1409436CC (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x1409437F0 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x1409438C0 (VslpConnectedStandbyWnfCallback.c)
 *     VslCaptureSecureImageIat @ 0x14094398C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140943A94 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x140943BB0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14096F7D8 (PipUnprotectDevice.c)
 *     PspSecureThreadStartup @ 0x1409B1AF0 (PspSecureThreadStartup.c)
 *     PsRegisterSyscallProvider @ 0x1409B4760 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x1409B4BD0 (PspDestroySyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x1409B79C4 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B7A30 (PsTerminateVsmEnclave.c)
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
 *     KeAreInterruptsEnabled @ 0x14022ECE0 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7430 (KeReleaseSemaphoreEx.c)
 *     HvlQueryVsmConnection @ 0x140340618 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     HvlSwitchToVsmVtl1 @ 0x14041AF30 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x14041B0A0 (VslpDispatchIumSyscall.c)
 *     PsDispatchIumService @ 0x1405A53D4 (PsDispatchIumService.c)
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
      if ( (_DWORD)KiIrqlFlags )
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
  if ( (_DWORD)KiIrqlFlags )
  {
    v29 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v29 - 2) <= 0xDu )
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
    if ( (_DWORD)KiIrqlFlags )
    {
      v33 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
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
