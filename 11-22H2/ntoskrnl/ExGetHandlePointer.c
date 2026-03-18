/*
 * XREFs of ExGetHandlePointer @ 0x14022F740
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E3940 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E63B0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7730 (ObpCloseHandle.c)
 *     PspReferenceCidTableEntry @ 0x1406FB260 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073FD58 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x14073FE00 (ObSetHandleAttributes.c)
 *     ObCloseHandleTableEntry @ 0x1407402D4 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x14074A44C (ObpReferenceObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x1407B0AAC (ObInheritObjectHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x1407B5460 (ObpEnumFindHandleProcedure.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD8F4 (ObpReferenceProcessObjectByHandle.c)
 *     IopIsFileOpenOrSection @ 0x1408A51B0 (IopIsFileOpenOrSection.c)
 *     ObpCaptureHandleInformation @ 0x1408A58D0 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x1408A59E0 (ObpCaptureHandleInformationEx.c)
 *     PnpHandleProcessWalkWorker @ 0x1409581F0 (PnpHandleProcessWalkWorker.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14097B2F0 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x14097C1C4 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EF1C0 (EtwpObjectHandleEnumCallback.c)
 *     ExQueryProcessHandleInformation @ 0x1409F8F84 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}
