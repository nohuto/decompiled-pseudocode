/*
 * XREFs of AlpcpUnlockMessage @ 0x14071C0B8
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715DD4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140716458 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140716B7C (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140717944 (AlpcpCreateClientPort.c)
 *     NtAlpcOpenSenderProcess @ 0x140718450 (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendCloseMessage @ 0x140718750 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140718CAC (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1407190C0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407193F4 (AlpcpCancelMessagesByRequestor.c)
 *     NtAlpcQueryInformationMessage @ 0x14071AC10 (NtAlpcQueryInformationMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AE10 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14071B3EC (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14071B7F8 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BD90 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407381C0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpLookupMessage @ 0x140738AA0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140739290 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x140739AC0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B680 (AlpcpReceiveMessagePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D7C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x14073DED0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1407790EC (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x140779260 (NtAlpcCancelMessage.c)
 *     AlpcpCancelMessage @ 0x1407793FC (AlpcpCancelMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407BB264 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderThread @ 0x1407BB860 (NtAlpcOpenSenderThread.c)
 *     NtSecureConnectPort @ 0x1407C4100 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1407C46BC (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpCreateReserve @ 0x1407D0144 (AlpcpCreateReserve.c)
 *     AlpcReserveDestroyProcedure @ 0x1407E3240 (AlpcReserveDestroyProcedure.c)
 *     LpcpCopyRequestData @ 0x14097842C (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978CA0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1409792C8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x14073BE30 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14097AC10 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
