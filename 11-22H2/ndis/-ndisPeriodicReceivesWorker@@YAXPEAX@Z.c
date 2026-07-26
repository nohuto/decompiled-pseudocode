/*
 * XREFs of ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C003E930
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     NdisReleaseRWLock @ 0x1C0003280 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C00038D0 (NdisAcquireRWLockRead.c)
 *     ndisGetMiniportIndicateList @ 0x1C003E320 (ndisGetMiniportIndicateList.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C003EA26 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x1C003EAA0 (ndisQueuePeriodicReceivesWorkItem.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F54 (ndisDoPeriodicReceivesIndication.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C00ABB44 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C00ABC2C (ndisTracePeriodicReceivesStart.c)
 */

void __fastcall ndisPeriodicReceivesWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // si
  __int64 Clock; // rdi
  struct _NET_BUFFER_LIST *MiniportIndicateList; // rax
  unsigned int v5; // ebp
  __int64 v6; // rax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( BYTE1(dword_1C00F76B0) )
  {
    v2 = 1;
    ndisTracePeriodicReceivesStart();
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    Clock = 0LL;
    v2 = 0;
  }
  NdisAcquireRWLockRead(Lock, &LockState, 1u);
  MiniportIndicateList = ndisGetMiniportIndicateList(a1);
  v5 = ndisDoPeriodicReceivesIndication(a1, MiniportIndicateList);
  NdisReleaseRWLock(Lock, &LockState);
  if ( v2 )
  {
    v6 = WmiGetClock(0LL, 0LL);
    ndisTracePeriodicReceivesEnd(a1, v6 - Clock, v5);
  }
  a1->PeriodicReceiveQueue.WorkItemQueued = 0;
  _InterlockedOr(v7, 0);
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    ndisQueuePeriodicReceivesWorkItem(a1);
    ndisQueuePeriodicReceivesTimer();
  }
  ndisDereferenceMiniport(a1, 0x4Cu);
}
