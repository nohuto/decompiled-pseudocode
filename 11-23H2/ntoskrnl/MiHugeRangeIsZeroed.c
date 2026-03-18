/*
 * XREFs of MiHugeRangeIsZeroed @ 0x140620D2C
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140A4431C (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiHugeRangeIsZeroed(__int64 a1, int a2)
{
  return (*(_DWORD *)(qword_140C67DF0 + 8LL * (a2 & 0x3FFFFF)) & 0x10000) == 0;
}
