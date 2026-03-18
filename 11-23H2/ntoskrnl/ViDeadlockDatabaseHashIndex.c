/*
 * XREFs of ViDeadlockDatabaseHashIndex @ 0x140AD8D84
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405D1828 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405D1988 (ViDeadlockRemoveMemoryRangeThreads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ViDeadlockDatabaseHashIndex(unsigned __int64 a1)
{
  return (a1 >> 12) % 0x3FF;
}
