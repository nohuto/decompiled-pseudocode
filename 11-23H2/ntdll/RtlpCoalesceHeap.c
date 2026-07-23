/*
 * XREFs of RtlpCoalesceHeap @ 0x1800FFB8C
 * Callers:
 *     RtlpExtendHeap @ 0x180045D18 (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x1800FE720 (RtlCompactHeap.c)
 * Callees:
 *     RtlpInsertFreeBlock @ 0x1800447F0 (RtlpInsertFreeBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180044F5C (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x1800455F8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCommitBlock @ 0x1800467BC (RtlpCommitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180048FDC (RtlpHeapRemoveListEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpCoalesceHeap(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 *v5; // r14
  __int64 v7; // rsi
  __int64 *v8; // r10
  __int64 *v9; // r12
  bool v10; // zf
  unsigned __int64 v11; // r15
  __int64 *v12; // r13
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 i; // rax
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 336);
  v4 = 0LL;
  v5 = *(__int64 **)(a1 + 344);
  if ( (__int64 *)(a1 + 336) == v5 )
    return v4;
  do
  {
    v7 = (__int64)(v5 - 2);
    v8 = v5;
    v9 = v5;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, v5 - 2, a3);
        v8 = v5;
      }
    }
    v10 = (*(_BYTE *)(v7 + 10) & 8) == 0;
    v11 = *(unsigned __int16 *)(v7 + 8);
    v5 = (__int64 *)*v5;
    v23 = v11;
    if ( !v10 )
    {
      v12 = *(__int64 **)(v7 + 24);
      v13 = v5[1];
      v14 = *v12;
      if ( *v12 != v13 || (__int64 *)v14 != v9 )
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v8, v13, v14, 0LL);
        goto LABEL_19;
      }
      *(_QWORD *)(a1 + 192) -= v11;
      v15 = *(_QWORD *)(a1 + 312);
      if ( v15 )
      {
        for ( i = *(unsigned int *)(v15 + 8); ; i = *(unsigned int *)(v17 + 8) )
        {
          if ( *(unsigned __int16 *)(v7 + 8) < i )
          {
            v18 = *(unsigned __int16 *)(v7 + 8);
            goto LABEL_14;
          }
          v17 = *(_QWORD *)v15;
          if ( !*(_QWORD *)v15 )
            break;
          v15 = *(_QWORD *)v15;
        }
        v18 = *(_DWORD *)(v15 + 8) - 1;
LABEL_14:
        RtlpHeapRemoveListEntry(a1, v15, 1, v8, v18, *(unsigned __int16 *)(v7 + 8));
      }
      *v12 = (__int64)v5;
      v5[1] = (__int64)v12;
      if ( (*(_BYTE *)(v7 + 10) & 8) != 0 )
        RtlpCommitBlock(a1, v7);
      a3 = *(unsigned __int16 *)(v7 + 8);
      v19 = v7;
LABEL_18:
      RtlpDeCommitFreeBlock(a1, v19, a3, 1);
LABEL_19:
      v5 = (__int64 *)v3[1];
      continue;
    }
    v20 = RtlpCoalesceFreeBlocks(a1, v7, &v23, 1);
    a3 = v23;
    v19 = v20;
    if ( v23 != v11 )
    {
      if ( v20 != v7 && (*(_WORD *)(v20 + 8) < 0x100u || *(_WORD *)(a1 + 140) != *(_WORD *)(v20 + 12)) )
      {
        RtlpInsertFreeBlock(a1, v20, v23);
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    if ( !v4 || *(_WORD *)(v4 + 8) < *(_WORD *)(v20 + 8) )
      v4 = v20;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
      *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  while ( v3 != v5 );
  if ( v4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v21 = *(_DWORD *)(v4 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v4 + 8) = v21;
      if ( *(_BYTE *)(v4 + 11) != ((unsigned __int8)v21 ^ (unsigned __int8)(*(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v4, a3);
    }
  }
  return v4;
}
