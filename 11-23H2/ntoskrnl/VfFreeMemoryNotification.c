/*
 * XREFs of VfFreeMemoryNotification @ 0x140AC2118
 * Callers:
 *     MmFreeContiguousMemory @ 0x1403C3600 (MmFreeContiguousMemory.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140AC01C2 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x140AC06EC (VfDeadlockDeleteMemoryRange.c)
 */

void __fastcall VfFreeMemoryNotification(unsigned __int64 a1, __int64 a2)
{
  VfDeadlockDeleteMemoryRange(a1, a2);
  VfRemLockDeleteMemoryRange(a1, a2);
}
