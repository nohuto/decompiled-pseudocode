/*
 * XREFs of imp_WdfIoQueueDrain @ 0x1C0061980
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FatalError@FxIoQueue@@QEAAXJ@Z @ 0x1C0063DB4 (-FatalError@FxIoQueue@@QEAAXJ@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0065D48 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 */

void __fastcall imp_WdfIoQueueDrain(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        void (__fastcall *DrainComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  int v6; // eax
  FxIoQueue *pQueue; // [rsp+40h] [rbp+8h] BYREF

  pQueue = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Queue, 0x1003u, (void **)&pQueue);
  v6 = FxIoQueue::QueuePurge(pQueue, 0, 0, DrainComplete, Context);
  if ( v6 < 0 )
    FxIoQueue::FatalError(pQueue, v6);
}
