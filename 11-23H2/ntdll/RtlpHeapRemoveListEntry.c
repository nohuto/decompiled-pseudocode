/*
 * XREFs of RtlpHeapRemoveListEntry @ 0x180048FDC
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180043F44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044330 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x1800455F8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpUpdateUCRIndexRemove @ 0x180046664 (RtlpUpdateUCRIndexRemove.c)
 *     RtlpPopulateListIndex @ 0x1800478D4 (RtlpPopulateListIndex.c)
 *     RtlpCoalesceHeap @ 0x1800FFB8C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801085C0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapRemoveListEntry(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, int a6)
{
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 *v13; // r11
  __int64 result; // rax
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // [rsp+38h] [rbp-10h]

  v8 = a5 - *(_DWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a2 + 48);
  v10 = *(_DWORD *)(a2 + 8);
  v11 = 2 * v8;
  if ( !*(_DWORD *)(a2 + 12) )
    v11 = v8;
  v12 = (unsigned int)v11;
  v13 = *(__int64 **)(v9 + 8 * v11);
  result = v10 - 1;
  --*(_DWORD *)(a2 + 16);
  if ( a5 == (_DWORD)result )
    --*(_DWORD *)(a2 + 20);
  if ( v13 == a4 )
  {
    v15 = *a4;
    if ( *(_QWORD *)a2 )
      result = v10;
    if ( a5 >= (unsigned int)result )
    {
      if ( v15 != *(_QWORD *)(a2 + 32) )
      {
        *(_QWORD *)(v9 + 8 * v12) = v15;
        return result;
      }
      *(_QWORD *)(v9 + 8 * v12) = 0LL;
    }
    else
    {
      if ( v15 != *(_QWORD *)(a2 + 32) )
      {
        if ( a3 )
        {
          v17 = *(_DWORD *)(v15 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v17 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v15 - 16 + 8);
            if ( HIBYTE(v17) != ((unsigned __int8)v17 ^ (unsigned __int8)(BYTE1(v17) ^ BYTE2(v17))) )
              RtlpLogHeapFailure(3, a1, v15 - 16, 0, 0LL, 0LL);
          }
          v16 = a6 - (unsigned __int16)v17;
        }
        else
        {
          v16 = a6 - *(_DWORD *)(v15 + 40);
        }
        if ( !v16 )
        {
          result = *(_QWORD *)(a2 + 48);
          *(_QWORD *)(result + 8 * v12) = v15;
          return result;
        }
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v12) = 0LL;
    }
    result = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(result + 4 * ((unsigned __int64)v8 >> 5)) &= ~(1 << (v8 & 0x1F));
  }
  return result;
}
