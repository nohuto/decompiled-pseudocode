/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1402F5110
 * Callers:
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 *     MiCombineAllPhysicalMemory @ 0x1407F8FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
