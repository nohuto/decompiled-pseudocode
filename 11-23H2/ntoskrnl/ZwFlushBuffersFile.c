/*
 * XREFs of ZwFlushBuffersFile @ 0x14041BA50
 * Callers:
 *     CmpDoFileFlush @ 0x1402F66AC (CmpDoFileFlush.c)
 *     DifZwFlushBuffersFileWrapper @ 0x1405F09E0 (DifZwFlushBuffersFileWrapper.c)
 *     RtlpGetSetBootStatusData @ 0x1407ECC3C (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x140A159A4 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A1B21C (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140AA6120 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
