/*
 * XREFs of PspSetPagePriorityLimitJobTree @ 0x1409B3370
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

void __fastcall PspSetPagePriorityLimitJobTree(char *Object, int a2)
{
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( a2 != *((_DWORD *)Object + 270) )
  {
    *((_DWORD *)Object + 270) = a2;
    PspEnumJobsAndProcessesInJobHierarchy(Object, (int)PspSetJobPagePriorityLimitPreCallback, 0, 0, 0LL, 5);
  }
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
}
