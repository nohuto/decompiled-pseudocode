/*
 * XREFs of ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800EA840
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E8D6C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800EA184 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800EA274 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?Initialize@ConsumerControlManager@@AEAAJXZ @ 0x1800EA3AC (-Initialize@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800EA748 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z @ 0x1800EA9D0 (-WorkerThreadProcThunk@ConsumerControlManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?Shutdown@ConsumerControlManager@@AEAAXXZ @ 0x1800EA878 (-Shutdown@ConsumerControlManager@@AEAAXXZ.c)
 */

__int64 __fastcall ConsumerControlManager::Release(RefCountedObject *dwData)
{
  unsigned int v2; // ebx

  v2 = RefCountedObject::Release(dwData);
  if ( v2 == 1 )
    ConsumerControlManager::Shutdown((ULONG_PTR)dwData);
  return v2;
}
