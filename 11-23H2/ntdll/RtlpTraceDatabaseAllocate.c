/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x180110BB8
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x180110810 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x180110C3C (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
