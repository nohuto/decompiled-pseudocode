/*
 * XREFs of PspDoesJobHierarchyPermitUILimits @ 0x1409B23B8
 * Callers:
 *     PspAssignProcessToJob @ 0x14069FFF0 (PspAssignProcessToJob.c)
 *     NtSetInformationJobObject @ 0x1406A4040 (NtSetInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406A3448 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits(_QWORD *a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl

  v2 = a1[161];
  v3 = 0;
  while ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 1536) & 0x10) != 0 )
      return v3;
    v2 = *(_QWORD *)(v2 + 1288);
  }
  return (a2 & 1) != 0
      || (int)PspEnumJobsAndProcessesInJobHierarchy(
                a1,
                (int)PspDoesJobHierarchyPermitUILimitsCallback,
                0,
                0,
                (__int64)a1,
                1) >= 0;
}
