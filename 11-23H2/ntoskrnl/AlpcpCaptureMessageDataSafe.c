/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x14073AB6C
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407381C0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A070 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpCaptureMessageData @ 0x14073AC10 (AlpcpCaptureMessageData.c)
 */

__int64 __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  return AlpcpCaptureMessageData(a1, *(unsigned __int16 *)(a1 + 240), *(_QWORD *)(a1 + 176));
}
