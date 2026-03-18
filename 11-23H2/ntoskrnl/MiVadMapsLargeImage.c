/*
 * XREFs of MiVadMapsLargeImage @ 0x14027CF40
 * Callers:
 *     MiSoftFaultMappedView @ 0x140217E90 (MiSoftFaultMappedView.c)
 *     MmOutSwapWorkingSet @ 0x140342000 (MmOutSwapWorkingSet.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1406181CC (MiIsVadEligibleForCommitRelease.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14061C0A4 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9770 (MmProtectVirtualMemory.c)
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14071A4A8 (MmSecureVirtualMemoryAgainstWrites.c)
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407A3F60 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4CF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFillMapFileInfo @ 0x1408ABE2A (MiFillMapFileInfo.c)
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
