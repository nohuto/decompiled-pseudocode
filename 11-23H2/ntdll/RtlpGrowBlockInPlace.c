/*
 * XREFs of RtlpGrowBlockInPlace @ 0x180043F44
 * Callers:
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpCreateSplitBlock @ 0x180044330 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlpZeroBlockFromOffset @ 0x18007CFF0 (RtlpZeroBlockFromOffset.c)
 *     RtlCompareMemoryUlong @ 0x1800A5AA0 (RtlCompareMemoryUlong.c)
 *     RtlpUpdateTagEntry @ 0x18010143C (RtlpUpdateTagEntry.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163D4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x1801229F0 (RtlpLogHeapFailure.c)
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
  unsigned __int16 v22; // dx
  char v23; // cl
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 *v30; // r8
  int v31; // eax
  int v32; // edx
  char result; // al
  unsigned __int64 v34; // rbp
  __int64 v35; // r14
  __int64 v36; // rdx
  int v37; // eax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  int v41; // [rsp+48h] [rbp-40h]
  char v42; // [rsp+90h] [rbp+8h]
  unsigned __int64 v43; // [rsp+A0h] [rbp+18h]
  char v44; // [rsp+B0h] [rbp+28h]

  v6 = a5;
  if ( a5 > *(unsigned int *)(a1 + 148) )
    return 0;
  v42 = *(_BYTE *)(a3 + 10);
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
  v43 = v11 + *(unsigned __int16 *)(a3 + 8);
  if ( v43 < a5 )
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
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)RtlpCommitBlock(a1, v10) )
  {
    LOBYTE(v16) = 1;
    RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), v16);
    return 0;
  }
  v21 = *(_BYTE *)(v10 + 10);
  if ( (v21 & 4) != 0 )
  {
    v34 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v21 & 2) != 0 && v34 > 4 )
      v34 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v35 = RtlCompareMemoryUlong(v10 + 32, v34, 4277075694LL);
    if ( v35 != v34 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v35 + v10 + 32));
      RtlpBreakPointHeap();
    }
  }
  LOBYTE(v16) = *(_BYTE *)(v10 + 10);
  v22 = *(_WORD *)(a3 + 8);
  v23 = *(_BYTE *)(a3 + 15);
  v44 = v16;
  if ( v23 == 5 )
  {
    v24 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
  }
  else if ( (v23 & 0x40) != 0 )
  {
    v24 = *(unsigned __int16 *)(a3 + 16LL * (v23 & 0x3F) + 12);
  }
  else if ( (v23 & 0x3F) == 0x3F )
  {
    if ( v23 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v37 = *(_DWORD *)(a3 + 8);
        LOWORD(v41) = v37;
        if ( (v37 & *(_DWORD *)(a1 + 124)) != 0 )
          v41 = *(_DWORD *)(a1 + 136) ^ v37;
        v22 = v41;
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(a3 + 8) ^ (a3 >> 4)) )
        v36 = 0LL;
      else
        v36 = *(_QWORD *)(a3
                        - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(a3 + 8) ^ (unsigned int)(a3 >> 4)) >> 12));
      v22 = *(_WORD *)(v36 + 36);
    }
    v24 = *(_QWORD *)(a3 + 16LL * v22);
  }
  else
  {
    v24 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v25 = 16LL * *(unsigned __int16 *)(a3 + 8) - v24;
  v26 = v43 - v6;
  if ( v43 - v6 <= 2 )
    v6 = v43;
  v27 = 0LL;
  if ( v26 > 2 )
    v27 = v26;
  if ( (v42 & 2) != 0 )
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
  LOBYTE(v16) = v44;
LABEL_28:
  *(_WORD *)(a3 + 8) = v6;
  v28 = 16 * v6;
  v29 = 16 * v6 - a4;
  if ( v27 )
  {
    v30 = (unsigned __int64 *)(a3 + v28);
    if ( v29 >= 0x3F )
    {
      *v30 = v29;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v29;
    }
    v31 = *(unsigned __int8 *)(a3 + 14);
    if ( (_BYTE)v31 )
      v32 = (a3 & 0xFFFF0000) - (v31 << 16) + 0x10000;
    else
      v32 = a1;
    RtlpCreateSplitBlock(a1, v32, (_DWORD)v30, v16, (*(_DWORD *)(a1 + 112) & 0x40) != 0, v6, v27);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v16;
    if ( v29 >= 0x3F )
    {
      *(_QWORD *)(v28 + a3) = v29;
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
    if ( a4 < v25 )
      v25 = a4;
    RtlpZeroBlockFromOffset(a1, a3 + 16, v25);
    goto LABEL_36;
  }
  if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
  {
    v38 = v25 & 3;
    if ( (v25 & 3) != 0 )
      v38 = 4 - v38;
    if ( a4 > v38 + v25 && ((a4 - v38 - v25) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      v39 = ((a4 - v38 - v25) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v40 = v38 + v25 + a3 + 16;
      if ( v39 )
      {
        if ( (v40 & 4) == 0 )
          goto LABEL_86;
        *(_DWORD *)v40 = -1163005939;
        if ( --v39 )
        {
          v40 += 4LL;
LABEL_86:
          memset64((void *)v40, 0xBAADF00DBAADF00DuLL, v39 >> 1);
          if ( (v39 & 1) != 0 )
            *(_DWORD *)(v40 + 4 * v39 - 4) = -1163005939;
        }
      }
    }
  }
LABEL_36:
  if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    *(__m128i *)(a3 + a4 + 16) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (a2 >> 4) & 0xE0;
  return result;
}
