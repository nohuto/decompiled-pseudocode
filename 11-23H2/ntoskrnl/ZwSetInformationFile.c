/*
 * XREFs of ZwSetInformationFile @ 0x14041B240
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x1405F6E10 (DifZwSetInformationFileWrapper.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     CmpCmdHiveClose @ 0x14068B0E4 (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x14074D3F8 (CmpDoFileSetSizeEx.c)
 *     EtwpFinalizeHeader @ 0x1407F5E38 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1407F66D0 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1407F6FF4 (EtwpUpdateFileHeader.c)
 *     PopCreateHiberFile @ 0x1408004E0 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1408573E0 (EtwpRealtimeZeroTruncateLogfile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140958250 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14096EE00 (IopFileUtilClearAttributes.c)
 *     PopResizeHiberFile @ 0x140988EE0 (PopResizeHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D96C4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409D9E28 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1409EDA44 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x140A11978 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x140A1A8E8 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A1AF6C (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CD04 (CmpOpenFileWithExtremePrejudice.c)
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
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
