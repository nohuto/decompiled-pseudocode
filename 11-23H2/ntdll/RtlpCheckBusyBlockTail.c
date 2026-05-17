/*
 * XREFs of RtlpCheckBusyBlockTail @ 0x180103A88
 * Callers:
 *     RtlpValidateHeapEntry @ 0x180087664 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180107E20 (RtlpValidateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1801085C0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     DbgPrint @ 0x180053910 (DbgPrint.c)
 *     RtlCompareMemory @ 0x1800A5A20 (RtlCompareMemory.c)
 *     RtlpBreakPointHeap @ 0x180107DF8 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckBusyBlockTail(__int64 a1, unsigned __int64 a2)
{
  char v4; // al
  int v5; // eax
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int16 v11; // r10
  int v12; // eax
  char v13; // cl
  unsigned __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  int v18; // eax
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  SIZE_T v23; // r14
  int v25; // [rsp+28h] [rbp-10h]
  int v26; // [rsp+28h] [rbp-10h]
  int v27; // [rsp+28h] [rbp-10h]

  v4 = *(_BYTE *)(a2 + 15);
  if ( v4 == 1 )
    return 1;
  if ( v4 == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v5 = *(_DWORD *)(a2 + 8);
      LOWORD(v25) = v5;
      if ( (v5 & *(_DWORD *)(a1 + 124)) != 0 )
        v25 = *(_DWORD *)(a1 + 136) ^ v5;
      v6 = v25;
    }
    else
    {
      v6 = *(_WORD *)(a2 + 8);
    }
    v7 = *(_QWORD *)(a2 - 16) - v6;
  }
  else
  {
    if ( v4 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v12 = *(_DWORD *)(a2 + 8);
        LOWORD(v26) = v12;
        if ( (v12 & *(_DWORD *)(a1 + 124)) != 0 )
          v26 = *(_DWORD *)(a1 + 136) ^ v12;
        v11 = v26;
      }
      else
      {
        v11 = *(_WORD *)(a2 + 8);
      }
      v8 = a2 >> 4;
    }
    else
    {
      v8 = a2 >> 4;
      v9 = (unsigned int)RtlpLFHKey ^ (unsigned int)(a2 >> 4) ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)a1;
      if ( (_WORD)v9 )
        v10 = 0LL;
      else
        v10 = *(_QWORD *)(a2 - (v9 >> 12));
      v11 = *(_WORD *)(v10 + 36);
    }
    v13 = *(_BYTE *)(a2 + 15);
    if ( v13 == 5 )
    {
      v14 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v13 & 0x40) != 0 )
    {
      v14 = *(unsigned __int16 *)(a2 + 16LL * (v13 & 0x3F) + 12);
    }
    else if ( (v13 & 0x3F) == 0x3F )
    {
      if ( v13 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v18 = *(_DWORD *)(a2 + 8);
          LOWORD(v27) = v18;
          if ( (v18 & *(_DWORD *)(a1 + 124)) != 0 )
            v27 = *(_DWORD *)(a1 + 136) ^ v18;
          v17 = v27;
        }
        else
        {
          v17 = *(_WORD *)(a2 + 8);
        }
      }
      else
      {
        v15 = RtlpLFHKey ^ *(_DWORD *)(a2 + 8) ^ a1 ^ v8;
        if ( (_WORD)v15 )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(a2 - ((unsigned __int64)v15 >> 12));
        v17 = *(_WORD *)(v16 + 36);
      }
      v14 = *(_QWORD *)(a2 + 16LL * v17);
    }
    else
    {
      v14 = *(_BYTE *)(a2 + 15) & 0x3F;
    }
    v7 = 16LL * v11 - v14;
  }
  v19 = *(_BYTE *)(a2 + 15);
  if ( v19 == 5 )
  {
    v20 = *(unsigned __int8 *)(a2 + 14);
LABEL_40:
    v21 = 16 * v20;
    goto LABEL_44;
  }
  if ( (v19 & 0x40) != 0 )
  {
    v20 = *(_BYTE *)(a2 + 15) & 0x3F;
    goto LABEL_40;
  }
  v21 = 0LL;
LABEL_44:
  v22 = v21 + v7;
  v23 = RtlCompareMemory((const void *)(v22 + a2 + 16), &CheckHeapFillPattern, 0x10uLL);
  if ( v23 == 16 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap block at %p modified at %p past requested size of %Ix\n",
    (const void *)a2,
    (const void *)(v23 + v22 + a2 + 16),
    v22);
  RtlpBreakPointHeap();
  return 0;
}
