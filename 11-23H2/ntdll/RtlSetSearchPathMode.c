/*
 * XREFs of RtlSetSearchPathMode @ 0x180002030
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x180079030 (RtlpInvalidatePathCache.c)
 */

__int64 __fastcall RtlSetSearchPathMode(int a1)
{
  int v3; // ebx
  __int64 v4; // rdi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  if ( !((a1 & 1) != 0 ? (a1 & 0x10000) == 0 : (a1 & 0x18000) == 0x10000) )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&unk_180188150);
  if ( (RtlpSearchPathMode & 0x8000) == 0 || (a1 & 0x8000) != 0 )
  {
    RtlpSearchPathMode = a1;
    v3 = 0;
  }
  else
  {
    v3 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&unk_180188150);
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v4 = RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  }
  return (unsigned int)v3;
}
