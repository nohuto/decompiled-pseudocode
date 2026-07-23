/*
 * XREFs of RtlpHeapAddListEntry @ 0x180044D74
 * Callers:
 *     RtlpFreeHeap @ 0x180039680 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F1C0 (RtlpAllocateHeap.c)
 *     RtlpCreateSplitBlock @ 0x180044330 (RtlpCreateSplitBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800447F0 (RtlpInsertFreeBlock.c)
 *     RtlpUpdateUCRIndexInsert @ 0x180046580 (RtlpUpdateUCRIndexInsert.c)
 *     RtlpPopulateListIndex @ 0x1800478D4 (RtlpPopulateListIndex.c)
 *     RtlpInitializeUCRIndex @ 0x18008C55C (RtlpInitializeUCRIndex.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801085C0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHeapAddListEntry(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rax
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 result; // rax
  int v13; // ecx
  int v14; // [rsp+38h] [rbp-20h]

  v6 = *(_QWORD *)(a2 + 48);
  ++*(_DWORD *)(a2 + 16);
  v9 = a5 - *(_DWORD *)(a2 + 24);
  v10 = 2 * v9;
  if ( !*(_DWORD *)(a2 + 12) )
    v10 = v9;
  v11 = *(_QWORD *)(v6 + 8 * v10);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) - 1);
  if ( a5 == (_DWORD)result )
    ++*(_DWORD *)(a2 + 20);
  if ( !v11 )
    goto LABEL_6;
  if ( a3 )
  {
    v14 = *(_DWORD *)(v11 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v14 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v11 - 16 + 8);
      if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
        RtlpLogHeapFailure(3, a1, v11 - 16, 0, 0LL, 0LL);
    }
    result = (unsigned __int16)v14;
    v13 = a6 - (unsigned __int16)v14;
  }
  else
  {
    v13 = a6 - *(_DWORD *)(v11 + 40);
  }
  if ( v13 <= 0 )
  {
LABEL_6:
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
