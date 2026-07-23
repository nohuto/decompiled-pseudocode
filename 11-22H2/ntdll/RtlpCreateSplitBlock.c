/*
 * XREFs of RtlpCreateSplitBlock @ 0x180044490
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x1800440A4 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     RtlpFindEntry @ 0x1800448D0 (RtlpFindEntry.c)
 *     RtlpInsertFreeBlock @ 0x180044950 (RtlpInsertFreeBlock.c)
 *     RtlpHeapAddListEntry @ 0x180044ED4 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x18004913C (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1800A39F0 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1801069E8 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpCreateSplitBlock(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v7; // r13d
  unsigned __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // r8
  int v14; // ecx
  unsigned __int16 v15; // ax
  __int64 *v16; // rax
  _QWORD *v17; // rdi
  __int64 *v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 j; // rax
  __int64 *v21; // rax
  int v22; // r8d
  int v24; // eax
  __int64 *v25; // r14
  __int64 v26; // r8
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 *v30; // rdx
  unsigned __int64 k; // rax
  __int64 *v32; // rax
  int v33; // ecx
  unsigned __int64 v34; // r15
  _QWORD *v35; // rdi
  _QWORD *v36; // r8
  int v37; // ecx
  unsigned __int16 v38; // ax
  __int64 *v39; // rax
  unsigned __int64 m; // rax
  __int64 *v41; // rax
  int v42; // eax
  char v43; // al
  SIZE_T v44; // rbp
  SIZE_T v45; // r12
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rdi
  _QWORD *v49; // r8
  int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 *v53; // rax
  unsigned __int64 n; // rax
  __int64 *v55; // rax
  _DWORD *v56; // r8
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rdi
  _QWORD *Entry; // r8
  int v60; // ecx
  int v61; // eax
  unsigned __int16 v62; // ax
  __int64 *v63; // rax
  _QWORD *v64; // rdi
  __int64 *v65; // rdx
  unsigned __int64 i; // rax
  __int64 *v67; // rax
  int v68; // r8d
  int v69; // [rsp+20h] [rbp-48h]
  int v70; // [rsp+20h] [rbp-48h]
  int v71; // [rsp+38h] [rbp-30h]
  int v72; // [rsp+38h] [rbp-30h]
  int v73; // [rsp+38h] [rbp-30h]
  int v74; // [rsp+38h] [rbp-30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  if ( *(_QWORD *)(a2 + 40) == a2 )
  {
    LOBYTE(v10) = 0;
  }
  else
  {
    v10 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( v10 >= 0xFE )
      RtlpLogHeapFailure(3, *(_QWORD *)(a2 + 40), a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v10;
  v11 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = *(_WORD *)(a1 + 140) ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v56 = (_DWORD *)(a3 + 32);
          v57 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v57 )
          {
            if ( ((unsigned __int8)v56 & 4) != 0 )
            {
              --v57;
              *v56 = -17891602;
              v56 = (_DWORD *)(a3 + 36);
            }
            memset64(v56, 0xFEEEFEEEFEEEFEEEuLL, v57 >> 1);
            if ( (v57 & 1) != 0 )
              v56[v57 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v58 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          Entry = (_QWORD *)*v58;
        if ( v58 != Entry )
        {
          v60 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v60 )
            {
              v61 = *((_DWORD *)Entry - 2);
              v60 = *(_DWORD *)(a1 + 124);
              LOWORD(v74) = v61;
              if ( (v60 & v61) != 0 )
                v74 = *(_DWORD *)(a1 + 136) ^ v61;
              v62 = v74;
            }
            else
            {
              v62 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v62 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v58 != Entry );
        }
        v63 = (__int64 *)Entry[1];
        v64 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v63 == Entry )
        {
          *v64 = Entry;
          *(_QWORD *)(a3 + 24) = v63;
          *v63 = (__int64)v64;
          Entry[1] = v64;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v63, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v65 = *(__int64 **)(a1 + 312);
        if ( v65 )
        {
          for ( i = *((unsigned int *)v65 + 2); ; i = *((unsigned int *)v67 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v68 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_146;
            }
            v67 = (__int64 *)*v65;
            if ( !*v65 )
              break;
            v65 = (__int64 *)*v65;
          }
          v68 = *((_DWORD *)v65 + 2) - 1;
LABEL_146:
          v70 = v68;
          LOBYTE(v68) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v65, v68, a3 + 16, v70, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      *(_BYTE *)(a3 + 10) = 0;
      v12 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v13 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
      else
        v13 = (_QWORD *)*v12;
      if ( v12 != v13 )
      {
        v14 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v14 )
          {
            v24 = *((_DWORD *)v13 - 2);
            v14 = *(_DWORD *)(a1 + 124);
            LOWORD(v71) = v24;
            if ( (v14 & v24) != 0 )
              v71 = *(_DWORD *)(a1 + 136) ^ v24;
            v15 = v71;
          }
          else
          {
            v15 = *((_WORD *)v13 - 4);
          }
          if ( (unsigned __int16)a7 <= (unsigned __int64)v15 )
            break;
          v13 = (_QWORD *)*v13;
        }
        while ( v12 != v13 );
      }
      v16 = (__int64 *)v13[1];
      v17 = (_QWORD *)(a3 + 16);
      if ( (_QWORD *)*v16 == v13 )
      {
        *v17 = v13;
        *(_QWORD *)(a3 + 24) = v16;
        *v16 = (__int64)v17;
        v13[1] = v17;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)v13, 0, *v16, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
      v18 = *(__int64 **)(a1 + 312);
      if ( !v18 )
        goto LABEL_23;
      v19 = *(unsigned __int16 *)(a3 + 8);
      for ( j = *((unsigned int *)v18 + 2); v19 >= j; j = *((unsigned int *)v21 + 2) )
      {
        v21 = (__int64 *)*v18;
        if ( !*v18 )
          goto LABEL_31;
        v18 = (__int64 *)*v18;
      }
      goto LABEL_21;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7, a3);
    }
    v25 = *(__int64 **)(v11 + 24);
    v26 = v11 + 16;
    v27 = *(_QWORD *)(v11 + 16);
    v28 = *v25;
    v29 = *(_QWORD *)(v27 + 8);
    if ( *v25 == v29 && v28 == v26 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v11 + 8);
      v30 = *(__int64 **)(a1 + 312);
      if ( v30 )
      {
        for ( k = *((unsigned int *)v30 + 2); ; k = *((unsigned int *)v32 + 2) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < k )
          {
            v33 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_43;
          }
          v32 = (__int64 *)*v30;
          if ( !*v30 )
            break;
          v30 = (__int64 *)*v30;
        }
        v33 = *((_DWORD *)v30 + 2) - 1;
LABEL_43:
        LOBYTE(v26) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v30, v26, v11 + 16, v33, *(unsigned __int16 *)(v11 + 8));
      }
      *v25 = v27;
      *(_QWORD *)(v27 + 8) = v25;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1) )
      {
        if ( a5 )
        {
          v43 = *(_BYTE *)(v11 + 10);
          if ( (v43 & 4) != 0 )
          {
            v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v43 & 2) != 0 && v44 > 4 )
              v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v45 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v44, 0xFEEEFEEE);
            if ( v45 != v44 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v45 + v11 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v34 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v34 > 0xFF00 )
        {
          RtlpInsertFreeBlock(a1, a3);
          return 1;
        }
        *(_WORD *)(a3 + 8) = v34;
        *(_WORD *)(a3 + 16 * v34 + 12) = *(_WORD *)(a1 + 140) ^ v34;
        *(_BYTE *)(a3 + 15) = 0;
        if ( !a5 )
        {
          *(_BYTE *)(a3 + 10) = 0;
          v35 = (_QWORD *)(a1 + 336);
          if ( *(_QWORD *)(a1 + 312) )
            v36 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v34);
          else
            v36 = (_QWORD *)*v35;
          if ( v35 != v36 )
          {
            v37 = *(_DWORD *)(a1 + 124);
            do
            {
              if ( v37 )
              {
                v42 = *((_DWORD *)v36 - 2);
                v37 = *(_DWORD *)(a1 + 124);
                LOWORD(v72) = v42;
                if ( (v42 & v37) != 0 )
                  v72 = *(_DWORD *)(a1 + 136) ^ v42;
                v38 = v72;
              }
              else
              {
                v38 = *((_WORD *)v36 - 4);
              }
              if ( (unsigned __int16)v34 <= (unsigned __int64)v38 )
                break;
              v36 = (_QWORD *)*v36;
            }
            while ( v35 != v36 );
          }
          v39 = (__int64 *)v36[1];
          v17 = (_QWORD *)(a3 + 16);
          if ( (_QWORD *)*v39 == v36 )
          {
            *v17 = v36;
            *(_QWORD *)(a3 + 24) = v39;
            *v39 = (__int64)v17;
            v36[1] = v17;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, (_DWORD)v36, 0, *v39, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
          v18 = *(__int64 **)(a1 + 312);
          if ( v18 )
          {
            v19 = *(unsigned __int16 *)(a3 + 8);
            for ( m = *((unsigned int *)v18 + 2); v19 >= m; m = *((unsigned int *)v41 + 2) )
            {
              v41 = (__int64 *)*v18;
              if ( !*v18 )
                goto LABEL_31;
              v18 = (__int64 *)*v18;
            }
            goto LABEL_21;
          }
LABEL_23:
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
            *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          return 1;
        }
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
        {
          v46 = (_DWORD *)(a3 + 32);
          v47 = (16 * (unsigned __int64)(unsigned __int16)v34 - 32) >> 2;
          if ( v47 )
          {
            if ( ((unsigned __int8)v46 & 4) != 0 )
            {
              --v47;
              *v46 = -17891602;
              v46 = (_DWORD *)(a3 + 36);
            }
            memset64(v46, 0xFEEEFEEEFEEEFEEEuLL, v47 >> 1);
            if ( (v47 & 1) != 0 )
              v46[v47 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v48 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v49 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v34);
        else
          v49 = (_QWORD *)*v48;
        if ( v48 != v49 )
        {
          v50 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v50 )
            {
              v51 = *((_DWORD *)v49 - 2);
              v50 = *(_DWORD *)(a1 + 124);
              LOWORD(v73) = v51;
              if ( (v51 & v50) != 0 )
                v73 = *(_DWORD *)(a1 + 136) ^ v51;
              v52 = v73;
            }
            else
            {
              v52 = *((_WORD *)v49 - 4);
            }
            if ( (unsigned __int16)v34 <= (unsigned __int64)v52 )
              break;
            v49 = (_QWORD *)*v49;
          }
          while ( v48 != v49 );
        }
        v53 = (__int64 *)v49[1];
        v17 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v53 == v49 )
        {
          *v17 = v49;
          *(_QWORD *)(a3 + 24) = v53;
          *v53 = (__int64)v17;
          v49[1] = v17;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v49, 0, *v53, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v18 = *(__int64 **)(a1 + 312);
        if ( !v18 )
          goto LABEL_23;
        v19 = *(unsigned __int16 *)(a3 + 8);
        for ( n = *((unsigned int *)v18 + 2); v19 >= n; n = *((unsigned int *)v55 + 2) )
        {
          v55 = (__int64 *)*v18;
          if ( !*v18 )
          {
LABEL_31:
            v22 = *((_DWORD *)v18 + 2) - 1;
            goto LABEL_22;
          }
          v18 = (__int64 *)*v18;
        }
LABEL_21:
        v22 = v19;
LABEL_22:
        v69 = v22;
        LOBYTE(v22) = 1;
        RtlpHeapAddListEntry(a1, (_DWORD)v18, v22, (_DWORD)v17, v69, v19);
        goto LABEL_23;
      }
      RtlpDeCommitFreeBlock(a1);
    }
    else
    {
      RtlpLogHeapFailure(13, a1, v26, v29, v28, 0LL);
    }
    if ( v7 )
      return 0;
    v7 = 1;
  }
}
