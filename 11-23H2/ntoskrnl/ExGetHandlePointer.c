/*
 * XREFs of ExGetHandlePointer @ 0x14022F830
 * Callers:
 *     NtWriteFile @ 0x1406B6BD0 (NtWriteFile.c)
 *     ObWaitForMultipleObjects @ 0x1406E38C0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x1406E76B0 (ObpCloseHandle.c)
 *     PspReferenceCidTableEntry @ 0x1406FB3C0 (PspReferenceCidTableEntry.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14073FA38 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObSetHandleAttributes @ 0x14073FAE0 (ObSetHandleAttributes.c)
 *     ObCloseHandleTableEntry @ 0x14073FFB4 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandle @ 0x14074A12C (ObpReferenceObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x1407B06EC (ObInheritObjectHandle.c)
 *     ObpEnumFindHandleProcedure @ 0x1407B5190 (ObpEnumFindHandleProcedure.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD634 (ObpReferenceProcessObjectByHandle.c)
 *     IopIsFileOpenOrSection @ 0x1408A4F20 (IopIsFileOpenOrSection.c)
 *     ObpCaptureHandleInformation @ 0x1408A5640 (ObpCaptureHandleInformation.c)
 *     ObpCaptureHandleInformationEx @ 0x1408A5750 (ObpCaptureHandleInformationEx.c)
 *     PnpHandleProcessWalkWorker @ 0x140958340 (PnpHandleProcessWalkWorker.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14097B440 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x14097C314 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EF3A0 (EtwpObjectHandleEnumCallback.c)
 *     ExQueryProcessHandleInformation @ 0x1409F9164 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ExGetHandlePointer(__int64 *a1)
{
  return (*a1 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
}
