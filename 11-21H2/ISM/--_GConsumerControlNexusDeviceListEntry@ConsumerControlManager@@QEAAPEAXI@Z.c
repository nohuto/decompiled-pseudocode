/*
 * XREFs of ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800CF82C
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800CF688 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800CF984 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800CFB0C (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x1800D06C4 (--1ConsumerControlManager@@EEAA@XZ.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800D0B80 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800D0F9C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180047390 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
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
