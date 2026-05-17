/*
 * XREFs of RtlpHpUnlockHeapForCloning @ 0x180121F54
 * Callers:
 *     RtlpUnlockHeapManagerForCloning @ 0x1800FFD58 (RtlpUnlockHeapManagerForCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextLockUnlock @ 0x180121618 (RtlpHpLfhContextLockUnlock.c)
 */

__int64 __fastcall RtlpHpUnlockHeapForCloning(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  volatile signed __int64 *v5; // rcx
  _QWORD *v6; // rax

  v4 = 2LL;
  RtlpHpLfhContextLockUnlock(a1 + 896, a2 != 0 ? 3 : 1);
  v5 = (volatile signed __int64 *)(a1 + 224);
  if ( a2 )
    *v5 = 1LL;
  RtlReleaseSRWLockExclusive(v5);
  if ( a2 )
  {
    v6 = (_QWORD *)(a1 + 432);
    do
    {
      *v6 = 1LL;
      v6 += 24;
      --v4;
    }
    while ( v4 );
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 432));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 624));
  return RtlpHpHeapUnlock(a1, a2);
}
