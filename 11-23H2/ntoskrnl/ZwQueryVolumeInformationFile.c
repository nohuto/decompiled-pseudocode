/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x14041BA10
 * Callers:
 *     DifZwQueryVolumeInformationFileWrapper @ 0x1405F6140 (DifZwQueryVolumeInformationFileWrapper.c)
 *     CmpGetVolumeClusterSize @ 0x14068936C (CmpGetVolumeClusterSize.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1406899A8 (CmpGetVolumeLogFileSizeCap.c)
 *     EtwpFinalizeHeader @ 0x1407F6108 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1407F69A0 (EtwpCreateLogFile.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E6F0 (PfpQueryFileExtentsRequest.c)
 *     PopValidateHiberFileSize @ 0x140989470 (PopValidateHiberFileSize.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8EFC (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D98C4 (SmKmStoreFileCreate.c)
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
