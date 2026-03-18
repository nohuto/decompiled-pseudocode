/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14073A344
 * Callers:
 *     AlpcpAllocateMessage @ 0x140716914 (AlpcpAllocateMessage.c)
 *     AlpcpSendCloseMessage @ 0x1407185C0 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140718B1C (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140718F30 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140719264 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A2D8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A76C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A8C8 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AC80 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateView @ 0x14071C394 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14071ED50 (AlpcViewDestroyProcedure.c)
 *     AlpcpLookupMessage @ 0x140738DC0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x1407395B0 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B9A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14073C2B0 (AlpcpExposeAttributes.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14077940C (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9EC0 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1407BA274 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x1407C4AC4 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CE0B4 (AlpcpExposeViewAttribute.c)
 *     AlpcSectionDeleteProcedure @ 0x1407D0270 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D1390 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DC078 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1407E34F0 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407E9350 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x140979178 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x14097958C (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx(BugCheckParameter2 - 16, 0LL);
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
