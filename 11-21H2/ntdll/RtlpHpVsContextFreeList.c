/*
 * XREFs of RtlpHpVsContextFreeList @ 0x1801213B4
 * Callers:
 *     RtlpHpHeapCompact @ 0x180014D08 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x180121208 (RtlpHpVsContextFreeInternal.c)
 */

void __fastcall RtlpHpVsContextFreeList(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v4; // rbx
  unsigned int v5; // ebp
  int v7; // esi
  unsigned __int64 v8; // r8
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v4 = (_QWORD *)a3;
  v5 = a2;
  v7 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = a1;
    RtlAcquireSRWLockExclusive((unsigned __int64)a1, a2, a3, a4);
  }
  while ( v4 )
  {
    v8 = (unsigned __int64)(v4 - 2);
    v4 = (_QWORD *)*v4;
    RtlpHpVsContextFreeInternal((unsigned __int64)a1, a2, v8, v5, (__int64)&v9);
  }
  if ( !v7 )
    RtlReleaseSRWLockExclusive(v10);
}
