/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1402BE8B0
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     NtQueryInformationCpuPartition @ 0x1409B07D0 (NtQueryInformationCpuPartition.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
