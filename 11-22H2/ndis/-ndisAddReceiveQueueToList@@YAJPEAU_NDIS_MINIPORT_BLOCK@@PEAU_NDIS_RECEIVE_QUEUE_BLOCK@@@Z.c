/*
 * XREFs of ?ndisAddReceiveQueueToList@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_QUEUE_BLOCK@@@Z @ 0x1C008341C
 * Callers:
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0083480 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAddReceiveQueueToList(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_RECEIVE_QUEUE_BLOCK *a2)
{
  _LIST_ENTRY *p_ReceiveQueueList; // r9
  unsigned int v3; // r8d
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  unsigned int QueueId; // ecx
  _LIST_ENTRY *NextMiniport; // rcx
  _LIST_ENTRY *v8; // rax

  p_ReceiveQueueList = &a1->ReceiveQueueList;
  v3 = 0;
  Flink = (struct _NDIS_MINIPORT_BLOCK *)a1->ReceiveQueueList.Flink;
  if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveQueueList )
  {
LABEL_6:
    NextMiniport = (_LIST_ENTRY *)Flink->NextMiniport;
    v8 = NextMiniport->Flink;
    if ( NextMiniport->Flink->Blink != NextMiniport )
      __fastfail(3u);
    a2->AdapterLink.Flink = v8;
    a2->AdapterLink.Blink = NextMiniport;
    v8->Blink = &a2->AdapterLink;
    NextMiniport->Flink = &a2->AdapterLink;
    ++a1->NumReceiveQueues;
  }
  else
  {
    QueueId = a2->QueueId;
    while ( Flink->PcwDatapathEventMask != QueueId )
    {
      if ( Flink->PcwDatapathEventMask <= QueueId )
      {
        Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
        if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)p_ReceiveQueueList )
          continue;
      }
      goto LABEL_6;
    }
    return (unsigned int)-1073741270;
  }
  return v3;
}
