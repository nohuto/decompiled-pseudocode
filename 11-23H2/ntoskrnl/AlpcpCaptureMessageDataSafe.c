/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x14073A97C
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140737FD0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x140739E80 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 *     AlpcpCaptureMessageData @ 0x14073AA20 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  return AlpcpCaptureMessageData(a1, *(unsigned __int16 *)(a1 + 240), *(_QWORD *)(a1 + 176));
}
