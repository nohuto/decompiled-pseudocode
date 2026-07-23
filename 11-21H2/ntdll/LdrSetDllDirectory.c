/*
 * XREFs of LdrSetDllDirectory @ 0x180060540
 * Callers:
 *     LdrpInitializePolicy @ 0x180060340 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18004A9D0 (RtlCreateUnicodeString.c)
 *     RtlpInvalidatePathCache @ 0x180060640 (RtlpInvalidatePathCache.c)
 *     wcschr @ 0x1800998A0 (wcschr.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  wchar_t *Buffer; // rcx
  void *v3; // rdi
  void *v4; // rbx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  Buffer = DllDirectory->Buffer;
  if ( Buffer )
  {
    if ( !wcschr(Buffer, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, DllDirectory->Buffer) )
        return -1073741801;
      goto LABEL_5;
    }
    return -1073741811;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
LABEL_5:
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  UnicodeString = LdrpDllDirectory;
  LdrpDllDirectory = DestinationString;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v3 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v4 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1;
}
