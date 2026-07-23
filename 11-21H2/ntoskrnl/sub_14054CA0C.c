/*
 * XREFs of sub_14054CA0C @ 0x14054CA0C
 * Callers:
 *     sub_140543EB0 @ 0x140543EB0 (sub_140543EB0.c)
 *     sub_14082A2D4 @ 0x14082A2D4 (sub_14082A2D4.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 */

__int64 sub_14054CA0C()
{
  unsigned int v0; // edi
  __int64 v1; // rsi
  unsigned int v2; // eax
  __int64 result; // rax

  v0 = 0;
  v1 = -1LL;
  while ( 1 )
  {
    v2 = v0++;
    if ( v2 >= 4 )
      break;
    v1 += 0x40000000LL;
    result = MmAllocateContiguousNodeMemory(4096LL, 0, v1, 0, 4, 0x80000000);
    if ( result )
      return result;
  }
  return MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
}
