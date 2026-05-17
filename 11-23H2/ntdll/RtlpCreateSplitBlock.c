/*
 * XREFs of RtlpCreateSplitBlock @ 0x180044330
 * Callers:
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180043F44 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     RtlpFindEntry @ 0x180044770 (RtlpFindEntry.c)
 *     RtlpInsertFreeBlock @ 0x1800447F0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapAddListEntry @ 0x180044D74 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x1800A5AA0 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163D4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x1801229F0 (RtlpLogHeapFailure.c)
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
  __int64 v43; // r9
  char v44; // al
  unsigned __int64 v45; // rbp
  __int64 v46; // r12
  _DWORD *v47; // r8
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rdi
  _QWORD *v50; // r8
  int v51; // ecx
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 *v54; // rax
  unsigned __int64 n; // rax
  __int64 *v56; // rax
  _DWORD *v57; // r8
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rdi
  _QWORD *Entry; // r8
  int v61; // ecx
  int v62; // eax
  unsigned __int16 v63; // ax
  __int64 *v64; // rax
  _QWORD *v65; // rdi
  __int64 *v66; // rdx
  unsigned __int64 i; // rax
  __int64 *v68; // rax
  int v69; // r8d
  int v70; // [rsp+20h] [rbp-48h]
  int v71; // [rsp+20h] [rbp-48h]
  int v72; // [rsp+38h] [rbp-30h]
  int v73; // [rsp+38h] [rbp-30h]
  int v74; // [rsp+38h] [rbp-30h]
  int v75; // [rsp+38h] [rbp-30h]

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
          v57 = (_DWORD *)(a3 + 32);
          v58 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
          if ( v58 )
          {
            if ( ((unsigned __int8)v57 & 4) != 0 )
            {
              --v58;
              *v57 = -17891602;
              v57 = (_DWORD *)(a3 + 36);
            }
            memset64(v57, 0xFEEEFEEEFEEEFEEEuLL, v58 >> 1);
            if ( (v58 & 1) != 0 )
              v57[v58 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v59 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          Entry = (_QWORD *)*v59;
        if ( v59 != Entry )
        {
          v61 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v61 )
            {
              v62 = *((_DWORD *)Entry - 2);
              v61 = *(_DWORD *)(a1 + 124);
              LOWORD(v75) = v62;
              if ( (v61 & v62) != 0 )
                v75 = *(_DWORD *)(a1 + 136) ^ v62;
              v63 = v75;
            }
            else
            {
              v63 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v63 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v59 != Entry );
        }
        v64 = (__int64 *)Entry[1];
        v65 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v64 == Entry )
        {
          *v65 = Entry;
          *(_QWORD *)(a3 + 24) = v64;
          *v64 = (__int64)v65;
          Entry[1] = v65;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v64, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v66 = *(__int64 **)(a1 + 312);
        if ( v66 )
        {
          for ( i = *((unsigned int *)v66 + 2); ; i = *((unsigned int *)v68 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < i )
            {
              v69 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_146;
            }
            v68 = (__int64 *)*v66;
            if ( !*v66 )
              break;
            v66 = (__int64 *)*v66;
          }
          v69 = *((_DWORD *)v66 + 2) - 1;
LABEL_146:
          v71 = v69;
          LOBYTE(v69) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v66, v69, a3 + 16, v71, *(unsigned __int16 *)(a3 + 8));
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
            LOWORD(v72) = v24;
            if ( (v14 & v24) != 0 )
              v72 = *(_DWORD *)(a1 + 136) ^ v24;
            v15 = v72;
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
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, a3 + 16 * a7) )
      {
        if ( a5 )
        {
          v44 = *(_BYTE *)(v11 + 10);
          if ( (v44 & 4) != 0 )
          {
            v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v44 & 2) != 0 && v45 > 4 )
              v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v46 = RtlCompareMemoryUlong(v11 + 32, v45, 4277075694LL);
            if ( v46 != v45 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v46 + v11 + 32));
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
                LOWORD(v73) = v42;
                if ( (v42 & v37) != 0 )
                  v73 = *(_DWORD *)(a1 + 136) ^ v42;
                v38 = v73;
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
          v47 = (_DWORD *)(a3 + 32);
          v48 = (16 * (unsigned __int64)(unsigned __int16)v34 - 32) >> 2;
          if ( v48 )
          {
            if ( ((unsigned __int8)v47 & 4) != 0 )
            {
              --v48;
              *v47 = -17891602;
              v47 = (_DWORD *)(a3 + 36);
            }
            memset64(v47, 0xFEEEFEEEFEEEFEEEuLL, v48 >> 1);
            if ( (v48 & 1) != 0 )
              v47[v48 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v49 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v50 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v34);
        else
          v50 = (_QWORD *)*v49;
        if ( v49 != v50 )
        {
          v51 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v51 )
            {
              v52 = *((_DWORD *)v50 - 2);
              v51 = *(_DWORD *)(a1 + 124);
              LOWORD(v74) = v52;
              if ( (v52 & v51) != 0 )
                v74 = *(_DWORD *)(a1 + 136) ^ v52;
              v53 = v74;
            }
            else
            {
              v53 = *((_WORD *)v50 - 4);
            }
            if ( (unsigned __int16)v34 <= (unsigned __int64)v53 )
              break;
            v50 = (_QWORD *)*v50;
          }
          while ( v49 != v50 );
        }
        v54 = (__int64 *)v50[1];
        v17 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v54 == v50 )
        {
          *v17 = v50;
          *(_QWORD *)(a3 + 24) = v54;
          *v54 = (__int64)v17;
          v50[1] = v17;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v50, 0, *v54, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v18 = *(__int64 **)(a1 + 312);
        if ( !v18 )
          goto LABEL_23;
        v19 = *(unsigned __int16 *)(a3 + 8);
        for ( n = *((unsigned int *)v18 + 2); v19 >= n; n = *((unsigned int *)v56 + 2) )
        {
          v56 = (__int64 *)*v18;
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
        v70 = v22;
        LOBYTE(v22) = 1;
        RtlpHeapAddListEntry(a1, (_DWORD)v18, v22, (_DWORD)v17, v70, v19);
        goto LABEL_23;
      }
      LOBYTE(v43) = 1;
      RtlpDeCommitFreeBlock(a1, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), v43);
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
