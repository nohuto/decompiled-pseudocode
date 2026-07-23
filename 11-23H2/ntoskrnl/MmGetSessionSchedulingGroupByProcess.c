/*
 * XREFs of MmGetSessionSchedulingGroupByProcess @ 0x1406B64CC
 * Callers:
 *     PsQueryCpuQuotaInformation @ 0x1403B6968 (PsQueryCpuQuotaInformation.c)
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     PspEstablishDfssHierarchy @ 0x1409B24E0 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroupByProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v1 + 48) + 32LL);
}
