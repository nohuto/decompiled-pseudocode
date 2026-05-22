/*
 * XREFs of ?Clear@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x1800E903C
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E8D6C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E9838 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E8EE4 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 */

ConsumerControlManager::ConsumerControlNexusDeviceListEntry *__fastcall NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::Clear(
        ConsumerControlManager::ConsumerControlNexusDeviceListEntry **a1)
{
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v2; // rcx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *((ConsumerControlManager::ConsumerControlNexusDeviceListEntry ***)*a1 + 1) != a1
      || (result = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v2,
          *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *a1 = result;
    *((_QWORD *)result + 1) = a1;
    if ( v2 == (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)a1 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v2);
    a1[2] = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)((char *)a1[2] - 1);
  }
  return result;
}
