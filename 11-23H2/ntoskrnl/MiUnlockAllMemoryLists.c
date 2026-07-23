/*
 * XREFs of MiUnlockAllMemoryLists @ 0x140652D54
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14062995C (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67260);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67270);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
