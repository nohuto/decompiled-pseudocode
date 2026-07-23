/*
 * XREFs of RtlpHpVsChunkFree @ 0x18012111C
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x180121208 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x180056FF0 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180076138 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180120C80 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkCoalesce @ 0x180120D74 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkDecommit @ 0x180120F54 (RtlpHpVsChunkDecommit.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkFree(
        PRTL_SRWLOCK SRWLock,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        __int64 a5)
{
  __int64 v5; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  for ( i = 0; ; i = v14 )
  {
    a3 = RtlpHpVsChunkCoalesce((__int64)SRWLock, a2, a3, &v14);
    if ( v14 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup((__int64)SRWLock, a2);
      return a2;
    }
    if ( v14 <= i || !(unsigned int)RtlpHpVsChunkDecommit(SRWLock, a2, a3, a4, v5) )
      break;
  }
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v12 = RtlpHpVsChunkAlignSplit(v11, a2, a3);
    if ( v12 )
      RtlpHpVsFreeChunkInsert((__int64)SRWLock, a2, v12);
  }
  RtlpHpVsFreeChunkInsert((__int64)SRWLock, a2, a3);
  return 0LL;
}
