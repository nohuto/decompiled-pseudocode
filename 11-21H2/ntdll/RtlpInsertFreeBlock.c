/*
 * XREFs of RtlpInsertFreeBlock @ 0x1800231D4
 * Callers:
 *     RtlpExtendHeap @ 0x180020860 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x1800214F0 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180022B64 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180025D30 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002B160 (RtlpAllocateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800304FC (RtlpInitializeHeapSegment.c)
 *     RtlpCoalesceHeap @ 0x1800FEA84 (RtlpCoalesceHeap.c)
 * Callees:
 *     DbgPrint @ 0x1800069C0 (DbgPrint.c)
 *     RtlpHeapAddListEntry @ 0x18002192C (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180021DC0 (RtlpFindEntry.c)
 *     RtlpHeapHandleError @ 0x180114EB0 (RtlpHeapHandleError.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpInsertFreeBlock(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int16 v3; // di
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  char v9; // al
  _QWORD *v10; // r14
  unsigned __int16 v11; // r15
  char v12; // cl
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  _QWORD *Entry; // r8
  int v16; // ecx
  int v17; // eax
  unsigned __int16 v18; // ax
  __int64 *v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rdx
  unsigned __int64 i; // rax
  __int64 v23; // rax
  int v24; // ecx
  _DWORD *v25; // r8
  unsigned __int64 v26; // rdx
  int v27; // [rsp+38h] [rbp-30h]
  char v28; // [rsp+80h] [rbp+18h]

  if ( a3 )
  {
    v3 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
    v4 = a3;
    v5 = a2;
    if ( !v3
      && RtlpHeapErrorHandlerThreshold >= 1
      && (*(_BYTE *)(a2 + 10) & 8) == 0
      && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, a3, 0LL);
      else
        DbgPrint("HEAP: ", a2, a3, 0LL);
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
      RtlpHeapHandleError(1LL);
    }
    v7 = *(unsigned __int8 *)(v5 + 14);
    if ( (_BYTE)v7 )
      v8 = (v5 & 0xFFFFFFFFFFFF0000uLL) - (v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(v5 + 10);
    v10 = (_QWORD *)(a1 + 336);
    v28 = v9;
    while ( 1 )
    {
      if ( v4 > 0xFF00 )
      {
        v11 = -272;
        if ( v4 != 65281 )
          v11 = -256;
      }
      else
      {
        v11 = v4;
      }
      v12 = 0;
      if ( v4 <= 0xFF00 )
        v12 = v9;
      *(_BYTE *)(v5 + 10) = v12;
      *(_WORD *)(v5 + 12) = v3 ^ *(_WORD *)(a1 + 140);
      v13 = *(_QWORD *)(v8 + 40);
      if ( v13 == v8 )
      {
        LOBYTE(v14) = 0;
      }
      else
      {
        v14 = ((v5 - v8) >> 16) + 1;
        if ( v14 >= 0xFE )
          RtlpLogHeapFailure(3, v13, v5, v8, 0LL, 0LL);
      }
      *(_BYTE *)(v5 + 10) &= 0xF0u;
      *(_BYTE *)(v5 + 14) = v14;
      *(_WORD *)(v5 + 8) = v11;
      *(_BYTE *)(v5 + 11) = 0;
      *(_BYTE *)(v5 + 15) = 0;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
      {
        v25 = (_DWORD *)(v5 + 32);
        v26 = (16 * (unsigned __int64)v11 - 32) >> 2;
        if ( v26 )
        {
          if ( ((unsigned __int8)v25 & 4) != 0 )
          {
            --v26;
            *v25 = -17891602;
            v25 = (_DWORD *)(v5 + 36);
          }
          memset64(v25, 0xFEEEFEEEFEEEFEEEuLL, v26 >> 1);
          if ( (v26 & 1) != 0 )
            v25[v26 - 1] = -17891602;
        }
        *(_BYTE *)(v5 + 10) |= 4u;
      }
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v11);
      else
        Entry = (_QWORD *)*v10;
      if ( v10 != Entry )
      {
        v16 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v16 )
          {
            v17 = *((_DWORD *)Entry - 2);
            v16 = *(_DWORD *)(a1 + 124);
            LOWORD(v27) = v17;
            if ( (v16 & v17) != 0 )
              v27 = *(_DWORD *)(a1 + 136) ^ v17;
            v18 = v27;
          }
          else
          {
            v18 = *((_WORD *)Entry - 4);
          }
          if ( v11 <= (unsigned __int64)v18 )
            break;
          Entry = (_QWORD *)*Entry;
        }
        while ( v10 != Entry );
      }
      v19 = (__int64 *)Entry[1];
      v20 = (_QWORD *)(v5 + 16);
      if ( (_QWORD *)*v19 == Entry )
      {
        *v20 = Entry;
        *(_QWORD *)(v5 + 24) = v19;
        *v19 = (__int64)v20;
        Entry[1] = v20;
      }
      else
      {
        RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v19, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v5 + 8);
      v21 = *(_QWORD *)(a1 + 312);
      if ( v21 )
      {
        for ( i = *(unsigned int *)(v21 + 8); ; i = *(unsigned int *)(v23 + 8) )
        {
          if ( *(unsigned __int16 *)(v5 + 8) < i )
          {
            v24 = *(unsigned __int16 *)(v5 + 8);
            goto LABEL_30;
          }
          v23 = *(_QWORD *)v21;
          if ( !*(_QWORD *)v21 )
            break;
          v21 = *(_QWORD *)v21;
        }
        v24 = *(_DWORD *)(v21 + 8) - 1;
LABEL_30:
        RtlpHeapAddListEntry(a1, v21, 1, v5 + 16, v24, *(unsigned __int16 *)(v5 + 8));
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v5 + 11) = *(_BYTE *)(v5 + 8) ^ *(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10);
        *(_DWORD *)(v5 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v4 -= v11;
      v3 = v11;
      v5 += 16LL * v11;
      if ( v5 >= *(_QWORD *)(v8 + 72) )
        break;
      v9 = v28;
      v10 = (_QWORD *)(a1 + 336);
      if ( !v4 )
      {
        *(_WORD *)(v5 + 12) = v11 ^ *(_WORD *)(a1 + 140);
        return;
      }
    }
  }
}
