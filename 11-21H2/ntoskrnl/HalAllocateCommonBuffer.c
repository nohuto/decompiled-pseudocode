/*
 * XREFs of HalAllocateCommonBuffer @ 0x1405054E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_1403B64E0 @ 0x1403B64E0 (sub_1403B64E0.c)
 *     sub_140511050 @ 0x140511050 (sub_140511050.c)
 */

PVOID __stdcall HalAllocateCommonBuffer(
        PDMA_ADAPTER DmaAdapter,
        ULONG Length,
        PPHYSICAL_ADDRESS LogicalAddress,
        BOOLEAN CacheEnabled)
{
  PHYSICAL_ADDRESS *v4; // r8
  char v5; // r9
  __int64 v6; // r10
  unsigned int v7; // r11d
  int v9; // [rsp+20h] [rbp-18h]

  if ( (unsigned int)sub_14023A8D0((__int64)DmaAdapter) != 2 )
    return (PVOID)sub_140511050(v6, 0, v7, (_DWORD)v4, 1, 0x80000000);
  LOBYTE(v9) = v5;
  return sub_1403B64E0(v6, 0LL, v7, v4, v9, 0x80000000);
}
