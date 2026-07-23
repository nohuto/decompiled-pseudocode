/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x14073A024
 * Callers:
 *     AlpcpAllocateMessage @ 0x140716AA4 (AlpcpAllocateMessage.c)
 *     AlpcpSendCloseMessage @ 0x140718750 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140718CAC (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1407190C0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407193F4 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpPrepareViewForDelivery @ 0x14071A468 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A8FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071AA58 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AE10 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCreateView @ 0x14071C524 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x14071EEE0 (AlpcViewDestroyProcedure.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140739290 (AlpcpSendMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B680 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14073BF90 (AlpcpExposeAttributes.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1407790EC (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9BF0 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1407B9FA4 (AlpcpCreateSectionView.c)
 *     AlpcpQueryRemoteView @ 0x1407C4804 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttribute @ 0x1407CDDF4 (AlpcpExposeViewAttribute.c)
 *     AlpcSectionDeleteProcedure @ 0x1407CFFE0 (AlpcSectionDeleteProcedure.c)
 *     AlpcRegionDestroyProcedure @ 0x1407D10E0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DBDC8 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x1407E3240 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1407E90A0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x1409792C8 (AlpcpPortQueryServerInfo.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409796DC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
