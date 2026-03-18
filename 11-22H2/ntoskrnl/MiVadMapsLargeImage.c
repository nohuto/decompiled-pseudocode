/*
 * XREFs of MiVadMapsLargeImage @ 0x14027CE20
 * Callers:
 *     MiSoftFaultMappedView @ 0x140217EB0 (MiSoftFaultMappedView.c)
 *     MmOutSwapWorkingSet @ 0x140341B10 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14061823C (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C114 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9820 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A518 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14071F030 (MiUnmapViewOfSection.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407A4470 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A5200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFillMapFileInfo @ 0x1408AC30A (MiFillMapFileInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadMapsLargeImage(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x20 )
    return HIBYTE(*(_DWORD *)(a1 + 64)) & 1;
  else
    return 0LL;
}
