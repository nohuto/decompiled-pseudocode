/*
 * XREFs of ZwFlushBuffersFile @ 0x14041B000
 * Callers:
 *     CmpDoFileFlush @ 0x1402F641C (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x1405F0500 (DifZwFlushBuffersFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x1407ECEEC (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x140800B90 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x140A157A4 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A1B01C (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140AA6370 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
