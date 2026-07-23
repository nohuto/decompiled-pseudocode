/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x1800374D0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x18003CD60 (RtlpAllocateHeapInternal.c)
 *     RtlpHpVsContextAllocate @ 0x180066EF4 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x1800380B0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180069EA0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180072AE4 (RtlpHpVsSubsegmentCreate.c)
 *     RtlHeapZero @ 0x18008EF20 (RtlHeapZero.c)
 *     RtlpLogHeapFailure @ 0x180121540 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180122B38 (RtlpHpVsChunkAlignSplit.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

char *__fastcall RtlpHpVsContextAllocateInternal(
        PRTL_SRWLOCK SRWLock,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned int v6; // eax
  unsigned int v7; // r10d
  unsigned int v9; // r13d
  unsigned int v10; // edi
  char *v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 Value; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  _QWORD *v16; // r8
  int v17; // edx
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  __int64 v24; // r8
  int v25; // ecx
  unsigned __int64 v26; // r8
  int v27; // ecx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r8
  int v32; // r9d
  __int16 v33; // cx
  int v34; // r9d
  __int16 v35; // ax
  int v37; // esi
  __int64 v38; // rbx
  __int64 v39; // r9
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // r8
  char *v44; // rdi
  unsigned int v46; // [rsp+80h] [rbp+18h]

  v6 = a3 + 2;
  v7 = a4;
  if ( a2 == a3 )
    v6 = a3;
  v46 = v6;
  v9 = ((v6 + 15) >> 4) + 1;
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
    v9 = ((v6 + 15) >> 4) + 2;
  v10 = v9 << 16;
  v11 = 0LL;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
      v7 = a4;
    }
  }
  v12 = (unsigned __int64)&SRWLock[2];
  while ( 1 )
  {
    Value = SRWLock[3].Value;
    v14 = RtlpHpHeapGlobals;
    v15 = *(_QWORD *)v12;
    if ( (Value & 1) == 0 )
      goto LABEL_13;
    if ( v15 )
    {
      v15 ^= v12;
LABEL_13:
      v16 = 0LL;
      v17 = Value & 1;
      if ( !v15 )
        goto LABEL_19;
      while ( 1 )
      {
        v18 = *(_DWORD *)(v15 - 8) ^ RtlpHpHeapGlobals ^ (v15 - 8);
        if ( v10 < v18 )
        {
          v19 = *(_QWORD *)v15;
          v16 = (_QWORD *)v15;
          if ( v17 && v19 )
          {
            v15 ^= v19;
            goto LABEL_18;
          }
        }
        else
        {
          if ( v10 <= v18 )
            goto LABEL_20;
          v19 = *(_QWORD *)(v15 + 8);
          if ( v17 && v19 )
          {
            v15 ^= v19;
            goto LABEL_18;
          }
        }
        v15 = v19;
LABEL_18:
        if ( !v15 )
          goto LABEL_19;
      }
    }
    v16 = 0LL;
LABEL_19:
    v15 = (unsigned __int64)v16;
LABEL_20:
    if ( v15 )
      break;
    v37 = v7 & 1;
    if ( (v7 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      v7 = a4;
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    *a6 = 0;
    v38 = RtlpHpVsSubsegmentCreate(SRWLock, v46, v7, v14);
    if ( !v38 )
      return 0LL;
    *a6 = 1;
    if ( !v37 )
    {
      *(_OWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    v40 = SRWLock[5].Value ^ (unsigned __int64)&SRWLock[4];
    if ( (PRTL_SRWLOCK)(*(_QWORD *)v40 ^ v40) != &SRWLock[4] )
      __fastfail(3u);
    v41 = v38 ^ (unsigned __int64)&SRWLock[4];
    *(_QWORD *)v38 = v41;
    *(_QWORD *)(v38 + 8) = v38 ^ v40;
    *(_QWORD *)v40 = v38 ^ v40;
    SRWLock[5].Value = v41;
    if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v38 + 80) & 0xFFF) != 0 )
    {
      v42 = RtlpHpVsChunkAlignSplit(v41, v38, v38 + 48, v39);
      if ( v42 )
        RtlpHpVsFreeChunkInsert(SRWLock, v38, v42);
    }
    RtlpHpVsFreeChunkInsert(SRWLock, v38, v38 + 48);
    v7 = a4;
    v11 = 0LL;
  }
  v20 = (_QWORD *)(v15 - 8);
  v21 = RtlpHpHeapGlobals ^ *(_QWORD *)(v15 - 8);
  v22 = v15 - 8;
  if ( ((HIDWORD(v21) ^ ((v15 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v27 = (unsigned __int8)(*(_BYTE *)v15 ^ RtlpHpHeapGlobals ^ (unsigned __int8)v20);
  }
  else
  {
    v23 = (v21 ^ (v15 - 8)) >> 32;
    if ( !(_WORD)v23 )
      goto LABEL_45;
    v22 -= 16LL * (unsigned __int16)v23;
    v24 = RtlpHpHeapGlobals ^ *(_QWORD *)v22;
    v25 = HIDWORD(v22) ^ HIDWORD(v24);
    v26 = v22 ^ v24;
    if ( (v25 & 0xFF0000) != 0 )
    {
      v27 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v22 + 8) ^ v22);
      goto LABEL_25;
    }
    v43 = HIDWORD(v26);
    if ( (_WORD)v43 )
    {
      v22 -= 16LL * (unsigned __int16)v43;
      v27 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v22 + 8) ^ v22);
    }
    else
    {
LABEL_45:
      v27 = 0;
    }
  }
LABEL_25:
  v28 = (v22 - (unsigned int)(v27 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v28 + 32) ^ *(_WORD *)(v28 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, *(_DWORD *)&SRWLock[16].0 ^ (unsigned int)SRWLock, v28, v15 - 8, 0LL, 0LL);
  }
  else if ( (unsigned int)RtlpHpVsChunkSplit(SRWLock, v7, a5) )
  {
    v11 = (char *)(v20 + 2);
    v29 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)v20 >> 16) ^ *((unsigned __int16 *)v20 + 1)) - 16;
    if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
    {
      v44 = (char *)(v20 + 4);
      if ( ((unsigned __int16)v44 & 0xFFF) == 0 )
      {
        v11 = v44;
        v29 = (unsigned int)(v29 - 16);
      }
    }
    v30 = *(_DWORD *)v15;
    if ( a2 >= (unsigned int)v29 )
    {
      *(_DWORD *)v15 = v30 & 0xFFFFFEFF;
    }
    else
    {
      v31 = (unsigned int)v29;
      *(_DWORD *)v15 = v30 | 0x100;
      v32 = v29;
      v11[v29 - 1] = 0;
      v33 = *(_WORD *)&v11[v29 - 2];
      v34 = v32 - a2;
      v35 = v33 ^ (v34 ^ v33) & 0x1FFF;
      if ( v34 == 1 )
        v35 = v33 | 0x8000;
      *(_WORD *)&v11[v31 - 2] = v35;
    }
    if ( (a4 & 2) != 0 )
    {
      if ( (a4 & 1) == 0 )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
        *(_QWORD *)(a5 + 8) = 0LL;
      }
      *a6 = 0;
      if ( ((a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) == a2 )
        RtlHeapZero(v11, a2);
      else
        memset_thunk_772440563353939046(v11, 0, a2);
    }
  }
  return v11;
}
