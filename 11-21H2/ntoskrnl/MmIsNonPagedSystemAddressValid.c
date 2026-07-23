/*
 * XREFs of MmIsNonPagedSystemAddressValid @ 0x14045BA00
 * Callers:
 *     sub_140AA3EB0 @ 0x140AA3EB0 (sub_140AA3EB0.c)
 *     sub_140AA59E0 @ 0x140AA59E0 (sub_140AA59E0.c)
 *     sub_140AA6600 @ 0x140AA6600 (sub_140AA6600.c)
 *     sub_140AA66E0 @ 0x140AA66E0 (sub_140AA66E0.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 */

BOOLEAN __stdcall MmIsNonPagedSystemAddressValid(PVOID VirtualAddress)
{
  int v1; // eax

  v1 = sub_14027B080((unsigned __int64)VirtualAddress);
  return v1 != 6 && v1 != 1;
}
