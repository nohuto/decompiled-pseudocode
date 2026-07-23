/*
 * XREFs of MmIsAddressValid @ 0x14038DE50
 * Callers:
 *     sub_1403EBAC8 @ 0x1403EBAC8 (sub_1403EBAC8.c)
 *     sub_1403FABD0 @ 0x1403FABD0 (sub_1403FABD0.c)
 *     sub_14093C268 @ 0x14093C268 (sub_14093C268.c)
 *     sub_140A4F19C @ 0x140A4F19C (sub_140A4F19C.c)
 *     sub_140A659E0 @ 0x140A659E0 (sub_140A659E0.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return sub_14028FBF0((__int64)VirtualAddress);
}
