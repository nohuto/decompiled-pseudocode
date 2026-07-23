/*
 * XREFs of ZwSetInformationFile @ 0x14041AB80
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x1405F6EA0 (DifZwSetInformationFileWrapper.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x14074D908 (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x1407F64A8 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1407F6D40 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1407F7664 (EtwpUpdateFileHeader.c)
 *     PopCreateHiberFile @ 0x140800B90 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1408582F0 (EtwpRealtimeZeroTruncateLogfile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140958300 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14096EEB0 (IopFileUtilClearAttributes.c)
 *     PopResizeHiberFile @ 0x140988F90 (PopResizeHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D9774 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409D9ED8 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1409EDAF4 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x140A11A28 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x140A1A998 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A1B01C (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CDB4 (CmpOpenFileWithExtremePrejudice.c)
 *     IopFileUtilRename @ 0x140B6F4B4 (IopFileUtilRename.c)
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
