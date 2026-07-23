/*
 * XREFs of VslpLockPagesForTransfer @ 0x1403CEC64
 * Callers:
 *     VslAllocatePool @ 0x14054B148 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14054B5C0 (VslFinishStartSecureProcessor.c)
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
 *     MmBuildMdlForNonPagedPool @ 0x14020D950 (MmBuildMdlForNonPagedPool.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     VslpLockMdlForTransfer @ 0x1403CEE40 (VslpLockMdlForTransfer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, struct _MDL *a2, unsigned int a3, int a4, unsigned int a5)
{
  int v5; // r11d
  __int64 v6; // r9
  struct _MDL *v7; // r10
  struct _MDL *Pool2; // rdi
  unsigned int v9; // r14d
  struct _MDL *v10; // r15
  unsigned int v11; // r13d
  int v12; // r15d
  int v14; // r14d
  struct _MDL *Next; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _MDL *v17; // [rsp+20h] [rbp-48h]
  struct _MDL *v19; // [rsp+78h] [rbp+10h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v19 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Pool2 = 0LL;
  v9 = a5;
  if ( (a5 & 0x13) != 0 )
  {
    if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    {
      v12 = -1073741811;
      goto LABEL_20;
    }
    v7 = a2;
  }
  v10 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v11 = 8 * (((unsigned int)v6 + (unsigned __int64)((unsigned __int16)v7 & 0xFFF) + 4095) >> 12) + 48;
    if ( (v9 & 1) != 0 )
      v11 = 4096;
    if ( (v9 & 4) != 0 )
      v11 = (v11 + 4095) & 0xFFFFF000;
    if ( (v9 & 0x20) != 0 )
    {
      Pool2 = 0LL;
    }
    else
    {
      Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v11, 1416850774LL);
      v6 = v20;
      v7 = v19;
      v5 = a4;
    }
    if ( !Pool2 )
      break;
    while ( 1 )
    {
      Pool2->Next = 0LL;
      Pool2->Size = 8 * (((((unsigned __int16)v7 & 0xFFF) + 4095LL + (unsigned __int64)(unsigned int)v6) >> 12) + 6);
      Pool2->MdlFlags = 0;
      Pool2->StartVa = (PVOID)((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL);
      Pool2->ByteOffset = (unsigned __int16)v7 & 0xFFF;
      Pool2->ByteCount = v6;
      if ( (v9 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(Pool2);
      }
      else if ( (_DWORD)v6 )
      {
        MiProbeAndLockPages((__int64)Pool2, 0, v5 != 0);
      }
      if ( (v9 & 0x10) == 0 )
      {
        Pool2->Next = v10;
        v10 = Pool2;
        v17 = Pool2;
        v7 = Pool2;
        v19 = Pool2;
        v6 = v11;
        v20 = v11;
        if ( v11 > 0x1000 )
          break;
      }
      v12 = VslpLockMdlForTransfer(a1, Pool2, v9, v6);
      if ( v12 >= 0 )
      {
        *(_DWORD *)(a1 + 64) |= 8u;
        return 0LL;
      }
      if ( (v9 & 0x10) == 0 )
        goto LABEL_20;
      MmUnlockPages(Pool2);
      ExFreePoolWithTag(Pool2, 0);
      v10 = v17;
LABEL_34:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&VslpReservedTransferLock, 0LL);
      Pool2 = (struct _MDL *)VslpReservedTransferMdl;
      v9 |= 0x20u;
      v6 = v20;
      v7 = v19;
      v5 = a4;
    }
    v5 = a4;
  }
  if ( (v9 & 0x10) != 0 )
    goto LABEL_34;
  Pool2 = v10;
  v12 = -1073741670;
LABEL_20:
  v14 = v9 & 0x20;
  while ( Pool2 )
  {
    Next = Pool2->Next;
    Pool2->Next = 0LL;
    if ( (Pool2->MdlFlags & 2) != 0 )
      MmUnlockPages(Pool2);
    if ( !v14 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = Next;
  }
  if ( v14 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v12;
}
