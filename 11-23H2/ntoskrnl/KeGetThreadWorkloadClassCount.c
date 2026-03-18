/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x14036F0B4
 * Callers:
 *     KiInitializeThreadCycleTable @ 0x140A8CCC0 (KiInitializeThreadCycleTable.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140A8EBD8 (KiAllocateHeteroConfigBuffer.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}
