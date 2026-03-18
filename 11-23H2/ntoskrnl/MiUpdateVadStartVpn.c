/*
 * XREFs of MiUpdateVadStartVpn @ 0x14029C908
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 *     MiUnmapViewOfSection @ 0x14071EFC0 (MiUnmapViewOfSection.c)
 *     MiReserveUserMemory @ 0x14071F3E0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140720280 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x140748574 (MiMapLockedPagesInUserSpace.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x1407B6658 (MiFindEmptyAddressRangeDownTree.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CCB64 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVad @ 0x1407CFBD8 (MiAllocateVad.c)
 *     MiMapViewOfPhysicalSection @ 0x140A30CE0 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3CC88 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateVadStartVpn(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
