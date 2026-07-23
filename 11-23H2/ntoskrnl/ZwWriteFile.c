/*
 * XREFs of ZwWriteFile @ 0x14041B1F0
 * Callers:
 *     DifZwWriteFileWrapper @ 0x1405F89D0 (DifZwWriteFileWrapper.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     CmpDoFileWrite @ 0x1406895CC (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1406BB400 (EtwpFlushBufferToLogfile.c)
 *     RtlpGetSetBootStatusData @ 0x1407ECC3C (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeSaveBuffer @ 0x1407F5E1C (EtwpRealtimeSaveBuffer.c)
 *     EtwpFinalizeHeader @ 0x1407F6108 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F72C4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreState @ 0x140852508 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14093C01C (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14093C180 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1409443B4 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14094F5C0 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BDCA0 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA768 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1409EDCD4 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1409EE6FC (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1409EE8CC (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140A0240C (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x140A770D8 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x140AB3E60 (KdpWriteFileCallback.c)
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B4FA18 (BapdpProcessVsmKeyBlobs.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
