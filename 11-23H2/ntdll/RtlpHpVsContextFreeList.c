/*
 * XREFs of RtlpHpVsContextFreeList @ 0x180124544
 * Callers:
 *     RtlpHpHeapCompact @ 0x18005FB70 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsContextFreeInternal @ 0x180124394 (RtlpHpVsContextFreeInternal.c)
 */

void __fastcall RtlpHpVsContextFreeList(volatile signed __int64 *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebp
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = a2;
  v6 = a2 & 1;
  if ( (a2 & 1) == 0 )
  {
    v8 = 0LL;
    v10 = 0LL;
    v9 = a1;
    RtlAcquireSRWLockExclusive(a1);
  }
  while ( a3 )
  {
    v7 = (__int64)(a3 - 2);
    a3 = (_QWORD *)*a3;
    RtlpHpVsContextFreeInternal((__int64)a1, a2, v7, v4, (__int64)&v8);
  }
  if ( !v6 )
    RtlReleaseSRWLockExclusive(v9);
}
