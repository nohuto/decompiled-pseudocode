/*
 * XREFs of PnpDeleteDeviceActionRequest @ 0x140359D80
 * Callers:
 *     PnpDeviceActionWorker @ 0x1403595D0 (PnpDeviceActionWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D6720 (PnpRemoveDeviceActionRequests.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x140562D1C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBD50 (PiControlGetSetDeviceStatus.c)
 *     PiQueueDeviceRequest @ 0x14096E0E8 (PiQueueDeviceRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDeleteDeviceActionRequest(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 18, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0x32706E50u);
}
