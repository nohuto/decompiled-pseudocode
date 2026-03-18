/*
 * XREFs of IommupValidateMdl @ 0x140529408
 * Callers:
 *     IommuMapIdentityRange @ 0x140528440 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x140528650 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x140528E00 (IommuUnmapIdentityRange.c)
 *     IommupProcessPhysicalAddress @ 0x14052936C (IommupProcessPhysicalAddress.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
