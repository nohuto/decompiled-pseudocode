/*
 * XREFs of PspSetIoPriorityLimitJobTree @ 0x1409B2C04
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

void __fastcall PspSetIoPriorityLimitJobTree(char *Object, int a2)
{
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( a2 != *((_DWORD *)Object + 268) )
  {
    *((_DWORD *)Object + 268) = a2;
    PspEnumJobsAndProcessesInJobHierarchy(
      Object,
      (int)PspSetJobIoPriorityLimitPreCallback,
      0,
      (int)PspSetProcessIoPriorityLimitCallback,
      (__int64)&v4,
      5);
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
}
