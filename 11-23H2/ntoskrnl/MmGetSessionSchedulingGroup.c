/*
 * XREFs of MmGetSessionSchedulingGroup @ 0x140A3285C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1405A3E74 (PsSetCpuQuotaInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionSchedulingGroup(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
