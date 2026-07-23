/*
 * XREFs of MmSetAddressRangeModified @ 0x1402535C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14033D860 @ 0x14033D860 (sub_14033D860.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  return sub_14033D860(Address, Length);
}
