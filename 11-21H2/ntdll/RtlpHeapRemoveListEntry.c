/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x18002E790
 * Callers:
 *     RtlpPopulateListIndex @ 0x18001FF74 (RtlpPopulateListIndex.c)
 *     RtlpUpdateUCRIndexRemove @ 0x1800211C4 (RtlpUpdateUCRIndexRemove.c)
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800219DC (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x180107448 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapRemoveListEntry(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, int a6)
{
  unsigned int v9; // esi
  __int64 result; // rax
  unsigned int v11; // r14d
  __int64 v12; // rbp
  unsigned int v13; // ecx
  __int64 *v14; // r8
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // [rsp+38h] [rbp-10h]

  v9 = a5 - *(_DWORD *)(a2 + 24);
  result = *(_QWORD *)(a2 + 48);
  v11 = *(_DWORD *)(a2 + 8);
  v12 = 2 * v9;
  if ( !*(_DWORD *)(a2 + 12) )
    v12 = v9;
  v13 = v11 - 1;
  v14 = *(__int64 **)(result + 8 * v12);
  --*(_DWORD *)(a2 + 16);
  if ( a5 == v11 - 1 )
    --*(_DWORD *)(a2 + 20);
  if ( v14 == a4 )
  {
    v15 = *a4;
    if ( *(_QWORD *)a2 )
      v13 = v11;
    if ( a5 >= v13 )
    {
      if ( v15 == *(_QWORD *)(a2 + 32) )
        goto LABEL_17;
    }
    else
    {
      if ( v15 == *(_QWORD *)(a2 + 32) )
        goto LABEL_16;
      if ( a3 )
      {
        v17 = *(_DWORD *)(v15 - 16 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v17 = *(_DWORD *)(v15 - 16 + 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
            RtlpLogHeapFailure(3, a1, v15 - 16, 0, 0LL, 0LL);
        }
        v16 = a6 - (unsigned __int16)v17;
      }
      else
      {
        v16 = a6 - *(_DWORD *)(v15 + 40);
      }
      if ( v16 )
      {
LABEL_16:
        result = *(_QWORD *)(a2 + 48);
LABEL_17:
        *(_QWORD *)(result + 8 * v12) = 0LL;
        result = *(_QWORD *)(a2 + 40);
        *(_DWORD *)(result + 4 * ((unsigned __int64)v9 >> 5)) &= ~(1 << (v9 & 0x1F));
        return result;
      }
      result = *(_QWORD *)(a2 + 48);
    }
    *(_QWORD *)(result + 8 * v12) = v15;
  }
  return result;
}
