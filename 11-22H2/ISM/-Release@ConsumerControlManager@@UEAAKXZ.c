/*
 * XREFs of ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800F9750
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800F7CEC (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800F90A0 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800F9184 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800F92BC (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800F9658 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x1800F98E0 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?Shutdown@ConsumerControlManager@@AEAAXXZ @ 0x1800F9788 (-Shutdown@ConsumerControlManager@@AEAAXXZ.c)
 */

__int64 __fastcall ConsumerControlManager::Release(RefCountedObject *dwData)
{
  unsigned int v2; // ebx

  v2 = RefCountedObject::Release(dwData);
  if ( v2 == 1 )
    ConsumerControlManager::Shutdown((ULONG_PTR)dwData);
  return v2;
}
