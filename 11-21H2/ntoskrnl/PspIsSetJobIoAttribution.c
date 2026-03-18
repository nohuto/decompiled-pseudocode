/*
 * XREFs of PspIsSetJobIoAttribution @ 0x1406D4C5C
 * Callers:
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 *     PspSetJobIoAttribution @ 0x1406D4A68 (PspSetJobIoAttribution.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

char __fastcall PspIsSetJobIoAttribution(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v4; // bl

  v3 = a1[158];
  v4 = 0;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 1540) )
      return 1;
    v3 = *(_QWORD *)(v3 + 1264);
  }
  if ( !a3 && (int)PspEnumJobsAndProcessesInJobHierarchy(a1, (__int64)a1, 5) < 0 )
    return 1;
  return v4;
}
