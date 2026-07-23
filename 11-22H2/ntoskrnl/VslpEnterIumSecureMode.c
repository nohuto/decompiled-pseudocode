/*
 * XREFs of VslpEnterIumSecureMode @ 0x14033FAF0
 * Callers:
 *     KeRequestTerminationThread @ 0x1403098CC (KeRequestTerminationThread.c)
 *     VslGetNestedPageProtectionFlags @ 0x14033FE30 (VslGetNestedPageProtectionFlags.c)
 *     MmProtectDriverSection @ 0x14036E220 (MmProtectDriverSection.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036EF4C (MiFlushEntireTbDueToAttributeChange.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140387354 (VslGetSecureSpeculationControlInformation.c)
 *     KeBalanceSetManager @ 0x140392980 (KeBalanceSetManager.c)
 *     VslpIumPhase4Initialize @ 0x1403B03AC (VslpIumPhase4Initialize.c)
 *     VslGetSecurePciEnabled @ 0x1403B5EB0 (VslGetSecurePciEnabled.c)
 *     VslExchangeEntropy @ 0x1403C6740 (VslExchangeEntropy.c)
 *     KeSetPagePrivilege @ 0x1403D46B4 (KeSetPagePrivilege.c)
 *     VslConfigureSecureAtsDevice @ 0x14040F53C (VslConfigureSecureAtsDevice.c)
 *     VslApplySecureImageFixups @ 0x14045EEEC (VslApplySecureImageFixups.c)
 *     VslFastFlushSecureRangeList @ 0x14045EF78 (VslFastFlushSecureRangeList.c)
 *     VslSetPlaceholderPages @ 0x14045F068 (VslSetPlaceholderPages.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140544F60 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x140545154 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140545584 (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x140546D0C (HvlPrepareForSecureHibernate.c)
 *     VslAbortLiveDump @ 0x14054A9D8 (VslAbortLiveDump.c)
 *     VslAccessPciDevice @ 0x14054AA40 (VslAccessPciDevice.c)
 *     VslApplyHotPatch @ 0x14054AC10 (VslApplyHotPatch.c)
 *     VslCollectLiveDumpInSk @ 0x14054ACEC (VslCollectLiveDumpInSk.c)
 *     VslConfigureDynamicMemory @ 0x14054AD64 (VslConfigureDynamicMemory.c)
 *     VslEndSecurePageIteration @ 0x14054AE00 (VslEndSecurePageIteration.c)
 *     VslFinalizeLiveDumpInSk @ 0x14054AE88 (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14054AFA0 (VslFinishStartSecureProcessor.c)
 *     VslFlushSecureAddressSpace @ 0x14054B09C (VslFlushSecureAddressSpace.c)
 *     VslGetEtwDebugId @ 0x14054B170 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x14054B2C8 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054B370 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14054B410 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslInitializeSecureKernelCfg @ 0x14054B5DC (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x14054B6B0 (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x14054B738 (VslInitializeSecureProcess.c)
 *     VslIsTrustletRunning @ 0x14054B838 (VslIsTrustletRunning.c)
 *     VslIumEfiRuntimeService @ 0x14054B8C0 (VslIumEfiRuntimeService.c)
 *     VslKernelShadowStackAssist @ 0x14054BAE0 (VslKernelShadowStackAssist.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14054BBE4 (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslMakeProtectedPageExecutable @ 0x14054BC8C (VslMakeProtectedPageExecutable.c)
 *     VslMakeProtectedPageWritable @ 0x14054BD28 (VslMakeProtectedPageWritable.c)
 *     VslNotifyShutdown @ 0x14054BDB8 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x14054BE20 (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x14054BEA8 (VslProvisionDumpEncryption.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054BF04 (VslQuerySecureKernelProfileInformation.c)
 *     VslQueryVirtualMemory @ 0x14054C014 (VslQueryVirtualMemory.c)
 *     VslRegisterLogPages @ 0x14054C0B0 (VslRegisterLogPages.c)
 *     VslRegisterSecureSystemDlls @ 0x14054C258 (VslRegisterSecureSystemDlls.c)
 *     VslRegisterSecureSystemProcess @ 0x14054C2DC (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x14054C380 (VslReportBugCheckProgress.c)
 *     VslRetrieveMailbox @ 0x14054C4E0 (VslRetrieveMailbox.c)
 *     VslRevertHotPatch @ 0x14054C60C (VslRevertHotPatch.c)
 *     VslSecurePoolAllocate @ 0x14054C6B8 (VslSecurePoolAllocate.c)
 *     VslSecurePoolFree @ 0x14054C7B4 (VslSecurePoolFree.c)
 *     VslSecurePoolUpdate @ 0x14054C850 (VslSecurePoolUpdate.c)
 *     VslSetupLiveDumpBufferInSk @ 0x14054C954 (VslSetupLiveDumpBufferInSk.c)
 *     VslSlowFlushSecureRangeList @ 0x14054CA5C (VslSlowFlushSecureRangeList.c)
 *     VslStartSecurePageIteration @ 0x14054CB48 (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x14054CBF4 (VslSvcEnterIumSecureMode.c)
 *     VslTestRoutine @ 0x14054CCC0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14054CD20 (VslVerifyPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14054CDBC (VslpAddLiveDumpBufferChunk.c)
 *     VslpKsrEnterIumSecureMode @ 0x14054CE70 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x14054CF38 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14054CFC4 (VslpSetupLiveDumpBuffer.c)
 *     VslCloseSecureHandle @ 0x14054D970 (VslCloseSecureHandle.c)
 *     VslCreateSecureAllocation @ 0x14054D9E0 (VslCreateSecureAllocation.c)
 *     VslCreateSecureImageSection @ 0x14054DA70 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14054DB70 (VslFillSecureAllocation.c)
 *     VslFinalizeSecureImageHash @ 0x14054DCA0 (VslFinalizeSecureImageHash.c)
 *     VslFinishSecureImageValidation @ 0x14054DDA0 (VslFinishSecureImageValidation.c)
 *     VslFreeSecureImageIat @ 0x14054DE98 (VslFreeSecureImageIat.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14054DF00 (VslInitFunctionOverrideCapabilities.c)
 *     VslMakeCodeCatalog @ 0x14054DFD0 (VslMakeCodeCatalog.c)
 *     VslPrepareSecureImageRelocations @ 0x14054E060 (VslPrepareSecureImageRelocations.c)
 *     VslRelocateImage @ 0x14054E280 (VslRelocateImage.c)
 *     VslTransferSecureImageVersionResource @ 0x14054E300 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14054E410 (VslValidateSecureImagePages.c)
 *     KeCopyPrivilegedPage @ 0x14056ECC8 (KeCopyPrivilegedPage.c)
 *     KeUnsecureProcess @ 0x14056F898 (KeUnsecureProcess.c)
 *     KeRebootSystemForRecovery @ 0x14057A43C (KeRebootSystemForRecovery.c)
 *     PspIumWorker @ 0x1405A64A0 (PspIumWorker.c)
 *     ExCreatePool @ 0x140606CE0 (ExCreatePool.c)
 *     ExpSecurePoolDestroy @ 0x14060CFC4 (ExpSecurePoolDestroy.c)
 *     MiProtectDriverSectionPte @ 0x14061A510 (MiProtectDriverSectionPte.c)
 *     MmWriteSystemImageTracepoint @ 0x1406433DC (MmWriteSystemImageTracepoint.c)
 *     MiWaitForFreePage @ 0x140653AB8 (MiWaitForFreePage.c)
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     DbgkCopyProcessDebugPort @ 0x1406BA2B0 (DbgkCopyProcessDebugPort.c)
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     VslQuerySecureDevice @ 0x140859640 (VslQuerySecureDevice.c)
 *     VslValidateDynamicCodePages @ 0x14087F3C8 (VslValidateDynamicCodePages.c)
 *     VslCompleteSecureDriverLoad @ 0x140885E04 (VslCompleteSecureDriverLoad.c)
 *     VslReserveProtectedPages @ 0x140886034 (VslReserveProtectedPages.c)
 *     VslCallEnclave @ 0x1408A4F78 (VslCallEnclave.c)
 *     NtDebugActiveProcess @ 0x140938770 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140938B90 (NtRemoveProcessDebug.c)
 *     VslAllocateKernelShadowStack @ 0x14094180C (VslAllocateKernelShadowStack.c)
 *     VslAllocateSecureHibernateResources @ 0x1409418BC (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x140941960 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x140941AA0 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140941C00 (VslCreateSecureProcess.c)
 *     VslCreateSecureSection @ 0x140941CA0 (VslCreateSecureSection.c)
 *     VslCreateSecureThread @ 0x140941DC0 (VslCreateSecureThread.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140941E88 (VslDebugProtectSecureProcessMemory.c)
 *     VslDebugReadWriteSecureProcess @ 0x140941F60 (VslDebugReadWriteSecureProcess.c)
 *     VslDeleteSecureSection @ 0x1409420C0 (VslDeleteSecureSection.c)
 *     VslDetermineHotPatchType @ 0x140942128 (VslDetermineHotPatchType.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x1409421D4 (VslDetermineHotPatchUndoTableSize.c)
 *     VslEnableKernelCfgTarget @ 0x140942254 (VslEnableKernelCfgTarget.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x1409422BC (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeKernelShadowStack @ 0x140942368 (VslFreeKernelShadowStack.c)
 *     VslFreeSecureHibernateResources @ 0x1409423D0 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14094242C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSecurePebAddress @ 0x140942560 (VslGetSecurePebAddress.c)
 *     VslGetSecureTebAddress @ 0x1409425EC (VslGetSecureTebAddress.c)
 *     VslGetSetSecureContext @ 0x14094267C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x140942754 (VslInitializeEnclave.c)
 *     VslIsEncryptionKeyAvailable @ 0x140942844 (VslIsEncryptionKeyAvailable.c)
 *     VslIumEtwEnableCallback @ 0x1409428C0 (VslIumEtwEnableCallback.c)
 *     VslLoadEnclaveData @ 0x14094297C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140942A78 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140942BA8 (VslObtainHotPatchUndoTable.c)
 *     VslPublishSyscallProviderServiceTables @ 0x140942D58 (VslPublishSyscallProviderServiceTables.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140942DD8 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x140942EB8 (VslRelaxQuotas.c)
 *     VslResetKernelShadowStack @ 0x140942F38 (VslResetKernelShadowStack.c)
 *     VslRundownSecureProcess @ 0x140942FC0 (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140943028 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x1409430BC (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14094331C (VslTerminateSecureThread.c)
 *     VslTransformDumpKey @ 0x1409433B0 (VslTransformDumpKey.c)
 *     VslUpdateFreezeTimeBias @ 0x14094357C (VslUpdateFreezeTimeBias.c)
 *     VslpConnectedStandbyPoCallback @ 0x1409436A0 (VslpConnectedStandbyPoCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140943770 (VslpConnectedStandbyWnfCallback.c)
 *     VslCaptureSecureImageIat @ 0x14094383C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140943944 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x140943A60 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14096F688 (PipUnprotectDevice.c)
 *     PspSecureThreadStartup @ 0x1409B19A0 (PspSecureThreadStartup.c)
 *     PsRegisterSyscallProvider @ 0x1409B4610 (PsRegisterSyscallProvider.c)
 *     PspDestroySyscallProvider @ 0x1409B4A80 (PspDestroySyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x1409B7874 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B78E0 (PsTerminateVsmEnclave.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140B48744 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x140B48EF0 (MiApplyRetpolineFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B49058 (MiApplyImportOptimizationToBootDrivers.c)
 *     MiApplyFunctionOverrideToBootDrivers @ 0x140B491C0 (MiApplyFunctionOverrideToBootDrivers.c)
 *     MiApplyBootLoadedDriversFixups @ 0x140B493C4 (MiApplyBootLoadedDriversFixups.c)
 *     VslConnectSwInterrupt @ 0x140B7391C (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B73A00 (VslRegisterBootDrivers.c)
 *     PsInitializeSyscallProviders @ 0x140B76D74 (PsInitializeSyscallProviders.c)
 *     VslApplyDynamicRelocations @ 0x140B94348 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140B943D4 (VslBindNtIum.c)
 *     VslReapplyBootIndirectPatches @ 0x140B94544 (VslReapplyBootIndirectPatches.c)
 *     VslpIumPhase0Initialize @ 0x140B945CC (VslpIumPhase0Initialize.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7170 (KeReleaseSemaphoreEx.c)
 *     HvlQueryVsmConnection @ 0x14033FE98 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     HvlSwitchToVsmVtl1 @ 0x14041A4E0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x14041A650 (VslpDispatchIumSyscall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 */

__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int16 a2, int a3, __int64 a4)
{
  __int16 v4; // r15
  char v7; // r13
  unsigned __int8 CurrentIrql; // r14
  __int16 v9; // dx
  char v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v13; // al
  unsigned int SecureThreadCookie; // ecx
  char v15; // cl
  NTSTATUS v16; // r15d
  __int16 v17; // r12
  _QWORD *v18; // r9
  char v19; // al
  char v21; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v23; // rdx
  char PreviousMode; // r12
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v27; // rdx
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  char v33; // [rsp+38h] [rbp-39h]
  char v35; // [rsp+3Ah] [rbp-37h]
  int v37; // [rsp+40h] [rbp-31h]
  _WORD v38[2]; // [rsp+44h] [rbp-2Dh] BYREF
  _WORD v39[2]; // [rsp+48h] [rbp-29h] BYREF
  _WORD v40[2]; // [rsp+4Ch] [rbp-25h] BYREF
  _WORD v41[2]; // [rsp+50h] [rbp-21h] BYREF
  int v42; // [rsp+54h] [rbp-1Dh]
  __int64 v43; // [rsp+58h] [rbp-19h]
  _QWORD v44[2]; // [rsp+60h] [rbp-11h] BYREF
  _WORD *v45; // [rsp+70h] [rbp-1h] BYREF
  int v46; // [rsp+78h] [rbp+7h]
  int v47; // [rsp+7Ch] [rbp+Bh]
  _QWORD v48[2]; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v49[2]; // [rsp+90h] [rbp+1Fh] BYREF

  v4 = a1;
  v37 = a3;
  v7 = 0;
  v35 = 0;
  CurrentIrql = 15;
  if ( !(unsigned __int8)HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  *(_BYTE *)v11 = v4;
  *(_WORD *)(v11 + 2) = v9;
  v43 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  if ( (unsigned __int8)v4 > 2u )
  {
    if ( (BYTE4(xmmword_140D1EAD0) & 8) != 0 )
    {
      v38[1] = v9;
      v44[0] = v38;
      v38[0] = v4;
      v44[1] = 4LL;
      v21 = 1;
      EtwTraceKernelEvent((int)v44, 1, 0xA0000008, 1353, 4200706);
    }
    else
    {
      v21 = v10;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v43);
    if ( v21 )
    {
      v47 = 0;
      v39[1] = a2;
      v39[0] = v4;
      v45 = v39;
      v46 = 4;
      EtwTraceKernelEvent((int)&v45, 1, 0xA0000008, 1354, 4200706);
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
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 15 )
            LODWORD(v23) = 0x8000;
          else
            v23 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
          SchedulerAssist[5] |= v23;
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  if ( (_BYTE)v4 == 1 )
  {
    v15 = 0;
    *(_DWORD *)(a4 + 4) = a3;
    goto LABEL_12;
  }
  if ( a3 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else if ( v13 >= 2u )
  {
    *(_DWORD *)(a4 + 4) = 0;
    v37 = 1;
  }
  else
  {
    SecureThreadCookie = CurrentThread->SecureThreadCookie;
    if ( SecureThreadCookie )
    {
      v37 = CurrentThread->SecureThreadCookie;
      *(_DWORD *)(a4 + 4) = SecureThreadCookie;
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      if ( VslVsmEnabled )
      {
        v15 = 1;
        goto LABEL_10;
      }
    }
  }
  v15 = 0;
LABEL_10:
  if ( !CurrentThread->SecureThreadCookie )
    v7 = 1;
LABEL_12:
  if ( v13 == 1 )
  {
    v7 = 1;
  }
  else
  {
    if ( v13 >= 2u )
    {
      v7 = 0;
      goto LABEL_15;
    }
    if ( !v7 )
      goto LABEL_15;
  }
  --CurrentThread->KernelApcDisable;
LABEL_15:
  if ( !v15 )
    goto LABEL_18;
  v16 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v16 < 0 )
    goto LABEL_28;
  LOBYTE(v4) = a1;
  v35 = 1;
  while ( 1 )
  {
LABEL_18:
    v17 = (unsigned __int8)v4;
    if ( (BYTE4(xmmword_140D1EAD0) & 8) != 0 )
    {
      v40[1] = a2;
      v33 = 1;
      v48[0] = v40;
      v40[0] = (unsigned __int8)v4;
      v48[1] = 4LL;
      EtwTraceKernelEvent((int)v48, 1, 0xA0000008, 1353, 4200706);
    }
    else
    {
      v33 = 0;
    }
    HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v43);
    v18 = (_QWORD *)(a4 + 8);
    v16 = *(_DWORD *)(a4 + 8);
    if ( v33 )
    {
      v41[1] = a2;
      v41[0] = v17;
      v49[0] = v41;
      v49[1] = 4LL;
      EtwTraceKernelEvent((int)v49, 1, 0xA0000008, 1354, 4200706);
      v18 = (_QWORD *)(a4 + 8);
    }
    v19 = *(_BYTE *)(a4 + 1);
    if ( v19 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v19 = *(_BYTE *)(a4 + 1);
    }
    if ( v19 == 6 )
      break;
    if ( v19 == 1 )
      goto LABEL_26;
    LOBYTE(v4) = a1;
    if ( a1 == 1 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    else if ( !v37 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_50:
        PsDispatchIumService(a4);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *v18 = -1073741776LL;
          break;
        }
LABEL_74:
        if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_140E018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
            CurrentThread->PreviousMode = 0;
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                       v18,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *v18 = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_74;
      case 5:
        goto LABEL_50;
    }
    if ( !v37 && a1 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( (_DWORD)KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(v25 - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v27 = CurrentPrcb->SchedulerAssist;
      v28 = (v27[5] & 0xFFFF0001) == 0;
      v27[5] &= 0xFFFF0001;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0LL);
LABEL_26:
  if ( v35 )
  {
    v42 = 0;
    KeReleaseSemaphoreEx((__int64)&VslpIumThreadSemaphore, 0, 1);
  }
LABEL_28:
  if ( v7 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( CurrentIrql != 15 )
  {
    if ( (_DWORD)KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu && CurrentIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
    __writecr8(CurrentIrql);
  }
  return (unsigned int)v16;
}
