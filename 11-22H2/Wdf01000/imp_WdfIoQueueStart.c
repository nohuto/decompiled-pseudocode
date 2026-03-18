/*
 * XREFs of imp_WdfIoQueueStart @ 0x1C0061CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00667A8 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 */

void __fastcall imp_WdfIoQueueStart(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  FxIoQueue *v2; // rbx
  unsigned __int8 v3; // r8
  unsigned __int16 v4; // r9
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+40h] [rbp+18h] BYREF

  pQueue = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, (void **)&pQueue);
  v2 = pQueue;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(pQueue, &PreviousIrql, v3);
  FxIoQueue::SetState(v2, FxIoQueueSetDispatchRequests|0x1);
  if ( v2->m_Queue.m_RequestCount > 0 )
  {
    v2->m_TransitionFromEmpty = 1;
    v2->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  }
  FxIoQueue::DispatchEvents(v2, PreviousIrql, 0LL, v4);
}
