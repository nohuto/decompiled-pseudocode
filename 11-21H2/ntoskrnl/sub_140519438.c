/*
 * XREFs of sub_140519438 @ 0x140519438
 * Callers:
 *     sub_1403CE2B4 @ 0x1403CE2B4 (sub_1403CE2B4.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140519438(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  __int64 v5; // rbx
  __int64 i; // rsi
  __int64 v7; // r14
  __int64 v8; // rbp
  void *ContiguousNodeMemory; // rax

  result = sub_14042A5E0(*(_QWORD *)(a1 + 64), a2);
  v4 = *(_DWORD *)(a1 + 76);
  if ( v4 < 0x40 )
    v5 = (1LL << v4) - 1;
  else
    LODWORD(v5) = -1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(a1 + 56);
    v8 = 160 * i;
    result = *(unsigned int *)(v7 + 160 * i + 120);
    if ( (_DWORD)result )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory((unsigned int)result, 0, v5, 0, 516, 0x80000000);
      *(_QWORD *)(v7 + v8 + 128) = ContiguousNodeMemory;
      *(PHYSICAL_ADDRESS *)(v7 + v8 + 136) = MmGetPhysicalAddress(ContiguousNodeMemory);
      result = sub_14042A5E0(*(_QWORD *)(a1 + 64), (unsigned int)i);
    }
  }
  return result;
}
