/*
 * XREFs of ZwFlushBuffersFile @ 0x14041B6C0
 * Callers:
 *     CmpDoFileFlush @ 0x1402F641C (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x1405F0470 (DifZwFlushBuffersFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x1407EC96C (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x1408004E0 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x140A156F4 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A1AF6C (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140AA62B0 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
