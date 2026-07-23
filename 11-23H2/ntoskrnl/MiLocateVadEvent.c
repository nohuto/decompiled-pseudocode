/*
 * XREFs of MiLocateVadEvent @ 0x14030B69C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1406F7430 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8560 (MmQueryVirtualMemory.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     MmFreeVirtualMemory @ 0x1407452B0 (MmFreeVirtualMemory.c)
 *     MiInitializePartialVad @ 0x14076D8DC (MiInitializePartialVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EE74 (MiFreeToSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x1407A4150 (MiMarkPrivateImageCfgBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1407A4EE0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCE34 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFillMapFileInfo @ 0x1408AC07A (MiFillMapFileInfo.c)
 *     MiGetReadyInPageBlock @ 0x140A315E0 (MiGetReadyInPageBlock.c)
 *     MiApplyImageHotPatchRequest @ 0x140A35890 (MiApplyImageHotPatchRequest.c)
 *     MiGetAweVadPageSize @ 0x140A4200C (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x140A4862C (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x140A495FC (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14030B6B4 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1, __int64 a2)
{
  return MiLocateLockedVadEvent(a1, a2);
}
