/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x140274D20
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPrepare @ 0x140234E80 (MiProbeAndLockPrepare.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x1402EA4F0 (NtGetWriteWatch.c)
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     MiDeprioritizeVad @ 0x1403C701C (MiDeprioritizeVad.c)
 *     MiCheckLockUnlockByVa @ 0x14061CC60 (MiCheckLockUnlockByVa.c)
 *     MmUpdateUserShadowStackValue @ 0x140646CD0 (MmUpdateUserShadowStackValue.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x1406B0064 (MiLockVadRange.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0290 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9980 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A6A8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x14071F590 (MiCleanVad.c)
 *     MiReserveUserMemory @ 0x14071F5E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 *     MmFreeVirtualMemory @ 0x1407452B0 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140747A20 (NtResetWriteWatch.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748764 (MiMapLockedPagesInUserSpace.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EE74 (MiFreeToSubAllocatedRegion.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A404C (MiCommitInitialVadMetadataBits.c)
 *     MiCfgMarkValidEntries @ 0x1407A493C (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A51F4 (MiProcessVaRangesInfoClass.c)
 *     MmSecureVirtualMemoryEx @ 0x1407BAB90 (MmSecureVirtualMemoryEx.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407E6430 (MiUnmapLockedPagesInUserSpace.c)
 *     MmSetGraphicsPtes @ 0x140A2EDA0 (MmSetGraphicsPtes.c)
 *     MmRotatePhysicalView @ 0x140A31E80 (MmRotatePhysicalView.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x140A3221C (MmAdjustSecuredVirtualMemorySize.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A375BC (MiGetVadForHotPatchInProgress.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A3C4C4 (MmPrepareImagePagesForHotPatch.c)
 *     MiCreateEnclave @ 0x140A3D91C (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x140A3E148 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E748 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A3ECBC (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x140A3F520 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140A3FB50 (NtTerminateEnclave.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45E10 (MmStoreAllocateVirtualMemory.c)
 *     MiScrubProcessLargePage @ 0x140A46C44 (MiScrubProcessLargePage.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD0B0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceVad(char *P)
{
  signed __int32 v2; // edx
  BOOL v3; // esi
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf

  v2 = _InterlockedDecrement((volatile signed __int32 *)P + 9);
  if ( v2 == -1 )
    __fastfail(0xEu);
  v3 = !v2 && (*((_DWORD *)P + 12) & 4) != 0;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(CurrentThread[1].Queue) &= ~0x80u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(P + 40);
  KeAbPostRelease((ULONG_PTR)(P + 40));
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(P, 0);
}
