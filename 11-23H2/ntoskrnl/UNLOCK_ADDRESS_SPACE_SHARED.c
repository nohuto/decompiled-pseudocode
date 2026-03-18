/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x140275250
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x1402159D4 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x140274CB0 (MiObtainReferencedVadEx.c)
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C0A4 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapVirtualAddresses @ 0x140652C4C (MmOutSwapVirtualAddresses.c)
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MmGetImageInformation @ 0x14077E280 (MmGetImageInformation.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A3E5C (MiCommitInitialVadMetadataBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4CF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiHotPatchProcess @ 0x140A374C4 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140A3C510 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x140A3C5EC (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x140A40358 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140A495E8 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140A49AA0 (MiFreeLargePageView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 */

signed __int32 __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  signed __int32 result; // eax

  *(_BYTE *)(a1 + 1384) &= ~2u;
  v2 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 1224);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
