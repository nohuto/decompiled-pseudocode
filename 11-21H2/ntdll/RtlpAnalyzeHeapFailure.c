/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x180114AD4
 * Callers:
 *     RtlpPopulateListIndex @ 0x18001FF74 (RtlpPopulateListIndex.c)
 *     RtlpCollectFreeBlocks @ 0x180020488 (RtlpCollectFreeBlocks.c)
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180020B1C (RtlpFindAndCommitPages.c)
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x1800219DC (RtlpGrowBlockInPlace.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180078BC0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x180102C1C (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180104194 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180106CB0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapSegment @ 0x180107448 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x18011F538 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

_UNKNOWN **__fastcall RtlpAnalyzeHeapFailure(unsigned __int64 a1, unsigned __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  int v6; // esi
  char v7; // al
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // di
  unsigned __int16 v13; // bx
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+48h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0LL;
  v5 = 0;
  if ( !byte_18017A188 )
  {
    v6 = *(_DWORD *)(a1 + 124);
    if ( (v6 & *(_DWORD *)(a2 + 8)) != 0 )
      goto LABEL_34;
    v5 = 10;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
      && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
    {
      goto LABEL_34;
    }
    v5 = 1;
    if ( *(_BYTE *)(a2 + 14) )
    {
      v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - *(unsigned __int8 *)(a2 + 14)) << 16);
      v20 = v4;
    }
    else
    {
      v4 = a1;
      v20 = a1;
    }
    if ( *(_DWORD *)(v4 + 16) != -1114130 )
      goto LABEL_34;
    v7 = *(_BYTE *)(a2 + 15);
    if ( v7 != 4 )
    {
      v5 = 2;
      if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
        goto LABEL_34;
    }
    v5 = 3;
    if ( v7 == 3 )
    {
      v8 = a2 + 16;
      v9 = *(_QWORD *)(a2 + 48);
      if ( (v9 & 0xFFF) != 0 )
        goto LABEL_34;
      if ( v9 < *(_QWORD *)(v4 + 48) )
        goto LABEL_34;
      if ( *(_QWORD *)(a2 + 56) + v9 > *(_QWORD *)(v4 + 72) )
        goto LABEL_34;
      v5 = 4;
      v10 = **(_QWORD **)(a2 + 24);
      if ( v10 != *(_QWORD *)(*(_QWORD *)v8 + 8LL) )
        goto LABEL_34;
      if ( v10 != v8 )
        goto LABEL_34;
      v5 = 5;
      v11 = **(_QWORD **)(a2 + 40);
      if ( v11 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v11 != a2 + 32 )
        goto LABEL_34;
      v12 = *(_WORD *)(a1 + 140);
    }
    else
    {
      v5 = 6;
      v12 = *(_WORD *)(a1 + 140);
      if ( (v12 ^ *(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12)) != *(_WORD *)(a2 + 8) )
        goto LABEL_34;
    }
    v5 = 7;
    v13 = *(_WORD *)(a2 + 12);
    if ( v12 == v13 )
      goto LABEL_30;
    v14 = a2 - 16 * (v12 ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
    if ( v6 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      LOWORD(v21) = v15;
      if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
        v21 = v15 ^ *(_DWORD *)(a1 + 136);
      v16 = v21;
      v12 = *(_WORD *)(a1 + 140);
      v13 = *(_WORD *)(a2 + 12);
      v4 = v20;
      v5 = 7;
    }
    else
    {
      v16 = *(_WORD *)(v14 + 8);
    }
    if ( v16 == (v12 ^ v13) )
    {
LABEL_30:
      v5 = 8;
      if ( (*(_BYTE *)(a2 + 10) & 1) != 0
        || (v17 = **(_QWORD **)(a2 + 24), v17 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v17 == a2 + 16 )
      {
        v5 = 9;
      }
    }
LABEL_34:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
      *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v5 > 5 )
    {
      if ( v5 <= 7 )
        goto LABEL_48;
      if ( v5 == 8 )
      {
        LODWORD(v18) = 8;
        v19 = 13;
        return (_UNKNOWN **)RtlpLogHeapFailure(v19, a1, a2, v18, 0LL, 0LL);
      }
      if ( v5 == 10 )
        goto LABEL_48;
      v19 = 2;
    }
    else
    {
      if ( v5 < 4 )
      {
        if ( v5 > 1 )
        {
          if ( v5 == 2 )
          {
            v18 = *(_QWORD *)(v4 + 40);
            v19 = 12;
          }
          else
          {
            LODWORD(v18) = 3;
            v19 = 0;
          }
          return (_UNKNOWN **)RtlpLogHeapFailure(v19, a1, a2, v18, 0LL, 0LL);
        }
LABEL_48:
        v19 = 3;
        goto LABEL_49;
      }
      v19 = 14;
    }
LABEL_49:
    LODWORD(v18) = v5;
    return (_UNKNOWN **)RtlpLogHeapFailure(v19, a1, a2, v18, 0LL, 0LL);
  }
  return result;
}
