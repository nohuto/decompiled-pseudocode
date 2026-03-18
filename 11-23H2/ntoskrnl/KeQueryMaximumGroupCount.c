/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1402BE620
 * Callers:
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     NtQueryInformationCpuPartition @ 0x1409B05D0 (NtQueryInformationCpuPartition.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
