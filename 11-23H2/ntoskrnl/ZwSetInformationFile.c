/*
 * XREFs of ZwSetInformationFile @ 0x14041B5D0
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x1405F7380 (DifZwSetInformationFileWrapper.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x14074D5E8 (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x1407F6108 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1407F69A0 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1407F72C4 (EtwpUpdateFileHeader.c)
 *     PopCreateHiberFile @ 0x1408007B0 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x140857620 (EtwpRealtimeZeroTruncateLogfile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140958450 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14096F000 (IopFileUtilClearAttributes.c)
 *     PopResizeHiberFile @ 0x1409890E0 (PopResizeHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D98C4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409DA028 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1409EDCD4 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x140A11C28 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x140A1AB98 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A1B21C (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CFB4 (CmpOpenFileWithExtremePrejudice.c)
 *     IopFileUtilRename @ 0x140B6E048 (IopFileUtilRename.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
