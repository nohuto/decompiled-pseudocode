/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x14041AFC0
 * Callers:
 *     DifZwQueryVolumeInformationFileWrapper @ 0x1405F5C60 (DifZwQueryVolumeInformationFileWrapper.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406899A8 (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpFinalizeHeader @ 0x1407F64A8 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1407F6D40 (EtwpCreateLogFile.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E5A0 (PfpQueryFileExtentsRequest.c)
 *     PopValidateHiberFileSize @ 0x140989320 (PopValidateHiberFileSize.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8DAC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D9774 (SmKmStoreFileCreate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
