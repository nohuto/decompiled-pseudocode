/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800EA79C
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x18008939C (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x180060640 (RtlpInvalidatePathCache.c)
 */

void RtlpSignalSystemDirsModification()
{
  void *v0; // rsi
  void *v1; // rdi
  void *v2; // rbx

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v0 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v1 = (void *)RtlpInvalidatePathCache((__int64 *)&RtlpExeSearchPath);
  v2 = (void *)RtlpInvalidatePathCache(&RtlpSearchPath);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
