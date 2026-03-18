/*
 * XREFs of MiLocateVadEvent @ 0x1402EE0C8
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiMarkPrivateImageCfgBits @ 0x1406CF50C (MiMarkPrivateImageCfgBits.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiInitializePartialVad @ 0x14079D7A8 (MiInitializePartialVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14079EF3C (MiFreeToSubAllocatedRegion.c)
 *     MmFreeVirtualMemory @ 0x1407B99C0 (MmFreeVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     MiGetReadyInPageBlock @ 0x14096D038 (MiGetReadyInPageBlock.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiGetAweVadPageSize @ 0x14097D244 (MiGetAweVadPageSize.c)
 *     MiAllocateChildVads @ 0x1409800F4 (MiAllocateChildVads.c)
 *     MiCopyLargeVad @ 0x140982B6C (MiCopyLargeVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1402EE0E0 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiLocateVadEvent(__int64 a1, __int64 a2)
{
  return MiLocateLockedVadEvent(a1, a2);
}
