/*
 * XREFs of PspDeleteCpuPartition @ 0x1409B12A0
 * Callers:
 *     <none>
 * Callees:
 *     KeDeleteCpuPartition @ 0x140975528 (KeDeleteCpuPartition.c)
 */

__int64 __fastcall PspDeleteCpuPartition(unsigned __int16 *a1)
{
  return KeDeleteCpuPartition(a1);
}
