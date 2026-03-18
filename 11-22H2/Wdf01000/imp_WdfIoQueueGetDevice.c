/*
 * XREFs of imp_WdfIoQueueGetDevice @ 0x1C0005F70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  FxIoQueue *pQueue; // [rsp+30h] [rbp+8h] BYREF

  pQueue = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Queue, 0x1003u, (void **)&pQueue);
  return (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pQueue->m_DeviceBase);
}
