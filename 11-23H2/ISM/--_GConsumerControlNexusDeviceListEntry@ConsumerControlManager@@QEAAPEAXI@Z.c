/*
 * XREFs of ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E8EE4
 * Callers:
 *     ??1?$unique_ptr@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@U?$default_delete@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800E8D4C (--1-$unique_ptr@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@U-$default_delete@ULampArra.c)
 *     ?Clear@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800E903C (-Clear@-$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800E9398 (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x1800EA008 (--1ConsumerControlManager@@EEAA@XZ.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800EA4C4 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800EA8FC (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

ConsumerControlManager::ConsumerControlNexusDeviceListEntry *__fastcall ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry *this)
{
  RefCountedObject *v2; // rcx

  v2 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v2);
  }
  operator delete(this);
  return this;
}
