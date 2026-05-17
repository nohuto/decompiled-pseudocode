/*
 * XREFs of TppQueueRemoveHead @ 0x180126794
 * Callers:
 *     TpReleasePool @ 0x180084E80 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 */

volatile signed __int64 *__fastcall TppQueueRemoveHead(volatile signed __int64 *a1)
{
  volatile signed __int64 *v2; // rdi
  volatile signed __int64 v3; // rax
  volatile signed __int64 *result; // rax

  RtlAcquireSRWLockExclusive(a1 + 2);
  v2 = (volatile signed __int64 *)*a1;
  if ( *(volatile signed __int64 **)(*a1 + 8) != a1 || (v3 = *v2, *(volatile signed __int64 **)(*v2 + 8) != v2) )
    __fastfail(3u);
  *a1 = v3;
  *(_QWORD *)(v3 + 8) = a1;
  RtlReleaseSRWLockExclusive(a1 + 2);
  result = 0LL;
  if ( v2 != a1 )
    return v2;
  return result;
}
