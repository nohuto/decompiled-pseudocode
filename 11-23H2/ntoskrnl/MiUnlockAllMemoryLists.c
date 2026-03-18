/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140652804
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14062940C (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67260);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67270);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
