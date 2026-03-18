/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x140359BE0
 * Callers:
 *     PnpDeviceActionWorker @ 0x140359430 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D6540 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14056265C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD20 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14096DEE8 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
