/*
 * XREFs of KeGetThreadWorkloadClassCount @ 0x14036F254
 * Callers:
 *     KiInitializeThreadCycleTable @ 0x140A8CCC0 (KiInitializeThreadCycleTable.c)
 *     KiAllocateHeteroConfigBuffer @ 0x140A8EA50 (KiAllocateHeteroConfigBuffer.c)
 * Callees:
 *     <none>
 */

__int64 KeGetThreadWorkloadClassCount()
{
  return (unsigned int)KiHgsPlusConfiguration;
}
