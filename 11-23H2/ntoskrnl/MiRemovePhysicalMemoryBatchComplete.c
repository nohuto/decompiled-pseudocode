/*
 * XREFs of MiRemovePhysicalMemoryBatchComplete @ 0x14061BF84
 * Callers:
 *     MiRemoveMdlPages @ 0x140A2E53C (MiRemoveMdlPages.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x14036DB40 (KeInvalidateAllCaches.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14036F59C (MiFlushEntireTbDueToAttributeChange.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140551060 (IoUpdateDumpPhysicalRanges.c)
 */

_QWORD *MiRemovePhysicalMemoryBatchComplete()
{
  MiFlushEntireTbDueToAttributeChange();
  ++dword_140C65B04;
  KeInvalidateAllCaches();
  return IoUpdateDumpPhysicalRanges();
}
