/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x180114F24
 * Callers:
 *     RtlpFreeHeap @ 0x1800397E0 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18003F320 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800440A4 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180044490 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180045758 (RtlpCoalesceFreeBlocks.c)
 *     RtlpExtendHeap @ 0x180045E78 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18004612C (RtlpFindAndCommitPages.c)
 *     RtlpCollectFreeBlocks @ 0x180046A44 (RtlpCollectFreeBlocks.c)
 *     RtlpPopulateListIndex @ 0x180047A34 (RtlpPopulateListIndex.c)
 *     RtlGetUserInfoHeap @ 0x180075EA0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x1800762D0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 *     RtlpCoalesceHeap @ 0x1800FE77C (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x180101F50 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1801028B0 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801071B0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x180121428 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpAnalyzeHeapFailure(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // r8d
  char result; // al
  int v6; // esi
  char v7; // al
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  __int16 v15; // cx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+48h] [rbp-10h]

  v3 = 0LL;
  v4 = 0;
  result = byte_1801843C8 != 0;
  if ( !byte_1801843C8 )
  {
    v6 = *(_DWORD *)(a1 + 124);
    if ( (v6 & *(_DWORD *)(a2 + 8)) != 0 )
      goto LABEL_34;
    v4 = 10;
    if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
      && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
    {
      goto LABEL_34;
    }
    v4 = 1;
    if ( *(_BYTE *)(a2 + 14) )
    {
      v3 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - *(unsigned __int8 *)(a2 + 14)) << 16);
      v19 = v3;
    }
    else
    {
      v3 = a1;
      v19 = a1;
    }
    if ( *(_DWORD *)(v3 + 16) != -1114130 )
      goto LABEL_34;
    v7 = *(_BYTE *)(a2 + 15);
    if ( v7 != 4 )
    {
      v4 = 2;
      if ( a2 < *(_QWORD *)(v3 + 48) || a2 >= *(_QWORD *)(v3 + 72) || *(_QWORD *)(v3 + 40) != a1 )
        goto LABEL_34;
    }
    v4 = 3;
    if ( v7 == 3 )
    {
      v8 = a2 + 16;
      v9 = *(_QWORD *)(a2 + 48);
      if ( (v9 & 0xFFF) != 0 )
        goto LABEL_34;
      if ( v9 < *(_QWORD *)(v3 + 48) )
        goto LABEL_34;
      if ( v9 + *(_QWORD *)(a2 + 56) > *(_QWORD *)(v3 + 72) )
        goto LABEL_34;
      v4 = 4;
      v10 = **(_QWORD **)(a2 + 24);
      if ( v10 != *(_QWORD *)(*(_QWORD *)v8 + 8LL) )
        goto LABEL_34;
      if ( v10 != v8 )
        goto LABEL_34;
      v4 = 5;
      v11 = **(_QWORD **)(a2 + 40);
      if ( v11 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v11 != a2 + 32 )
        goto LABEL_34;
    }
    else
    {
      v4 = 6;
      if ( (*(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12)) != *(_WORD *)(a2 + 8) )
        goto LABEL_34;
    }
    v4 = 7;
    v12 = *(unsigned __int16 *)(a1 + 140);
    if ( (_WORD)v12 == *(_WORD *)(a2 + 12) )
      goto LABEL_30;
    v13 = a2 - 16 * (v12 ^ *(unsigned __int16 *)(a2 + 12));
    if ( v6 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      LOWORD(v20) = v14;
      if ( (v14 & *(_DWORD *)(a1 + 124)) != 0 )
        v20 = *(_DWORD *)(a1 + 136) ^ v14;
      v15 = v20;
      v3 = v19;
      v4 = 7;
    }
    else
    {
      v15 = *(_WORD *)(v13 + 8);
    }
    if ( v15 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
    {
LABEL_30:
      v4 = 8;
      if ( (*(_BYTE *)(a2 + 10) & 1) != 0
        || (v16 = **(_QWORD **)(a2 + 24), v16 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v16 == a2 + 16 )
      {
        v4 = 9;
      }
    }
LABEL_34:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
      *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( v4 > 5 )
    {
      if ( v4 != 6 && v4 != 7 )
      {
        if ( v4 == 8 )
        {
          v17 = 13;
          goto LABEL_51;
        }
        if ( v4 != 10 )
        {
          v17 = 2;
          goto LABEL_51;
        }
      }
    }
    else
    {
      if ( v4 == 5 )
        goto LABEL_41;
      if ( v4 >= 2 )
      {
        if ( v4 == 2 )
        {
          v18 = *(_QWORD *)(v3 + 40);
          v17 = 12;
          return RtlpLogHeapFailure(v17, a1, a2, v18, 0LL, 0LL);
        }
        if ( v4 == 3 )
        {
          v17 = 0;
          goto LABEL_51;
        }
LABEL_41:
        v17 = 14;
LABEL_51:
        LODWORD(v18) = v4;
        return RtlpLogHeapFailure(v17, a1, a2, v18, 0LL, 0LL);
      }
    }
    v17 = 3;
    goto LABEL_51;
  }
  return result;
}
