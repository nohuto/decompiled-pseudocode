/*
 * XREFs of MiLockAllMemoryLists @ 0x140650E88
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC6BC (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14062995C (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67270);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67260);
}
