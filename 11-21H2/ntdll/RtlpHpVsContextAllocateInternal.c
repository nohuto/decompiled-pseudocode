/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x180019520
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180028BF0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpVsContextAllocate @ 0x18002F3E4 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x180019AF0 (RtlpHpVsChunkSplit.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180076138 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18007A9D4 (RtlpHpVsSubsegmentCreate.c)
 *     RtlHeapZero @ 0x180093F90 (RtlHeapZero.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180120C80 (RtlpHpVsChunkAlignSplit.c)
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
  unsigned int v7; // r11d
  unsigned int v9; // r15d
  unsigned int v10; // edi
  char *v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int64 Value; // rax
  unsigned __int64 v14; // rbx
  _QWORD *v15; // r9
  int v16; // r8d
  unsigned int v17; // eax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  int v21; // r8d
  int v22; // r8d
  int v23; // edx
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  int v28; // r9d
  __int16 v29; // cx
  int v30; // r9d
  __int16 v31; // ax
  int v33; // esi
  __int64 v34; // rbx
  __int64 v35; // r9
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  char *v39; // rdi
  unsigned int v41; // [rsp+80h] [rbp+18h]

  v6 = a3 + 2;
  v7 = a4;
  if ( a2 == a3 )
    v6 = a3;
  v41 = v6;
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
    v14 = *(_QWORD *)v12;
    if ( (Value & 1) == 0 )
      goto LABEL_13;
    if ( v14 )
    {
      v14 ^= v12;
LABEL_13:
      v15 = 0LL;
      v16 = Value & 1;
      if ( !v14 )
        goto LABEL_19;
      while ( 1 )
      {
        v17 = *(_DWORD *)(v14 - 8) ^ RtlpHpHeapGlobals ^ (v14 - 8);
        if ( v10 < v17 )
        {
          v18 = *(_QWORD *)v14;
          v15 = (_QWORD *)v14;
          if ( v16 && v18 )
          {
            v14 ^= v18;
            goto LABEL_18;
          }
        }
        else
        {
          if ( v10 <= v17 )
            goto LABEL_20;
          v18 = *(_QWORD *)(v14 + 8);
          if ( v16 && v18 )
          {
            v14 ^= v18;
            goto LABEL_18;
          }
        }
        v14 = v18;
LABEL_18:
        if ( !v14 )
          goto LABEL_19;
      }
    }
    v15 = 0LL;
LABEL_19:
    v14 = (unsigned __int64)v15;
LABEL_20:
    if ( v14 )
      break;
    v33 = v7 & 1;
    if ( (v7 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      v7 = a4;
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    *a6 = 0;
    v34 = RtlpHpVsSubsegmentCreate(SRWLock, v41, v7, v15);
    if ( !v34 )
      return 0LL;
    *a6 = 1;
    if ( !v33 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
    }
    v36 = (unsigned __int64)&SRWLock[4] ^ SRWLock[5].Value;
    if ( (PRTL_SRWLOCK)(v36 ^ *(_QWORD *)v36) != &SRWLock[4] )
      __fastfail(3u);
    v37 = v34 ^ (unsigned __int64)&SRWLock[4];
    *(_QWORD *)v34 = v37;
    *(_QWORD *)(v34 + 8) = v34 ^ v36;
    *(_QWORD *)v36 = v34 ^ v36;
    SRWLock[5].Value = v37;
    if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((v34 + 80) & 0xFFF) != 0 )
    {
      v38 = RtlpHpVsChunkAlignSplit(v37, v34, v34 + 48, v35);
      if ( v38 )
        RtlpHpVsFreeChunkInsert(SRWLock, v34, v38);
    }
    RtlpHpVsFreeChunkInsert(SRWLock, v34, v34 + 48);
    v7 = a4;
    v11 = 0LL;
  }
  v19 = v14 - 8;
  v20 = v14 - 8;
  v21 = HIDWORD(RtlpHpHeapGlobals) ^ ((v14 - 8) >> 32) ^ HIDWORD(*(_QWORD *)(v14 - 8));
  if ( (v21 & 0xFF0000) != 0 )
  {
    v23 = (unsigned __int8)(*(_BYTE *)v14 ^ RtlpHpHeapGlobals ^ v19);
  }
  else
  {
    if ( !(_WORD)v21 )
      goto LABEL_45;
    v20 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v19 ^ *(_QWORD *)(v14 - 8)) >> 32);
    v22 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v20) ^ HIDWORD(*(_QWORD *)v20);
    if ( (v22 & 0xFF0000) != 0 )
    {
      v23 = (unsigned __int8)(RtlpHpHeapGlobals ^ v20 ^ *(_BYTE *)(v20 + 8));
      goto LABEL_25;
    }
    if ( (_WORD)v22 )
    {
      v20 -= 16LL * (unsigned __int16)((RtlpHpHeapGlobals ^ v20 ^ *(_QWORD *)v20) >> 32);
      v23 = (unsigned __int8)(RtlpHpHeapGlobals ^ v20 ^ *(_BYTE *)(v20 + 8));
    }
    else
    {
LABEL_45:
      v23 = 0;
    }
  }
LABEL_25:
  v24 = (v20 - (unsigned int)(v23 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v24 + 32) ^ *(_WORD *)(v24 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, (unsigned int)SRWLock ^ *(_DWORD *)&SRWLock[16].0, v24, v14 - 8, 0LL, 0LL);
  }
  else if ( (unsigned int)RtlpHpVsChunkSplit(SRWLock, v7, a5) )
  {
    v11 = (char *)(v19 + 16);
    v25 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v19) ^ *(unsigned __int16 *)(v19 + 2)) - 16;
    if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
    {
      v39 = (char *)(v19 + 32);
      if ( ((unsigned __int16)v39 & 0xFFF) == 0 )
      {
        v11 = v39;
        v25 = (unsigned int)(v25 - 16);
      }
    }
    v26 = *(_DWORD *)v14;
    if ( a2 >= (unsigned int)v25 )
    {
      *(_DWORD *)v14 = v26 & 0xFFFFFEFF;
    }
    else
    {
      v27 = (unsigned int)v25;
      *(_DWORD *)v14 = v26 | 0x100;
      v28 = v25;
      v11[v25 - 1] = 0;
      v29 = *(_WORD *)&v11[v25 - 2];
      v30 = v28 - a2;
      v31 = v29 ^ (v30 ^ v29) & 0x1FFF;
      if ( v30 == 1 )
        v31 = v29 | 0x8000;
      *(_WORD *)&v11[v27 - 2] = v31;
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
        memset(v11, 0, a2);
    }
  }
  return v11;
}
