/*
 * XREFs of ZwWriteFile @ 0x14041AE60
 * Callers:
 *     DifZwWriteFileWrapper @ 0x1405F8460 (DifZwWriteFileWrapper.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     CmpDoFileWrite @ 0x1406895CC (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1406BB3D0 (EtwpFlushBufferToLogfile.c)
 *     RtlpGetSetBootStatusData @ 0x1407EC96C (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeSaveBuffer @ 0x1407F5B4C (EtwpRealtimeSaveBuffer.c)
 *     EtwpFinalizeHeader @ 0x1407F5E38 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F6FF4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreState @ 0x140852208 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14093BE1C (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14093BF80 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x1409441B4 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14094F3C0 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BDAA0 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA568 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1409EDA44 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1409EE46C (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1409EE63C (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140A0217C (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x140A76E28 (LkmdTelpWriteDumpFile.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
