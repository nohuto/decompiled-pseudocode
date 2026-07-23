/*
 * XREFs of ExReleaseCacheAwarePushLockExclusive @ 0x1403594E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExReleaseCacheAwarePushLockExclusive(volatile signed __int64 **BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  volatile signed __int64 **v3; // rbx
  volatile signed __int64 *v4; // rcx

  v1 = (unsigned __int64)(BugCheckParameter2 + 32);
  v3 = BugCheckParameter2;
  if ( BugCheckParameter2 < BugCheckParameter2 + 32 )
  {
    do
    {
      v4 = *v3;
      if ( (_InterlockedExchangeAdd64(*v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v4);
      ++v3;
    }
    while ( (unsigned __int64)v3 < v1 );
  }
  return sub_1402AFC00((ULONG_PTR)BugCheckParameter2);
}
