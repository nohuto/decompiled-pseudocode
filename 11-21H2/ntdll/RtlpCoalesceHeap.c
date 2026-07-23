/*
 * XREFs of RtlpCoalesceHeap @ 0x1800FEA84
 * Callers:
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 * Callees:
 *     RtlpCommitBlock @ 0x180020728 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1800231D4 (RtlpInsertFreeBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x180023750 (RtlpCoalesceFreeBlocks.c)
 *     RtlpHeapRemoveListEntry @ 0x18002E790 (RtlpHeapRemoveListEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpCoalesceHeap(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 v2; // rdi
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 *v6; // r10
  __int64 *v7; // r12
  bool v8; // zf
  unsigned __int64 v9; // r15
  __int64 *v10; // r13
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 i; // rax
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 336);
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 344);
  if ( (__int64 *)(a1 + 336) == v3 )
    return v2;
  do
  {
    v5 = (__int64)(v3 - 2);
    v6 = v3;
    v7 = v3;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, v3 - 2);
        v6 = v3;
      }
    }
    v8 = (*(_BYTE *)(v5 + 10) & 8) == 0;
    v9 = *(unsigned __int16 *)(v5 + 8);
    v3 = (__int64 *)*v3;
    v21 = v9;
    if ( !v8 )
    {
      v10 = *(__int64 **)(v5 + 24);
      v11 = v3[1];
      v12 = *v10;
      if ( *v10 != v11 || (__int64 *)v12 != v7 )
      {
        RtlpLogHeapFailure(13, a1, (_DWORD)v6, v11, v12, 0LL);
        goto LABEL_19;
      }
      *(_QWORD *)(a1 + 192) -= v9;
      v13 = *(_QWORD *)(a1 + 312);
      if ( v13 )
      {
        for ( i = *(unsigned int *)(v13 + 8); ; i = *(unsigned int *)(v15 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v16 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_14;
          }
          v15 = *(_QWORD *)v13;
          if ( !*(_QWORD *)v13 )
            break;
          v13 = *(_QWORD *)v13;
        }
        v16 = *(_DWORD *)(v13 + 8) - 1;
LABEL_14:
        RtlpHeapRemoveListEntry(a1, v13, 1, v6, v16, *(unsigned __int16 *)(v5 + 8));
      }
      *v10 = (__int64)v3;
      v3[1] = (__int64)v10;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
        RtlpCommitBlock((char *)a1, v5);
      v17 = *(unsigned __int16 *)(v5 + 8);
      v18 = v5;
LABEL_18:
      RtlpDeCommitFreeBlock(a1, v18, v17, 1);
LABEL_19:
      v3 = (__int64 *)v1[1];
      continue;
    }
    v19 = RtlpCoalesceFreeBlocks(a1, v5, &v21, 1);
    v17 = v21;
    v18 = v19;
    if ( v21 != v9 )
    {
      if ( v19 != v5 && (*(_WORD *)(v19 + 8) < 0x100u || *(_WORD *)(a1 + 140) != *(_WORD *)(v19 + 12)) )
      {
        RtlpInsertFreeBlock(a1, v19, v21);
        goto LABEL_19;
      }
      goto LABEL_18;
    }
    if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v19 + 8) )
      v2 = v19;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v19 + 11) = *(_BYTE *)(v19 + 8) ^ *(_BYTE *)(v19 + 9) ^ *(_BYTE *)(v19 + 10);
      *(_DWORD *)(v19 + 8) ^= *(_DWORD *)(a1 + 136);
    }
  }
  while ( v1 != v3 );
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v2 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v2 + 11) != (*(_BYTE *)(v2 + 8) ^ (unsigned __int8)(*(_BYTE *)(v2 + 9) ^ *(_BYTE *)(v2 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v2);
    }
  }
  return v2;
}
