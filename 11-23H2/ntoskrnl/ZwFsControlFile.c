/*
 * XREFs of ZwFsControlFile @ 0x14041B480
 * Callers:
 *     DifZwFsControlFileWrapper @ 0x1405F0A50 (DifZwFsControlFileWrapper.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B6F0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x1407EC390 (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x1408004E0 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x140800B0C (PopSanityCheckHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1408515D8 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E4F0 (PfpQueryFileExtentsRequest.c)
 *     PopClearHiberFileSignature @ 0x14098844C (PopClearHiberFileSignature.c)
 *     SmKmStoreFileGetExtents @ 0x1409D9EC4 (SmKmStoreFileGetExtents.c)
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
  return KiServiceInternal(FileHandle, Event);
}
