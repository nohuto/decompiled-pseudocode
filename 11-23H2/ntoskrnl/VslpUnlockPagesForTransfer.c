/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1403CECFC
 * Callers:
 *     VslFinishStartSecureProcessor @ 0x14054AF00 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14054B084 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x14054B0D0 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x14054B698 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x14054B820 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054BE64 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14054C010 (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x14054C440 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14054C618 (VslSecurePoolAllocate.c)
 *     VslSecurePoolUpdate @ 0x14054C7B0 (VslSecurePoolUpdate.c)
 *     VslCreateSecureImageSection @ 0x14054D9D0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14054DAD0 (VslFillSecureAllocation.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14054DE60 (VslInitFunctionOverrideCapabilities.c)
 *     VslPrepareSecureImageRelocations @ 0x14054DFC0 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14054E260 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14054E370 (VslValidateSecureImagePages.c)
 *     VslValidateDynamicCodePages @ 0x14087EEF8 (VslValidateDynamicCodePages.c)
 *     VslCapturePgoData @ 0x1409418B0 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x1409419F0 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x140941BF0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x140941EB0 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14094237C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x1409425CC (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x1409426A4 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x1409428CC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x1409429C8 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140942AF8 (VslObtainHotPatchUndoTable.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140942D28 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x14094300C (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x140943300 (VslTransformDumpKey.c)
 *     VslCaptureSecureImageIat @ 0x14094378C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140943894 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslConnectSwInterrupt @ 0x140B728D4 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B729B8 (VslRegisterBootDrivers.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
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
