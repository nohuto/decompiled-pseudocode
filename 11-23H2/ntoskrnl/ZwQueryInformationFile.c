/*
 * XREFs of ZwQueryInformationFile @ 0x14041AF80
 * Callers:
 *     RtlFileMapMapView @ 0x1403B1320 (RtlFileMapMapView.c)
 *     CmpAdjustFileCFSafety @ 0x1404197E0 (CmpAdjustFileCFSafety.c)
 *     DbgkCaptureLiveKernelDump @ 0x14053C108 (DbgkCaptureLiveKernelDump.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405510E4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055E140 (SecureDump_LoadCertAndProvisionKey.c)
 *     DifZwQueryInformationFileWrapper @ 0x1405F4520 (DifZwQueryInformationFileWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671490 (BiLogFileOwnerProcess.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpGetFileSize @ 0x140751130 (CmpGetFileSize.c)
 *     AslFileMappingCreate @ 0x140757F3C (AslFileMappingCreate.c)
 *     EtwpUpdateFileHeader @ 0x1407F6FF4 (EtwpUpdateFileHeader.c)
 *     PopCreateHiberFile @ 0x1408004E0 (PopCreateHiberFile.c)
 *     KsepShimDatabaseTime @ 0x1408082CC (KsepShimDatabaseTime.c)
 *     EtwpRealtimeRestoreState @ 0x140852208 (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14094F21C (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x14096EE00 (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E4F0 (PfpQueryFileExtentsRequest.c)
 *     PopValidateHiberFileSize @ 0x140989270 (PopValidateHiberFileSize.c)
 *     PopZeroHiberFile @ 0x140989490 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D96C4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA568 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140A02490 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
