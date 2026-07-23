/*
 * XREFs of sub_14052E2BC @ 0x14052E2BC
 * Callers:
 *     sub_14052F0E8 @ 0x14052F0E8 (sub_14052F0E8.c)
 *     sub_14052FFE0 @ 0x14052FFE0 (sub_14052FFE0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 */

PHYSICAL_ADDRESS __fastcall sub_14052E2BC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, LONGLONG *a5)
{
  PHYSICAL_ADDRESS result; // rax

  *a5 = 1LL;
  result = MmGetPhysicalAddress(*(PVOID *)(a2 + 8LL * ((a3 >> 6) & 0x3FFF) + 56));
  *a5 = result.QuadPart ^ (LOWORD(result.LowPart) ^ (unsigned __int16)*a5) & 0xFFF;
  return result;
}
