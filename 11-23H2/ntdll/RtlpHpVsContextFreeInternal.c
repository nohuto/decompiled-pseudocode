/*
 * XREFs of RtlpHpVsContextFreeInternal @ 0x180124364
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x180124514 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsSubsegmentFree @ 0x180067738 (RtlpHpVsSubsegmentFree.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkFree @ 0x180124278 (RtlpHpVsChunkFree.c)
 */

__int64 __fastcall RtlpHpVsContextFreeInternal(
        __int64 SRWLock,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  int v11; // ecx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // ecx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  int v19; // ecx
  unsigned __int64 v20; // r15

  v6 = RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v7 = HIDWORD(v6);
  v8 = a3 ^ v6;
  v9 = 0;
  if ( ((HIDWORD(a3) ^ (unsigned int)v7) & 0xFF0000) != 0 )
  {
    v11 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(a3 + 8) ^ a3);
  }
  else
  {
    v12 = HIDWORD(v8);
    if ( (_WORD)v12 )
    {
      v13 = a3 - 16LL * (unsigned __int16)v12;
      v14 = RtlpHpHeapGlobals ^ *(_QWORD *)v13;
      v15 = HIDWORD(v13) ^ HIDWORD(v14);
      v16 = v13 ^ v14;
      if ( (v15 & 0xFF0000) == 0 )
      {
        v17 = HIDWORD(v16);
        if ( !(_WORD)v17 )
        {
          v11 = 0;
          goto LABEL_11;
        }
        v13 -= 16LL * (unsigned __int16)v17;
      }
      v11 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v13 + 8) ^ v13);
      goto LABEL_11;
    }
    v11 = 0;
  }
  v13 = a3;
LABEL_11:
  v18 = (v13 - (unsigned int)(v11 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v18 + 32) ^ *(_WORD *)(v18 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    a3 = v18;
    v19 = 18;
LABEL_13:
    RtlpLogHeapFailure(v19, *(_QWORD *)(SRWLock + 128) ^ SRWLock, a3, 0LL, 0LL, 0LL);
    return v9;
  }
  if ( ((HIDWORD(a3) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)a3)) & 0xFF0000) == 0 )
  {
    v19 = 8;
    goto LABEL_13;
  }
  v20 = RtlpHpVsChunkFree((PRTL_SRWLOCK)SRWLock, v18, a3, a4, a5);
  if ( v20 )
  {
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentFree(SRWLock, v20, a4);
    if ( (a4 & 1) == 0 )
    {
      *(_OWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
    }
  }
  return 1;
}
