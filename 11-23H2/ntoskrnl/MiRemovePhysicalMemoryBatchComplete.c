/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x14061C4D4
 * Callers:
 *     MiRemoveMdlPages @ 0x140A2E7EC (MiRemoveMdlPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14036DCE0 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F73C (MiFlushEntireTbDueToAttributeChange.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140551720 (IoUpdateDumpPhysicalRanges.c)
 */

_QWORD *MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140C65B04;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
