/*
 * XREFs of RtlpHeapAddListEntry @ 0x18002192C
 * Callers:
 *     RtlpPopulateListIndex @ 0x18001FF74 (RtlpPopulateListIndex.c)
 *     RtlpUpdateUCRIndexInsert @ 0x18002104C (RtlpUpdateUCRIndexInsert.c)
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpInitializeUCRIndex @ 0x180091258 (RtlpInitializeUCRIndex.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x180107448 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x180020420 (RtlpHeapListCompare.c)
 */

__int64 __fastcall RtlpHeapAddListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 result; // rax

  v6 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = 2 * v9;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = v9;
  v11 = *(_QWORD *)(v6 + 8 * v10);
  if ( a5 == *(_DWORD *)(a2 + 8) - 1 )
    ++*(_DWORD *)(a2 + 20);
  if ( !v11 || (result = RtlpHeapListCompare(a1, v11, a6, a3), (int)result <= 0) )
  {
    result = *(_QWORD *)(a2 + 48);
    *(_QWORD *)(result + 8 * v10) = a4;
    if ( !v11 )
    {
      result = *(_QWORD *)(a2 + 40);
      *(_DWORD *)(result + 4 * ((unsigned __int64)v9 >> 5)) |= 1 << (v9 & 0x1F);
    }
  }
  return result;
}
