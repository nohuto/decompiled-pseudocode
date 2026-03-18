/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x140978F4C
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715BD4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BB90 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x140739E80 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x14073AE40 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D5D0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1407C43EC (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
