/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x180023750
 * Callers:
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x18002E790 (RtlpHeapRemoveListEntry.c)
 *     RtlCompareMemoryUlong @ 0x1800A8BB0 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x180106C88 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // r10
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // rdi
  __int64 *v12; // r14
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 j; // rax
  __int64 *v19; // rax
  int v20; // ecx
  char v21; // al
  __int64 v22; // rax
  SIZE_T v23; // rbx
  SIZE_T v24; // rbp
  __int64 *v25; // r14
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 *v30; // rdx
  unsigned __int64 m; // rax
  __int64 *v32; // rax
  int v33; // ecx
  char v34; // al
  SIZE_T v35; // rbp
  SIZE_T v36; // r14
  __int64 *v37; // r14
  __int64 v38; // r8
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 *v42; // rdx
  unsigned __int64 i; // rax
  __int64 *v44; // rax
  int v45; // r9d
  char v46; // al
  SIZE_T v47; // rbp
  SIZE_T v48; // r14
  __int64 *v49; // r14
  __int64 v50; // r8
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 *v54; // rdx
  unsigned __int64 k; // rax
  __int64 *v56; // rax
  int v57; // ecx
  char v58; // al
  SIZE_T v59; // rbp
  SIZE_T v60; // r14
  int v61; // [rsp+38h] [rbp-30h]

  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v7 = a2 - v5;
  v8 = a2;
  if ( a2 - v5 != a2
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v7);
    }
    if ( a4 )
    {
      v37 = *(__int64 **)(v8 + 24);
      v38 = v8 + 16;
      v39 = *(_QWORD *)(v8 + 16);
      v40 = *v37;
      v41 = *(_QWORD *)(v39 + 8);
      if ( *v37 == v41 && v40 == v38 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v42 = *(__int64 **)(a1 + 312);
        if ( v42 )
        {
          for ( i = *((unsigned int *)v42 + 2); ; i = *((unsigned int *)v44 + 2) )
          {
            if ( *(unsigned __int16 *)(v8 + 8) < i )
            {
              v45 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_71;
            }
            v44 = (__int64 *)*v42;
            if ( !*v42 )
              break;
            v42 = (__int64 *)*v42;
          }
          v45 = *((_DWORD *)v42 + 2) - 1;
LABEL_71:
          LOBYTE(v38) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v42, v38, v8 + 16, v45, *(unsigned __int16 *)(v8 + 8));
        }
        *v37 = v39;
        *(_QWORD *)(v39 + 8) = v37;
        if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || RtlpCommitBlock((char *)a1, v8) )
        {
          v46 = *(_BYTE *)(v8 + 10);
          if ( (v46 & 4) != 0 )
          {
            v47 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
            if ( (v46 & 2) != 0 && v47 > 4 )
              v47 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
            v48 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v47, 0xFEEEFEEE);
            if ( v48 != v47 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v8,
                (const void *)(v48 + v8 + 32));
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
        RtlpLogHeapFailure(13, a1, v38, v41, v40, 0LL);
      }
      a4 = 0;
    }
    v12 = *(__int64 **)(v7 + 24);
    v13 = v7 + 16;
    v14 = *(_QWORD *)(v7 + 16);
    v15 = *v12;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v12 == v16 && v15 == v13 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
      v17 = *(__int64 **)(a1 + 312);
      if ( v17 )
      {
        for ( j = *((unsigned int *)v17 + 2); ; j = *((unsigned int *)v19 + 2) )
        {
          if ( *(unsigned __int16 *)(v7 + 8) < j )
          {
            v20 = *(unsigned __int16 *)(v7 + 8);
            goto LABEL_20;
          }
          v19 = (__int64 *)*v17;
          if ( !*v17 )
            break;
          v17 = (__int64 *)*v17;
        }
        v20 = *((_DWORD *)v17 + 2) - 1;
LABEL_20:
        LOBYTE(v13) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v17, v13, v7 + 16, v20, *(unsigned __int16 *)(v7 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || RtlpCommitBlock((char *)a1, v7) )
      {
        v21 = *(_BYTE *)(v7 + 10);
        if ( (v21 & 4) != 0 )
        {
          v23 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v21 & 2) != 0 && v23 > 4 )
            v23 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v24 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v23, 0xFEEEFEEE);
          if ( v24 != v23 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v24 + v7 + 32));
            RtlpBreakPointHeap();
          }
        }
        v22 = *(unsigned __int16 *)(v7 + 8);
        v8 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *a3 += v22;
        *(_WORD *)(v7 + 8) = *(_WORD *)a3;
        *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
      }
      else
      {
        RtlpDeCommitFreeBlock(a1, v7, *(unsigned __int16 *)(v7 + 8), 1);
      }
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v13, v16, v15, 0LL);
    }
  }
  v10 = v8 + 16LL * *a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v61 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v61) != ((unsigned __int8)v61 ^ (unsigned __int8)(BYTE1(v61) ^ BYTE2(v61))) )
      RtlpLogHeapFailure(3, a1, v10, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v10);
    }
    if ( a4 )
    {
      v49 = *(__int64 **)(v8 + 24);
      v50 = v8 + 16;
      v51 = *(_QWORD *)(v8 + 16);
      v52 = *v49;
      v53 = *(_QWORD *)(v51 + 8);
      if ( *v49 == v53 && v52 == v50 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v8 + 8);
        v54 = *(__int64 **)(a1 + 312);
        if ( v54 )
        {
          for ( k = *((unsigned int *)v54 + 2); ; k = *((unsigned int *)v56 + 2) )
          {
            if ( *(unsigned __int16 *)(v8 + 8) < k )
            {
              v57 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_97;
            }
            v56 = (__int64 *)*v54;
            if ( !*v54 )
              break;
            v54 = (__int64 *)*v54;
          }
          v57 = *((_DWORD *)v54 + 2) - 1;
LABEL_97:
          LOBYTE(v50) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v54, v50, v8 + 16, v57, *(unsigned __int16 *)(v8 + 8));
        }
        *v49 = v51;
        *(_QWORD *)(v51 + 8) = v49;
        if ( (*(_BYTE *)(v8 + 10) & 8) == 0 || RtlpCommitBlock((char *)a1, v8) )
        {
          v58 = *(_BYTE *)(v8 + 10);
          if ( (v58 & 4) != 0 )
          {
            v59 = 16LL * *(unsigned __int16 *)(v8 + 8) - 32;
            if ( (v58 & 2) != 0 && v59 > 4 )
              v59 = 16LL * *(unsigned __int16 *)(v8 + 8) - 36;
            v60 = RtlCompareMemoryUlong((PVOID)(v8 + 32), v59, 0xFEEEFEEE);
            if ( v60 != v59 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v8,
                (const void *)(v60 + v8 + 32));
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
        RtlpLogHeapFailure(13, a1, v50, v53, v52, 0LL);
      }
      a4 = 0;
    }
    v25 = *(__int64 **)(v10 + 24);
    v26 = v10 + 16;
    v27 = *(_QWORD *)(v10 + 16);
    v28 = *v25;
    v29 = *(_QWORD *)(v27 + 8);
    if ( *v25 == v29 && v28 == v26 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v10 + 8);
      v30 = *(__int64 **)(a1 + 312);
      if ( v30 )
      {
        for ( m = *((unsigned int *)v30 + 2); ; m = *((unsigned int *)v32 + 2) )
        {
          if ( *(unsigned __int16 *)(v10 + 8) < m )
          {
            v33 = *(unsigned __int16 *)(v10 + 8);
            goto LABEL_47;
          }
          v32 = (__int64 *)*v30;
          if ( !*v30 )
            break;
          v30 = (__int64 *)*v30;
        }
        v33 = *((_DWORD *)v30 + 2) - 1;
LABEL_47:
        LOBYTE(v26) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v30, v26, v10 + 16, v33, *(unsigned __int16 *)(v10 + 8));
      }
      *v25 = v27;
      *(_QWORD *)(v27 + 8) = v25;
      if ( (*(_BYTE *)(v10 + 10) & 8) == 0 || RtlpCommitBlock((char *)a1, v10) )
      {
        v34 = *(_BYTE *)(v10 + 10);
        if ( (v34 & 4) != 0 )
        {
          v35 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
          if ( (v34 & 2) != 0 && v35 > 4 )
            v35 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
          v36 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v35, 0xFEEEFEEE);
          if ( v36 != v35 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v10,
              (const void *)(v10 + v36 + 32));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v8 + 10) = 0;
        *(_BYTE *)(v8 + 15) = 0;
        *a3 += *(unsigned __int16 *)(v10 + 8);
        *(_WORD *)(v8 + 8) = *(_WORD *)a3;
        *(_WORD *)(v8 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
        return v8;
      }
      RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v26, v29, v28, 0LL);
    }
  }
  return v8;
}
