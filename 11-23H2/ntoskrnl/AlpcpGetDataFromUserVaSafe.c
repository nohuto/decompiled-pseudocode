/*
 * XREFs of AlpcpGetDataFromUserVaSafe @ 0x14097914C
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x140715DD4 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14071BD90 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14073A070 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x14073B030 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x14073D7C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1407C46BC (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall AlpcpGetDataFromUserVaSafe(__int64 a1, void *a2)
{
  return memmove(a2, *(const void **)(a1 + 176), *(unsigned __int16 *)(a1 + 240));
}
