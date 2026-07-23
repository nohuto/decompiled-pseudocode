/*
 * XREFs of VfFreeMemoryNotification @ 0x140AC2108
 * Callers:
 *     MmFreeContiguousMemory @ 0x1403C37E0 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140AC01B2 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x140AC06DC (VfDeadlockDeleteMemoryRange.c)
 */

void __fastcall VfFreeMemoryNotification(unsigned __int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  VfRemLockDeleteMemoryRange(a1, a2);
}
