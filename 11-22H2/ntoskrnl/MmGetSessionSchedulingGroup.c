/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x140A3261C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1405A3A14 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
