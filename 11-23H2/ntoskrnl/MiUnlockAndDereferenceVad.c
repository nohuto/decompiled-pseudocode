/*
 * XREFs of MiUnlockAndDereferenceVad @ 0x140274A90
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MiProbeAndLockPrepare @ 0x140234DB0 (MiProbeAndLockPrepare.c)
 *     MmProbeAndLockPages @ 0x140238790 (MmProbeAndLockPages.c)
 *     MiObtainReferencedVadEx @ 0x140274CB0 (MiObtainReferencedVadEx.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiProbeAndLockPages @ 0x1402FC270 (MiProbeAndLockPages.c)
 *     MiDeprioritizeVad @ 0x1403C6E3C (MiDeprioritizeVad.c)
 *     MiCheckLockUnlockByVa @ 0x14061C710 (MiCheckLockUnlockByVa.c)
 *     MmUpdateUserShadowStackValue @ 0x140646780 (MmUpdateUserShadowStackValue.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0260 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9770 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A4A8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 *     MiCleanVad @ 0x14071F390 (MiCleanVad.c)
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MmFreeVirtualMemory @ 0x1407450C0 (MmFreeVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140747830 (NtResetWriteWatch.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EC84 (MiFreeToSubAllocatedRegion.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A3E5C (MiCommitInitialVadMetadataBits.c)
 *     MiCfgMarkValidEntries @ 0x1407A474C (MiCfgMarkValidEntries.c)
 *     MiProcessVaRangesInfoClass @ 0x1407A5004 (MiProcessVaRangesInfoClass.c)
 *     MmSecureVirtualMemoryEx @ 0x1407BA8C0 (MmSecureVirtualMemoryEx.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407E6160 (MiUnmapLockedPagesInUserSpace.c)
 *     MmSetGraphicsPtes @ 0x140A2EAF0 (MmSetGraphicsPtes.c)
 *     MmRotatePhysicalView @ 0x140A31BD0 (MmRotatePhysicalView.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x140A31F6C (MmAdjustSecuredVirtualMemorySize.c)
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 *     MiGetVadForHotPatchInProgress @ 0x140A3730C (MiGetVadForHotPatchInProgress.c)
 *     MmPrepareImagePagesForHotPatch @ 0x140A3C214 (MmPrepareImagePagesForHotPatch.c)
 *     MiCreateEnclave @ 0x140A3D66C (MiCreateEnclave.c)
 *     MiInitializeEnclave @ 0x140A3DE98 (MiInitializeEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3E498 (MiLoadSectionIntoVsmEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140A3EA0C (MmSelectVsmEnclaveByAddress.c)
 *     NtLoadEnclaveData @ 0x140A3F270 (NtLoadEnclaveData.c)
 *     NtTerminateEnclave @ 0x140A3F8A0 (NtTerminateEnclave.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A45B60 (MmStoreAllocateVirtualMemory.c)
 *     MiScrubProcessLargePage @ 0x140A46994 (MiScrubProcessLargePage.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140AAD240 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
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
