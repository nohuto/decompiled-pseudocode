/*
 * XREFs of ExGetHandlePointer @ 0x14022F740
 * Callers:
 *     NtWriteFile @ 0x1406B6A20 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E3890 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6300 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E7680 (ObpCloseHandle.c)
 *     PspReferenceCidTableEntry @ 0x1406FB1B0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     AlpcpLookupMessage @ 0x1407388B0 (AlpcpLookupMessage.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073F848 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x14073F8F0 (ObSetHandleAttributes.c)
 *     ObCloseHandleTableEntry @ 0x14073FDC4 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x140749F3C (ObpReferenceObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x1407B04FC (ObInheritObjectHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x1407B4EB0 (ObpEnumFindHandleProcedure.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD364 (ObpReferenceProcessObjectByHandle.c)
 *     IopIsFileOpenOrSection @ 0x1408A4CD0 (IopIsFileOpenOrSection.c)
 *     ObpCaptureHandleInformation @ 0x1408A53F0 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x1408A5500 (ObpCaptureHandleInformationEx.c)
 *     PnpHandleProcessWalkWorker @ 0x140958140 (PnpHandleProcessWalkWorker.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14097B240 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x14097C114 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EF110 (EtwpObjectHandleEnumCallback.c)
 *     ExQueryProcessHandleInformation @ 0x1409F8ED4 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}
