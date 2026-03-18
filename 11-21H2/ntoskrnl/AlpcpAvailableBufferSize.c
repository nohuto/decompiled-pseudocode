/*
 * XREFs of AlpcpAvailableBufferSize @ 0x1407A7C84
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1406652DC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1406666B4 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140666C9C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpReadMessageData @ 0x1407A7B20 (AlpcpReadMessageData.c)
 *     AlpcpCaptureMessageData @ 0x1407A7B98 (AlpcpCaptureMessageData.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1407AC020 (AlpcpCaptureMessageDataSafe.c)
 *     LpcpCopyRequestData @ 0x140965C1C (LpcpCopyRequestData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpAvailableBufferSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 96);
  if ( v1 )
    return *(_QWORD *)(v1 + 32) - 40LL;
  else
    return 512LL;
}
