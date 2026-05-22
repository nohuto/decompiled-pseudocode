/*
 * XREFs of ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800F90A0
 * Callers:
 *     ??1ConsumerControlManager@@EEAA@XZ @ 0x1800F8F24 (--1ConsumerControlManager@@EEAA@XZ.c)
 *     ?ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ @ 0x1800F93D4 (-ProcessAddRemoveDeviceCommands@ConsumerControlManager@@AEAAJXZ.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800F9658 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800F9750 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
ConsumerControlManager::ConsumerControlDeviceCommandListEntry *__fastcall ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry *this)
{
  RefCountedObject *v2; // rcx
  ULONG_PTR v3; // rcx

  v2 = (RefCountedObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    RefCountedObject::Release(v2);
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    ConsumerControlManager::Release(v3);
  }
  operator delete(this);
  return this;
}
