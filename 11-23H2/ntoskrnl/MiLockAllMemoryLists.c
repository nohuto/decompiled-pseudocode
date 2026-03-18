/*
 * XREFs of MiLockAllMemoryLists @ 0x140650938
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC84C (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIterateOverPartitions @ 0x14062940C (MiIterateOverPartitions.c)
 */

void MiLockAllMemoryLists()
{
  MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiLockMemoryLists, 1LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67270);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67260);
}
