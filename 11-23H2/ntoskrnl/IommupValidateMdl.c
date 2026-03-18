/*
 * XREFs of IommupValidateMdl @ 0x140526CA8
 * Callers:
 *     IommuMapIdentityRange @ 0x140525EE0 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1405260F0 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x1405267E0 (IommuUnmapIdentityRange.c)
 *     IommupProcessPhysicalAddress @ 0x140526C08 (IommupProcessPhysicalAddress.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
