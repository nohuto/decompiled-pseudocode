/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x1800455F8
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x1800FFB8C (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1800A5AA0 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // r10
  _QWORD *v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // rbx
  __int64 *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 *v16; // rdx
  unsigned __int64 j; // rax
  __int64 *v18; // rax
  int v19; // r9d
  char v20; // al
  __int64 v21; // rax
  SIZE_T v22; // rdi
  SIZE_T v23; // rsi
  __int64 *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 *v28; // rdx
  unsigned __int64 v29; // r8
  unsigned __int64 m; // rax
  __int64 *v31; // rax
  int v32; // ecx
  char v33; // al
  SIZE_T v34; // rsi
  SIZE_T v35; // r14
  __int64 *v36; // r14
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 *v41; // rdx
  unsigned __int64 i; // rax
  __int64 *v43; // rax
  int v44; // r9d
  char v45; // al
  SIZE_T v46; // rsi
  SIZE_T v47; // r14
  __int64 *v48; // r14
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 *v52; // rdx
  unsigned __int64 v53; // r8
  unsigned __int64 k; // rax
  __int64 *v55; // rax
  int v56; // ecx
  char v57; // al
  SIZE_T v58; // rsi
  SIZE_T v59; // r14
  int v60; // [rsp+38h] [rbp-30h]

  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v6 = a3;
  v7 = a2 - v5;
  v8 = a2;
  if ( a2 - v5 != a2
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a2 - v5, a3);
    }
    if ( a4 )
    {
      v36 = *(__int64 **)(v8 + 24);
      v37 = v8 + 16;
      v38 = *(_QWORD *)(v8 + 16);
      v39 = *v36;
      v40 = *(_QWORD *)(v38 + 8);
      if ( *v36 == v40 && v39 == v37 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v41 = *(__int64 **)(a1 + 312);
        if ( v41 )
        {
          for ( i = *((unsigned int *)v41 + 2); ; i = *((unsigned int *)v43 + 2) )
          {
            if ( *(unsigned __int16 *)(v8 + 8) < i )
            {
              v44 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_71;
            }
            v43 = (__int64 *)*v41;
            if ( !*v41 )
              break;
            v41 = (__int64 *)*v41;
          }
          v44 = *((_DWORD *)v41 + 2) - 1;
LABEL_71:
          LOBYTE(v37) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v41, v37, v8 + 16, v44, *(unsigned __int16 *)(v8 + 8));
        }
        *v36 = v38;
        *(_QWORD *)(v38 + 8) = v36;
        if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
        {
          v45 = *(_BYTE *)(v8 + 10);
          if ( (v45 & 4) != 0 )
          {
            v46 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
            if ( (v45 & 2) != 0 && v46 > 4 )
              v46 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
            v47 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v46, 0xFEEEFEEE);
            if ( v47 != v46 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v8,
                (const void *)(v47 + v8 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v37, v40, v39, 0LL);
      }
      a4 = 0;
    }
    v12 = *(__int64 **)(v7 + 24);
    a3 = (_QWORD *)(v7 + 16);
    v13 = *(_QWORD *)(v7 + 16);
    v14 = *v12;
    v15 = *(_QWORD *)(v13 + 8);
    if ( *v12 == v15 && (_QWORD *)v14 == a3 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
      v16 = *(__int64 **)(a1 + 312);
      if ( v16 )
      {
        for ( j = *((unsigned int *)v16 + 2); ; j = *((unsigned int *)v18 + 2) )
        {
          if ( *(unsigned __int16 *)(v7 + 8) < j )
          {
            v19 = *(unsigned __int16 *)(v7 + 8);
            goto LABEL_20;
          }
          v18 = (__int64 *)*v16;
          if ( !*v16 )
            break;
          v16 = (__int64 *)*v16;
        }
        v19 = *((_DWORD *)v16 + 2) - 1;
LABEL_20:
        LOBYTE(a3) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v16, (_DWORD)a3, v7 + 16, v19, *(unsigned __int16 *)(v7 + 8));
      }
      *v12 = v13;
      *(_QWORD *)(v13 + 8) = v12;
      if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v20 = *(_BYTE *)(v7 + 10);
        if ( (v20 & 4) != 0 )
        {
          v22 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v20 & 2) != 0 && v22 > 4 )
            v22 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v23 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v22, 0xFEEEFEEE);
          if ( v23 != v22 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v23 + v7 + 32));
            RtlpBreakPointHeap();
          }
        }
        v21 = *(unsigned __int16 *)(v7 + 8);
        v8 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *v6 += v21;
        *(_WORD *)(v7 + 8) = *(_WORD *)v6;
        *(_WORD *)(v7 + 16LL * *v6 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)v6;
      }
      else
      {
        RtlpDeCommitFreeBlock(a1, v7, *(unsigned __int16 *)(v7 + 8), 1);
      }
    }
    else
    {
      RtlpLogHeapFailure(13, a1, (_DWORD)a3, v15, v14, 0LL);
    }
  }
  v10 = v8 + 16LL * *v6;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v60 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v10 + 8);
    if ( HIBYTE(v60) != ((unsigned __int8)v60 ^ (unsigned __int8)(BYTE1(v60) ^ BYTE2(v60))) )
      RtlpLogHeapFailure(3, a1, v10, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v10, a3);
    }
    if ( a4 )
    {
      v48 = *(__int64 **)(v8 + 24);
      v49 = *(_QWORD *)(v8 + 16);
      v50 = *v48;
      v51 = *(_QWORD *)(v49 + 8);
      if ( *v48 == v51 && v50 == v8 + 16 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v52 = *(__int64 **)(a1 + 312);
        if ( v52 )
        {
          v53 = *(unsigned __int16 *)(v8 + 8);
          for ( k = *((unsigned int *)v52 + 2); ; k = *((unsigned int *)v55 + 2) )
          {
            if ( v53 < k )
            {
              v56 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_97;
            }
            v55 = (__int64 *)*v52;
            if ( !*v52 )
              break;
            v52 = (__int64 *)*v52;
          }
          v56 = *((_DWORD *)v52 + 2) - 1;
LABEL_97:
          LOBYTE(v53) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v52, v53, v8 + 16, v56, *(unsigned __int16 *)(v8 + 8));
        }
        *v48 = v49;
        *(_QWORD *)(v49 + 8) = v48;
        if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
        {
          v57 = *(_BYTE *)(v8 + 10);
          if ( (v57 & 4) != 0 )
          {
            v58 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
            if ( (v57 & 2) != 0 && v58 > 4 )
              v58 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
            v59 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v58, 0xFEEEFEEE);
            if ( v59 != v58 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v8,
                (const void *)(v59 + v8 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(a1, v8, *(unsigned __int16 *)(v8 + 8), 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v8 + 16, v51, v50, 0LL);
      }
      a4 = 0;
    }
    v24 = *(__int64 **)(v10 + 24);
    v25 = *(_QWORD *)(v10 + 16);
    v26 = *v24;
    v27 = *(_QWORD *)(v25 + 8);
    if ( *v24 == v27 && v26 == v10 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v10 + 8);
      v28 = *(__int64 **)(a1 + 312);
      if ( v28 )
      {
        v29 = *(unsigned __int16 *)(v10 + 8);
        for ( m = *((unsigned int *)v28 + 2); ; m = *((unsigned int *)v31 + 2) )
        {
          if ( v29 < m )
          {
            v32 = *(unsigned __int16 *)(v10 + 8);
            goto LABEL_47;
          }
          v31 = (__int64 *)*v28;
          if ( !*v28 )
            break;
          v28 = (__int64 *)*v28;
        }
        v32 = *((_DWORD *)v28 + 2) - 1;
LABEL_47:
        LOBYTE(v29) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v28, v29, v10 + 16, v32, *(unsigned __int16 *)(v10 + 8));
      }
      *v24 = v25;
      *(_QWORD *)(v25 + 8) = v24;
      if ( (*(_BYTE *)(v10 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        v33 = *(_BYTE *)(v10 + 10);
        if ( (v33 & 4) != 0 )
        {
          v34 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
          if ( (v33 & 2) != 0 && v34 > 4 )
            v34 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
          v35 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v34, 0xFEEEFEEE);
          if ( v35 != v34 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v10,
              (const void *)(v10 + v35 + 32));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        *v6 += *(unsigned __int16 *)(v10 + 8);
        *(_WORD *)(v8 + 8) = *(_WORD *)v6;
        *(_WORD *)(v8 + 16LL * *v6 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)v6;
        return v8;
      }
      RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v10 + 16, v27, v26, 0LL);
    }
  }
  return v8;
}
