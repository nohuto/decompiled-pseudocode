/*
 * XREFs of PspSetEnergyTrackingStateJobTree @ 0x1407D05AC
 * Callers:
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspIsContextAdmin @ 0x1407D0548 (PspIsContextAdmin.c)
 */

__int64 __fastcall PspSetEnergyTrackingStateJobTree(char *Object, _DWORD *a2)
{
  if ( (*a2 & 0xFFFFFFF3) != 0 || (~*a2 & a2[1]) != 0 )
    return 3221225485LL;
  if ( !PspIsContextAdmin() )
    return 3221225506LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  *((_QWORD *)Object + 224) = *(_QWORD *)a2;
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetJobEnergyTrackingStateCallback,
    0,
    (int)PspSetProcessEnergyTrackingStateCallback,
    (__int64)a2,
    5);
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return 0LL;
}
