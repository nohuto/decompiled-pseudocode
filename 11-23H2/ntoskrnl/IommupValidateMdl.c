/*
 * XREFs of IommupValidateMdl @ 0x1405271F8
 * Callers:
 *     IommuMapIdentityRange @ 0x140526430 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x140526640 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x140526D30 (IommuUnmapIdentityRange.c)
 *     IommupProcessPhysicalAddress @ 0x140527158 (IommupProcessPhysicalAddress.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
