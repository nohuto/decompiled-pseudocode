/*
 * XREFs of AlpcpUnlockMessage @ 0x14071BEB8
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715BD4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140716258 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14071697C (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140717744 (AlpcpCreateClientPort.c)
 *     NtAlpcOpenSenderProcess @ 0x140718250 (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendCloseMessage @ 0x140718550 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140718AAC (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140718EC0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407191F4 (AlpcpCancelMessagesByRequestor.c)
 *     NtAlpcQueryInformationMessage @ 0x14071AA10 (NtAlpcQueryInformationMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AC10 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14071B1EC (AlpcpDispatchReplyToPort.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14071B5F8 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BB90 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140737FD0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpLookupMessage @ 0x1407388B0 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x1407390A0 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x1407398D0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140739E80 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14073B490 (AlpcpReceiveMessagePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D5D0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x14073DCE0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140778EFC (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x140779070 (NtAlpcCancelMessage.c)
 *     AlpcpCancelMessage @ 0x14077920C (AlpcpCancelMessage.c)
 *     AlpcpReceiveDirectMessagePort @ 0x1407BAF94 (AlpcpReceiveDirectMessagePort.c)
 *     NtAlpcOpenSenderThread @ 0x1407BB590 (NtAlpcOpenSenderThread.c)
 *     NtSecureConnectPort @ 0x1407C3E30 (NtSecureConnectPort.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1407C43EC (AlpcpReceiveLegacyConnectionReply.c)
 *     AlpcpCreateReserve @ 0x1407CFE74 (AlpcpCreateReserve.c)
 *     AlpcReserveDestroyProcedure @ 0x1407E2F70 (AlpcReserveDestroyProcedure.c)
 *     LpcpCopyRequestData @ 0x14097822C (LpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140978AA0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     AlpcpPortQueryServerInfo @ 0x1409790C8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x14073BC40 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14097AA10 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpUnlockMessage(ULONG_PTR BugCheckParameter2)
{
  if ( AlpcpMessageLogEnabled )
    AlpcpEnterStateChangeEventMessageLog();
  return AlpcpUnlockBlob(BugCheckParameter2);
}
