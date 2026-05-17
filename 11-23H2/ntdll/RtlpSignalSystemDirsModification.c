/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800EAE2C
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085A44 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x180079030 (RtlpInvalidatePathCache.c)
 */

signed __int64 RtlpSignalSystemDirsModification()
{
  __int64 v0; // rsi
  __int64 v1; // rdi
  __int64 v2; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v0 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v1 = RtlpInvalidatePathCache((__int64 *)&RtlpExeSearchPath);
  v2 = RtlpInvalidatePathCache(&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v1 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( v2 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  return result;
}
