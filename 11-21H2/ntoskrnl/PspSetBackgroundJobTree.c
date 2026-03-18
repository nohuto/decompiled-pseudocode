/*
 * XREFs of PspSetBackgroundJobTree @ 0x1406E0138
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(char *Object, char a2)
{
  struct _ERESOURCE *v2; // rdi
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v5) = a2;
  v2 = (struct _ERESOURCE *)(Object + 56);
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( (_BYTE)v5 )
  {
    if ( (*((_DWORD *)Object + 378) & 0x400) == 0 )
      goto LABEL_3;
LABEL_11:
    ExReleaseResourceLite(v2);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)Object + 378) & 0x400) == 0 )
    goto LABEL_11;
LABEL_3:
  if ( (_BYTE)v5 )
    _interlockedbittestandset((volatile signed __int32 *)Object + 378, 0xAu);
  else
    _interlockedbittestandreset((volatile signed __int32 *)Object + 378, 0xAu);
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v5, 5);
  ExReleaseResourceLite(v2);
  if ( !(_BYTE)v5 )
    PspEnumJobsAndProcessesInJobHierarchy(Object, 0LL, 0);
  return 0LL;
}
