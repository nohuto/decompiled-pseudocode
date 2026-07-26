/*
 * XREFs of ndisEmptyPeriodicReceivesQueue @ 0x1C00A3EB0
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0006474 (ndisSwitchMiniportReceiveFunction.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C00A2FBC (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0003230 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A354C (ndisDoPeriodicReceivesIndication.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C00A5498 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C00A5580 (ndisTracePeriodicReceivesStart.c)
 */

struct _KTHREAD *__fastcall ndisEmptyPeriodicReceivesQueue(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  struct _KTHREAD *result; // rax
  struct _NET_BUFFER_LIST *QueuedHead; // rdi
  KSPIN_LOCK *p_SpinLock; // rsi
  char v7; // bp
  __int64 Clock; // r14
  unsigned int v9; // edi
  __int64 v10; // rax

  result = (struct _KTHREAD *)a1->PeriodicReceiveQueue.QueuedHead;
  QueuedHead = 0LL;
  if ( result )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    result = (struct _KTHREAD *)(unsigned int)a1->PeriodicReceiveQueue.NumMQueuedNbls;
    a1->PeriodicReceiveQueue.TrackingDequeued += (unsigned int)result;
    if ( a2 )
      a1->PeriodicReceiveQueue.TrackingEmptied += (unsigned int)result;
    else
      a1->PeriodicReceiveQueue.NumNblsDequeued += (int)result;
  }
  a1->PeriodicReceiveQueue.QueuedHead = 0LL;
  a1->PeriodicReceiveQueue.QueuedTail = 0LL;
  a1->PeriodicReceiveQueue.NumMQueuedNbls = 0;
  if ( QueuedHead )
  {
    a1->PeriodicReceiveQueue.LockThread = 0LL;
    p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    if ( a2 )
    {
      ndisReturnNetBufferListsInternal(a1, QueuedHead, 0, 0LL);
    }
    else
    {
      if ( BYTE1(dword_1C00EE5E8) )
      {
        v7 = 1;
        ndisTracePeriodicReceivesStart(a1);
        Clock = WmiGetClock(0LL, 0LL);
      }
      else
      {
        Clock = 0LL;
        v7 = 0;
      }
      v9 = ndisDoPeriodicReceivesIndication((char *)a1, QueuedHead);
      if ( v7 )
      {
        v10 = WmiGetClock(0LL, 0LL);
        ndisTracePeriodicReceivesEnd(a1, v10 - Clock, v9);
      }
    }
    KeAcquireSpinLockAtDpcLevel(p_SpinLock);
    result = KeGetCurrentThread();
    a1->PeriodicReceiveQueue.LockThread = result;
  }
  return result;
}
