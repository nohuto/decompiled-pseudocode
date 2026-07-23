/*
 * XREFs of LdrRemoveDllDirectory @ 0x180060280
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlpInvalidatePathCache @ 0x180060640 (RtlpInvalidatePathCache.c)
 */

NTSTATUS __cdecl LdrRemoveDllDirectory(DLL_DIRECTORY_COOKIE Cookie)
{
  _QWORD *v2; // rdx
  DLL_DIRECTORY_COOKIE *v3; // rax
  void *v4; // rdi

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v2 = *(_QWORD **)Cookie;
  if ( *(DLL_DIRECTORY_COOKIE *)(*(_QWORD *)Cookie + 8LL) != Cookie
    || (v3 = (DLL_DIRECTORY_COOKIE *)*((_QWORD *)Cookie + 1), *v3 != Cookie) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  v2[1] = v3;
  word_180174220 += -2 - *((_WORD *)Cookie + 8);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v4 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Cookie);
  return 0;
}
