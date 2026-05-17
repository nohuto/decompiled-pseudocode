/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x18010F560
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x18010F1A0 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x18010F5E4 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
