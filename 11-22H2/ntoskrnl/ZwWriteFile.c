/*
 * XREFs of ZwWriteFile @ 0x14041A7A0
 * Callers:
 *     DifZwWriteFileWrapper @ 0x1405F84F0 (DifZwWriteFileWrapper.c)
 *     EtwpRealtimeSaveState @ 0x140682854 (EtwpRealtimeSaveState.c)
 *     CmpDoFileWrite @ 0x1406895CC (CmpDoFileWrite.c)
 *     EtwpFlushBufferToLogfile @ 0x1406BB3D0 (EtwpFlushBufferToLogfile.c)
 *     RtlpGetSetBootStatusData @ 0x1407ECEEC (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeSaveBuffer @ 0x1407F61BC (EtwpRealtimeSaveBuffer.c)
 *     EtwpFinalizeHeader @ 0x1407F64A8 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1407F7664 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreState @ 0x140853118 (EtwpRealtimeRestoreState.c)
 *     DbgkpWerWriteSecondaryData @ 0x14093BECC (DbgkpWerWriteSecondaryData.c)
 *     DbgkpWerWriteTriageDump @ 0x14093C030 (DbgkpWerWriteTriageDump.c)
 *     IopBootLogToFile @ 0x140944264 (IopBootLogToFile.c)
 *     IopLiveDumpWriteBuffer @ 0x14094F470 (IopLiveDumpWriteBuffer.c)
 *     RtlRestoreBootStatusDefaults @ 0x1409BDB50 (RtlRestoreBootStatusDefaults.c)
 *     SmKmStoreFileWriteHeader @ 0x1409DA618 (SmKmStoreFileWriteHeader.c)
 *     EtwpSavePersistedLogger @ 0x1409EDAF4 (EtwpSavePersistedLogger.c)
 *     EtwpWriteBufferCompressed @ 0x1409EE51C (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1409EE6EC (EtwpWriteRemainingCompressedData.c)
 *     CMFFlushHitsFile @ 0x140A0222C (CMFFlushHitsFile.c)
 *     LkmdTelpWriteDumpFile @ 0x140A76E98 (LkmdTelpWriteDumpFile.c)
 *     KdpWriteFileCallback @ 0x140AB4E50 (KdpWriteFileCallback.c)
 *     BapdpProcessBCDCache @ 0x140B38EBC (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B39350 (BapdpProcessVsmKeyBlobs.c)
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
