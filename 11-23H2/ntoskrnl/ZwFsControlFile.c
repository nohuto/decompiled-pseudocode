/*
 * XREFs of ZwFsControlFile @ 0x14041B810
 * Callers:
 *     DifZwFsControlFileWrapper @ 0x1405F0FC0 (DifZwFsControlFileWrapper.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063BC40 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x1407EC660 (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140800DDC (PopSanityCheckHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1408518D8 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E6F0 (PfpQueryFileExtentsRequest.c)
 *     PopClearHiberFileSignature @ 0x14098864C (PopClearHiberFileSignature.c)
 *     SmKmStoreFileGetExtents @ 0x1409DA0C4 (SmKmStoreFileGetExtents.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
