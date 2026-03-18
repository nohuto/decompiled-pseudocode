/*
 * XREFs of MiUnlockAllMemoryLists @ 0x14038A250
 * Callers:
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14038A2A8 (MiIterateOverPartitions.c)
 */

__int64 MiUnlockAllMemoryLists()
{
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51DE0);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51DF0);
  return MiIterateOverPartitions(MiLockMemoryLists, 0LL);
}
