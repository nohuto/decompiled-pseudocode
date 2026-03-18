/*
 * XREFs of MiLocateVadEvent @ 0x14030B40C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1406F7220 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8350 (MmQueryVirtualMemory.c)
 *     MiDeleteVad @ 0x1406FA420 (MiDeleteVad.c)
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x1407450C0 (MmFreeVirtualMemory.c)
 *     MiInitializePartialVad @ 0x14076D6EC (MiInitializePartialVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EC84 (MiFreeToSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407A3F60 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4CF0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCB64 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFillMapFileInfo @ 0x1408ABE2A (MiFillMapFileInfo.c)
 *     MiGetReadyInPageBlock @ 0x140A31330 (MiGetReadyInPageBlock.c)
 *     MiApplyImageHotPatchRequest @ 0x140A355E0 (MiApplyImageHotPatchRequest.c)
 *     MiGetAweVadPageSize @ 0x140A41D5C (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x140A4837C (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x140A4934C (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14030B424 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1, __int64 a2)
{
  return MiLocateLockedVadEvent(a1, a2);
}
