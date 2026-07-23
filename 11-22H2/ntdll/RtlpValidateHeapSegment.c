/*
 * XREFs of RtlpValidateHeapSegment @ 0x1801071B0
 * Callers:
 *     RtlpValidateHeap @ 0x180106A10 (RtlpValidateHeap.c)
 * Callees:
 *     RtlpFindEntry @ 0x1800448D0 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x180044ED4 (RtlpHeapAddListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1800450BC (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x18004691C (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x18004913C (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180053A70 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x180076534 (RtlpGetExtraStuffPointer.c)
 *     RtlCompareMemoryUlong @ 0x1800A39F0 (RtlCompareMemoryUlong.c)
 *     RtlpCheckBusyBlockTail @ 0x180102678 (RtlpCheckBusyBlockTail.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 */

char __fastcall RtlpValidateHeapSegment(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *Entry,
        _DWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        _QWORD *a7,
        __int64 a8)
{
  _PEB_LDR_DATA *v8; // r10
  _DWORD *v9; // r14
  bool v10; // cf
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  __int64 v13; // r12
  unsigned __int64 i; // rbx
  unsigned __int8 v17; // dl
  __int64 v18; // r15
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // cx
  char v21; // al
  bool v22; // zf
  SIZE_T v23; // rbp
  __int64 *v24; // r14
  _QWORD *v25; // r15
  __int64 v26; // rbp
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rdx
  unsigned __int64 j; // rax
  __int64 v31; // rax
  unsigned int v32; // ecx
  char v33; // al
  unsigned __int64 v34; // rbp
  _QWORD *v35; // r14
  int v36; // ecx
  int v37; // eax
  unsigned __int16 v38; // ax
  __int64 *v39; // rax
  __int64 v40; // rdx
  unsigned __int64 k; // rax
  __int64 v42; // rax
  int v43; // r8d
  SIZE_T v44; // r14
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  int v49; // eax
  int v51; // [rsp+38h] [rbp-40h]
  unsigned int v52; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = a4;
  v10 = a2 < *(_QWORD *)(a2 + 72);
  v11 = 0;
  v52 = 0;
  v12 = 0;
  LOWORD(v13) = 0;
  for ( i = a2; ; v10 = i < *(_QWORD *)(a2 + 72) )
  {
    if ( !v10 )
    {
      if ( *(_DWORD *)(a2 + 80) != v11 )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap Segment at %p contains invalid NumberOfUnCommittedPages (%x != %x)\n",
          a2,
          *(unsigned int *)(a2 + 80),
          v11);
        return 0;
      }
      if ( *(_DWORD *)(a2 + 84) != v12 )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap Segment at %p contains invalid NumberOfUnCommittedRanges (%x != %x)\n",
          a2,
          *(unsigned int *)(a2 + 84),
          v12);
        return 0;
      }
      return 1;
    }
    *a6 = i;
    if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
    {
      *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i + 11) != (*(_BYTE *)(i + 8) ^ (unsigned __int8)(*(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, i, Entry);
        v8 = 0LL;
      }
    }
    if ( (_WORD)v13 != (*(_WORD *)(a1 + 140) ^ *(_WORD *)(i + 12)) )
      break;
    v13 = *(unsigned __int16 *)(i + 8);
    v17 = *(_BYTE *)(i + 10);
    v18 = 16 * v13;
    if ( (v17 & 1) != 0 )
    {
      Entry = a7;
      if ( a7 )
      {
        v19 = (v17 & 2) != 0 ? *(_WORD *)(RtlpGetExtraStuffPointer(i) + 2) : *(unsigned __int8 *)(i + 11);
        if ( v19 )
        {
          if ( (v19 & 0x8000u) == 0 )
          {
            if ( (v19 & 0x800) == 0 && v19 < *(_WORD *)(a1 + 224) )
              Entry[v19] += v13;
          }
          else
          {
            v20 = v19 & 0x7FFF;
            if ( v20 < 0x81u )
              *(_QWORD *)(a8 + 8LL * v20) += v13;
          }
        }
      }
      if ( (*(_BYTE *)(i + 10) & 4) != 0 )
      {
        v21 = RtlpCheckBusyBlockTail(a1, i);
        v8 = 0LL;
        if ( !v21 )
        {
          v22 = *(_DWORD *)(a1 + 124) == 0;
          goto LABEL_118;
        }
      }
    }
    else
    {
      if ( ((v17 >> 2) & ((*(_BYTE *)(a1 + 112) & 0x40) != 0)) != 0 )
      {
        v23 = v18 - 32;
        if ( (v17 & 2) != 0 && v23 > 4 )
          v23 = v18 - 36;
        if ( (v17 & 8) != 0 )
        {
          v24 = *(__int64 **)(i + 24);
          v25 = (_QWORD *)(i + 16);
          v26 = *(_QWORD *)(i + 16);
          v27 = *v24;
          v28 = *(_QWORD *)(v26 + 8);
          if ( *v24 == v28 && (_QWORD *)v27 == v25 )
          {
            *(_QWORD *)(a1 + 192) -= v13;
            v29 = *(_QWORD *)(a1 + 312);
            if ( v29 )
            {
              for ( j = *(unsigned int *)(v29 + 8); ; j = *(unsigned int *)(v31 + 8) )
              {
                if ( *(unsigned __int16 *)(i + 8) < j )
                {
                  v32 = *(unsigned __int16 *)(i + 8);
                  goto LABEL_35;
                }
                v31 = *(_QWORD *)v29;
                if ( !*(_QWORD *)v29 )
                  break;
                v29 = *(_QWORD *)v29;
              }
              v32 = *(_DWORD *)(v29 + 8) - 1;
LABEL_35:
              RtlpHeapRemoveListEntry(a1, v29, 1, (__int64 *)(i + 16), v32, *(unsigned __int16 *)(i + 8));
              v8 = 0LL;
            }
            *v24 = v26;
            *(_QWORD *)(v26 + 8) = v24;
            if ( (*(_BYTE *)(i + 10) & 8) != 0 )
            {
              v33 = RtlpCommitBlock(a1, i);
              v8 = 0LL;
              if ( !v33 )
              {
                RtlpDeCommitFreeBlock(a1, i, *(unsigned __int16 *)(i + 8), 1);
                goto LABEL_39;
              }
            }
            v34 = *(unsigned __int16 *)(i + 8);
            v35 = (_QWORD *)(a1 + 336);
            *(_BYTE *)(i + 10) = (_BYTE)v8;
            *(_BYTE *)(i + 15) = (_BYTE)v8;
            if ( *(_PEB_LDR_DATA **)(a1 + 312) == v8 )
            {
              Entry = (_QWORD *)*v35;
            }
            else
            {
              Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned int)v34);
              v8 = 0LL;
            }
            if ( v35 != Entry )
            {
              v36 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v36 )
                {
                  v37 = *((_DWORD *)Entry - 2);
                  v36 = *(_DWORD *)(a1 + 124);
                  LOWORD(v51) = v37;
                  if ( (v36 & v37) != 0 )
                    v51 = *(_DWORD *)(a1 + 136) ^ v37;
                  v38 = v51;
                }
                else
                {
                  v38 = *((_WORD *)Entry - 4);
                }
                if ( v34 <= v38 )
                  break;
                Entry = (_QWORD *)*Entry;
              }
              while ( v35 != Entry );
            }
            v39 = (__int64 *)Entry[1];
            if ( (_QWORD *)*v39 == Entry )
            {
              *v25 = Entry;
              *(_QWORD *)(i + 24) = v39;
              *v39 = (__int64)v25;
              Entry[1] = v25;
            }
            else
            {
              RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v39, (__int64)v8);
              v8 = 0LL;
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(i + 8);
            v40 = *(_QWORD *)(a1 + 312);
            if ( v40 )
            {
              for ( k = *(unsigned int *)(v40 + 8); ; k = *(unsigned int *)(v42 + 8) )
              {
                if ( *(unsigned __int16 *)(i + 8) < k )
                {
                  v43 = *(unsigned __int16 *)(i + 8);
                  goto LABEL_64;
                }
                v42 = *(_QWORD *)v40;
                if ( !*(_QWORD *)v40 )
                  break;
                v40 = *(_QWORD *)v40;
              }
              v43 = *(_DWORD *)(v40 + 8) - 1;
LABEL_64:
              RtlpHeapAddListEntry(a1, v40, 1, i + 16, v43, *(unsigned __int16 *)(i + 8));
              v8 = 0LL;
            }
            if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
            {
              *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
              *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
            }
          }
          else
          {
            RtlpLogHeapFailure(13, a1, i + 16, v28, v27, (__int64)v8);
LABEL_39:
            v8 = 0LL;
          }
          v9 = a4;
          goto LABEL_41;
        }
        v44 = RtlCompareMemoryUlong((PVOID)(i + 32), v23, 0xFEEEFEEE);
        if ( v44 != v23 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("Free Heap block %p modified at %p after it was freed\n", i, v44 + i + 16);
          goto LABEL_117;
        }
        v11 = v52;
        v9 = a4;
      }
      v45 = *(unsigned __int16 *)(i + 8);
      ++*v9;
      *a5 += v45;
      v8 = 0LL;
    }
    v46 = *(unsigned __int8 *)(i + 14);
    if ( (_BYTE)v46 )
      v47 = (i & 0xFFFFFFFFFFFF0000uLL) - (v46 << 16) + 0x10000;
    else
      v47 = a1;
    if ( v47 != a2 )
    {
      if ( NtCurrentPeb()->Ldr == v8 )
        DbgPrint("HEAP: ");
      else
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      DbgPrint("Heap block at %p has incorrect segment offset (%x)\n", i, *(unsigned __int8 *)(i + 14));
      goto LABEL_117;
    }
    if ( *(_BYTE *)(i + 15) != 3 )
    {
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
      i += v18;
      goto LABEL_41;
    }
    v48 = *(_QWORD *)(i + 56);
    if ( !v48 )
    {
      if ( i + 16LL * *(unsigned __int16 *)(i + 8) != *(_QWORD *)(a2 + 72) )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint("Heap block at %p is not last block in segment (%p)\n", i, *(_QWORD *)(a2 + 72));
        goto LABEL_117;
      }
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
      return 1;
    }
    ++v12;
    v49 = *(_DWORD *)(a1 + 124);
    v52 = (v48 >> 12) + v11;
    if ( v49 )
    {
      *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
      *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      v49 = *(_DWORD *)(a1 + 124);
    }
    i += v48 + 64;
    if ( i != *(_QWORD *)(a2 + 72) )
    {
      if ( v49 )
      {
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(i + 11) != (*(_BYTE *)(i + 8) ^ (unsigned __int8)(*(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10))) )
        {
          RtlpAnalyzeHeapFailure(a1, i, Entry);
          v8 = 0LL;
        }
      }
      if ( *(_WORD *)(a1 + 140) != *(_WORD *)(i + 12) )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint(
          "Heap block at %p has corrupted PreviousSize (%lx)\n",
          i,
          *(unsigned __int16 *)(a1 + 140) ^ (unsigned int)*(unsigned __int16 *)(i + 12));
        goto LABEL_117;
      }
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
        *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
      }
    }
    LOWORD(v13) = (_WORD)v8;
LABEL_41:
    v11 = v52;
  }
  if ( NtCurrentPeb()->Ldr == v8 )
    DbgPrint("HEAP: ");
  else
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  DbgPrint(
    "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
    (const void *)i,
    *(unsigned __int16 *)(i + 12) ^ *(unsigned __int16 *)(a1 + 140),
    (unsigned __int16)v13);
LABEL_117:
  v22 = *(_DWORD *)(a1 + 124) == 0;
LABEL_118:
  if ( !v22 )
  {
    *(_BYTE *)(i + 11) = *(_BYTE *)(i + 8) ^ *(_BYTE *)(i + 9) ^ *(_BYTE *)(i + 10);
    *(_DWORD *)(i + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 0;
}
