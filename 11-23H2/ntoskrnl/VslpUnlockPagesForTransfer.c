/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1403CEEDC
 * Callers:
 *     VslFinishStartSecureProcessor @ 0x14054B5C0 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14054B744 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x14054B790 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x14054BD58 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x14054BEE0 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054C524 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14054C6D0 (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x14054CB00 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14054CCD8 (VslSecurePoolAllocate.c)
 *     VslSecurePoolUpdate @ 0x14054CE70 (VslSecurePoolUpdate.c)
 *     VslCreateSecureImageSection @ 0x14054E090 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14054E190 (VslFillSecureAllocation.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14054E520 (VslInitFunctionOverrideCapabilities.c)
 *     VslPrepareSecureImageRelocations @ 0x14054E680 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14054E920 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14054EA30 (VslValidateSecureImagePages.c)
 *     VslValidateDynamicCodePages @ 0x14087F138 (VslValidateDynamicCodePages.c)
 *     VslCapturePgoData @ 0x140941AB0 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x140941BF0 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x140941DF0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x1409420B0 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14094257C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x1409427CC (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x1409428A4 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x140942ACC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140942BC8 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140942CF8 (VslObtainHotPatchUndoTable.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140942F28 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x14094320C (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x140943500 (VslTransformDumpKey.c)
 *     VslCaptureSecureImageIat @ 0x14094398C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140943A94 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslConnectSwInterrupt @ 0x140B728D4 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B729B8 (VslRegisterBootDrivers.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 **a1)
{
  int v2; // eax
  struct _MDL *v3; // rdi
  struct _MDL *v4; // rcx

  if ( (*((_BYTE *)a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 1));
  v2 = *((_DWORD *)a1 + 16);
  if ( (v2 & 8) != 0 )
  {
    v3 = (struct _MDL *)*a1;
    while ( v3 )
    {
      if ( (v3->MdlFlags & 2) != 0 )
        MmUnlockPages(v3);
      v2 = *((_DWORD *)a1 + 16);
      v4 = v3;
      v3 = v3->Next;
      if ( (v2 & 0x20) == 0 )
      {
        ExFreePoolWithTag(v4, 0);
        v2 = *((_DWORD *)a1 + 16);
      }
    }
  }
  if ( (v2 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
}
