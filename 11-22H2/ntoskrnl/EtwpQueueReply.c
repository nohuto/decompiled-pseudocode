/*
 * XREFs of EtwpQueueReply @ 0x14077F3DC
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1406BEDE0 (EtwpDeleteRegistrationObject.c)
 *     EtwpSendReplyDataBlock @ 0x14077F44C (EtwpSendReplyDataBlock.c)
 * Callees:
 *     KeInsertQueue @ 0x14031CB50 (KeInsertQueue.c)
 *     EtwpUnreferenceDataBlock @ 0x140781CF8 (EtwpUnreferenceDataBlock.c)
 *     EtwpAllocDataBlock @ 0x140782148 (EtwpAllocDataBlock.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpQueueReply(PRKQUEUE Queue, unsigned int *a2)
{
  int v3; // edi
  _LIST_ENTRY *Pool2; // rax

  v3 = EtwpAllocDataBlock(a2[1], a2);
  if ( v3 < 0 )
  {
    _InterlockedIncrement(&Queue[1].Header.Lock);
  }
  else
  {
    Pool2 = (_LIST_ENTRY *)ExAllocatePool2(64LL, 56LL, 1920431173LL);
    if ( Pool2 )
    {
      Pool2[1].Flink = 0LL;
      KeInsertQueue(Queue, Pool2);
    }
    else
    {
      v3 = -1073741801;
      _InterlockedIncrement(&Queue[1].Header.Lock);
      EtwpUnreferenceDataBlock(0LL);
    }
  }
  return (unsigned int)v3;
}
