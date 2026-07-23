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

NTSTATUS __cdecl RtlSetSearchPathMode(ULONG Flags)
{
  NTSTATUS v3; // ebx
  void *v4; // rdi

  if ( (Flags & 0xFFFE7FFE) != 0 )
    return -1073741811;
  if ( !((Flags & 1) != 0 ? (Flags & 0x10000) == 0 : (Flags & 0x18000) == 0x10000) )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&SRWLock);
  if ( (RtlpSearchPathMode & 0x8000) == 0 || (Flags & 0x8000) != 0 )
  {
    RtlpSearchPathMode = Flags;
    v3 = 0;
  }
  else
  {
    v3 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&SRWLock);
  if ( v3 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v4 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v3;
}
