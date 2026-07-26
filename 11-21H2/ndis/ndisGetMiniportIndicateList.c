/*
 * XREFs of ndisGetMiniportIndicateList @ 0x1C0039718
 * Callers:
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C0039940 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A4F38 (-ndisPeriodicReceivesGetMaxNblCount@@YAKPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

_NET_BUFFER_LIST *__fastcall ndisGetMiniportIndicateList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NET_BUFFER_LIST *QueuedHead; // rdi
  unsigned int MaxNblCount; // esi
  int v4; // edx
  _NET_BUFFER_LIST *i; // rcx

  QueuedHead = 0LL;
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount(a1);
  KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    v4 = 0;
    for ( i = QueuedHead; i; i = (_NET_BUFFER_LIST *)i->Link.Alignment )
    {
      ++a1->PeriodicReceiveQueue.TrackingDequeued;
      ++v4;
      if ( !--MaxNblCount )
        break;
    }
    if ( i )
    {
      a1->PeriodicReceiveQueue.QueuedHead = (_NET_BUFFER_LIST *)i->Link.Alignment;
      i->Link.Alignment = 0LL;
      if ( a1->PeriodicReceiveQueue.QueuedHead )
      {
LABEL_9:
        a1->PeriodicReceiveQueue.NumMQueuedNbls -= v4;
        a1->PeriodicReceiveQueue.NumNblsDequeued += v4;
        goto LABEL_10;
      }
    }
    else
    {
      a1->PeriodicReceiveQueue.QueuedHead = 0LL;
    }
    a1->PeriodicReceiveQueue.QueuedTail = 0LL;
    goto LABEL_9;
  }
LABEL_10:
  a1->PeriodicReceiveQueue.LockThread = 0LL;
  KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  return QueuedHead;
}
