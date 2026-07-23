/*
 * XREFs of ZwFsControlFile @ 0x14041ADC0
 * Callers:
 *     DifZwFsControlFileWrapper @ 0x1405F0AE0 (DifZwFsControlFileWrapper.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x1407EC910 (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x140800B90 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x1408011BC (PopSanityCheckHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1408524E8 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E5A0 (PfpQueryFileExtentsRequest.c)
 *     PopClearHiberFileSignature @ 0x1409884FC (PopClearHiberFileSignature.c)
 *     SmKmStoreFileGetExtents @ 0x1409D9F74 (SmKmStoreFileGetExtents.c)
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
