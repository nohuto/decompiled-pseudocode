/*
 * XREFs of sub_1403B9174 @ 0x1403B9174
 * Callers:
 *     sub_140A54CD8 @ 0x140A54CD8 (sub_140A54CD8.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 */

__int64 sub_1403B9174()
{
  void *ContiguousNodeMemory; // rax

  if ( qword_140C4ACA8 )
    return 0LL;
  ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(4096LL, 0, -1, 0, 4, 0x80000000);
  if ( ContiguousNodeMemory )
  {
    qword_140C4ACA8 = ContiguousNodeMemory;
    return 0LL;
  }
  return 3221225626LL;
}
