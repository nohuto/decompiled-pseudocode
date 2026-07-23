/*
 * XREFs of RtlpHpVsContextFreeList @ 0x1801213B4
 * Callers:
 *     RtlpHpHeapCompact @ 0x180014D08 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x180121208 (RtlpHpVsContextFreeInternal.c)
 */

void __fastcall RtlpHpVsContextFreeList(PRTL_SRWLOCK SRWLock, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebp
  int v6; // esi
  unsigned __int64 v7; // r8
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  PRTL_SRWLOCK SRWLocka; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v8 = 0LL;
    v10 = 0LL;
    SRWLocka = SRWLock;
    RtlAcquireSRWLockExclusive(SRWLock);
  }
  while ( a3 )
  {
    v7 = (unsigned __int64)(a3 - 2);
    a3 = (_QWORD *)*a3;
    RtlpHpVsContextFreeInternal((__int64)SRWLock, a2, v7, v4, (__int64)&v8);
  }
  if ( !v6 )
    RtlReleaseSRWLockExclusive(SRWLocka);
}
