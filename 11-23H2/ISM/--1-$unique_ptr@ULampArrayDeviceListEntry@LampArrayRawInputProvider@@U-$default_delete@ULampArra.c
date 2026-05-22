/*
 * XREFs of ??1?$unique_ptr@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@U?$default_delete@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800E8D4C
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E90CC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E8EE4 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<LampArrayRawInputProvider::LampArrayDeviceListEntry>::~unique_ptr<LampArrayRawInputProvider::LampArrayDeviceListEntry>(
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry **a1,
        unsigned int a2)
{
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v2, a2);
  return result;
}
