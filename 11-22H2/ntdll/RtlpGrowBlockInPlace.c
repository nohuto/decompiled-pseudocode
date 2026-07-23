/*
 * XREFs of RtlpGrowBlockInPlace @ 0x1800440A4
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpCreateSplitBlock @ 0x180044490 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x18004913C (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlpZeroBlockFromOffset @ 0x18007C980 (RtlpZeroBlockFromOffset.c)
 *     RtlCompareMemoryUlong @ 0x1800A39F0 (RtlCompareMemoryUlong.c)
 *     RtlpUpdateTagEntry @ 0x18010002C (RtlpUpdateTagEntry.c)
 *     RtlpBreakPointHeap @ 0x1801069E8 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpGrowBlockInPlace(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 *v12; // r14
  unsigned __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 i; // rax
  __int64 *v19; // rax
  int v20; // r9d
  char v21; // al
  char v22; // r9
  unsigned __int16 v23; // dx
  char v24; // cl
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  char result; // al
  SIZE_T v31; // rbp
  SIZE_T v32; // r14
  __int64 v33; // rdx
  int v34; // eax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // [rsp+48h] [rbp-40h]
  char v39; // [rsp+90h] [rbp+8h]
  unsigned __int64 v40; // [rsp+A0h] [rbp+18h]
  char v41; // [rsp+B0h] [rbp+28h]

  v6 = a5;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v39 = *(_BYTE *)(a3 + 10);
  v10 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v10, a3);
  }
  v11 = *(unsigned __int16 *)(v10 + 8);
  v40 = v11 + *(unsigned __int16 *)(a3 + 8);
  if ( v40 < a5 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 0;
  }
  v12 = *(__int64 **)(v10 + 24);
  v13 = v10 + 16;
  v14 = *(_QWORD *)(v10 + 16);
  v15 = *v12;
  v16 = *(_QWORD *)(v14 + 8);
  if ( *v12 != v16 || v15 != v13 )
  {
    RtlpLogHeapFailure(13, a1, v13, v16, v15, 0LL);
    return 0;
  }
  *(_QWORD *)(a1 + 192) -= v11;
  v17 = *(__int64 **)(a1 + 312);
  if ( v17 )
  {
    for ( i = *((unsigned int *)v17 + 2); ; i = *((unsigned int *)v19 + 2) )
    {
      if ( *(unsigned __int16 *)(v10 + 8) < i )
      {
        v20 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_15;
      }
      v19 = (__int64 *)*v17;
      if ( !*v17 )
        break;
      v17 = (__int64 *)*v17;
    }
    v20 = *((_DWORD *)v17 + 2) - 1;
LABEL_15:
    LOBYTE(v13) = 1;
    RtlpHeapRemoveListEntry(a1, (_DWORD)v17, v13, v10 + 16, v20, *(unsigned __int16 *)(v10 + 8));
  }
  *v12 = v14;
  *(_QWORD *)(v14 + 8) = v12;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1) )
  {
    RtlpDeCommitFreeBlock(a1);
    return 0;
  }
  v21 = *(_BYTE *)(v10 + 10);
  if ( (v21 & 4) != 0 )
  {
    v31 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v21 & 2) != 0 && v31 > 4 )
      v31 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v32 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v31, 0xFEEEFEEE);
    if ( v32 != v31 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v32 + v10 + 32));
      RtlpBreakPointHeap();
    }
  }
  v22 = *(_BYTE *)(v10 + 10);
  v23 = *(_WORD *)(a3 + 8);
  v24 = *(_BYTE *)(a3 + 15);
  v41 = v22;
  if ( v24 == 5 )
  {
    v25 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v24 & 0x40) != 0 )
  {
    v25 = *(unsigned __int16 *)(a3 + 16LL * (v24 & 0x3F) + 12);
  }
  else if ( (v24 & 0x3F) == 0x3F )
  {
    if ( v24 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v34 = *(_DWORD *)(a3 + 8);
        LOWORD(v38) = v34;
        if ( (v34 & *(_DWORD *)(a1 + 124)) != 0 )
          v38 = *(_DWORD *)(a1 + 136) ^ v34;
        v23 = v38;
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a3 + 8) ^ (a3 >> 4)) )
        v33 = 0LL;
      else
        v33 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)(a3 >> 4)) >> 12));
      v23 = *(_WORD *)(v33 + 36);
    }
    v25 = *(_QWORD *)(a3 + 16LL * v23);
  }
  else
  {
    v25 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v26 = 16LL * *(unsigned __int16 *)(a3 + 8) - v25;
  v27 = v40 - v6;
  if ( v40 - v6 <= 2 )
    v6 = v40;
  v28 = 0LL;
  if ( v27 > 2 )
    v28 = v27;
  if ( (v39 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_28;
    *(_WORD *)(a3 + 16 * v6 - 14) = RtlpUpdateTagEntry(
                                      a1,
                                      *(unsigned __int16 *)(a3 + 16 * v6 - 14),
                                      *(unsigned __int16 *)(a3 + 8),
                                      v6,
                                      4);
  }
  else
  {
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_28;
    *(_BYTE *)(a3 + 11) = RtlpUpdateTagEntry(a1, *(unsigned __int8 *)(a3 + 11), *(unsigned __int16 *)(a3 + 8), v6, 4);
  }
  v22 = v41;
LABEL_28:
  *(_WORD *)(a3 + 8) = v6;
  v29 = 16 * v6 - a4;
  if ( v28 )
  {
    if ( v29 >= 0x3F )
    {
      *(_QWORD *)(a3 + 16 * v6) = v29;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v29;
    }
    RtlpCreateSplitBlock(a1, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v6, v28);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v22;
    if ( v29 >= 0x3F )
    {
      *(_QWORD *)(16 * v6 + a3) = v29;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v29;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a3 + 8);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 < v26 )
      v26 = a4;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v26);
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v35 = v26 & 3;
    if ( (v26 & 3) != 0 )
      v35 = 4 - v35;
    if ( a4 > v35 + v26 && ((a4 - v35 - v26) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v36 = ((a4 - v35 - v26) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v37 = v35 + v26 + a3 + 16;
      if ( v36 )
      {
        if ( (v37 & 4) == 0 )
          goto LABEL_83;
        *(_DWORD *)v37 = -1163005939;
        if ( --v36 )
        {
          v37 += 4LL;
LABEL_83:
          memset64((void *)v37, 0xBAADF00DBAADF00DuLL, v36 >> 1);
          if ( (v36 & 1) != 0 )
            *(_DWORD *)(v37 + 4 * v36 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_34:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    *(__m128i *)(a3 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (a2 >> 4) & 0xE0;
  return result;
}
