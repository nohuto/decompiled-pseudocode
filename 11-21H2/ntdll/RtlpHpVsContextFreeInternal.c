/*
 * XREFs of RtlpHpVsContextFreeInternal @ 0x180121208
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x1801213B4 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x180014CB8 (RtlpHpVsSubsegmentFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 *     RtlpHpVsChunkFree @ 0x18012111C (RtlpHpVsChunkFree.c)
 */

__int64 __fastcall RtlpHpVsContextFreeInternal(
        __int64 SRWLock,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  int v8; // eax
  unsigned __int64 v10; // r10
  int v11; // eax
  __int64 v12; // r15
  int v13; // eax
  int v14; // ecx
  unsigned __int64 v15; // r10
  int v16; // ecx
  unsigned __int64 v17; // r15

  v6 = 0;
  v7 = HIDWORD(*(_QWORD *)a3);
  v8 = v7 ^ HIDWORD(a3) ^ HIDWORD(RtlpHpHeapGlobals);
  v10 = a3;
  if ( (v8 & 0xFF0000) != 0 )
  {
    v11 = a3 ^ *(_DWORD *)(a3 + 8);
LABEL_8:
    v14 = (unsigned __int8)(RtlpHpHeapGlobals ^ v11);
    goto LABEL_10;
  }
  if ( (_WORD)v8 )
  {
    v10 = a3 - 16LL * (unsigned __int16)(v7 ^ WORD2(a3) ^ WORD2(RtlpHpHeapGlobals));
    v12 = HIDWORD(*(_QWORD *)v10);
    v13 = HIDWORD(v10) ^ v12 ^ HIDWORD(RtlpHpHeapGlobals);
    if ( (v13 & 0xFF0000) != 0 )
    {
LABEL_7:
      v11 = v10 ^ *(_DWORD *)(v10 + 8);
      goto LABEL_8;
    }
    if ( (_WORD)v13 )
    {
      v10 -= 16LL * (unsigned __int16)(WORD2(v10) ^ v12 ^ WORD2(RtlpHpHeapGlobals));
      goto LABEL_7;
    }
  }
  v14 = 0;
LABEL_10:
  v15 = (v10 - (unsigned int)(v14 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v15 + 32) ^ *(_WORD *)(v15 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    a3 = v15;
    v16 = 18;
LABEL_12:
    RtlpLogHeapFailure(v16, SRWLock ^ *(_QWORD *)(SRWLock + 128), a3, 0LL, 0LL, 0LL);
    return v6;
  }
  if ( (((unsigned int)v7 ^ HIDWORD(a3) ^ HIDWORD(RtlpHpHeapGlobals)) & 0xFF0000) == 0 )
  {
    v16 = 8;
    goto LABEL_12;
  }
  v17 = RtlpHpVsChunkFree((PRTL_SRWLOCK)SRWLock, v15, a3, a4, a5);
  if ( v17 )
  {
    if ( (a4 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a5 + 8));
      *(_QWORD *)(a5 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentFree(SRWLock, v17, a4);
    if ( (a4 & 1) == 0 )
    {
      *(_QWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_QWORD *)(a5 + 8) = SRWLock;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)SRWLock);
    }
  }
  return 1;
}
