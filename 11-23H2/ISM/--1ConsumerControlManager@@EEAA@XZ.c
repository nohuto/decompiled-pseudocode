/*
 * XREFs of ??1ConsumerControlManager@@EEAA@XZ @ 0x1800EA008
 * Callers:
 *     ??_GConsumerControlManager@@EEAAPEAXI@Z @ 0x1800EA1E0 (--_GConsumerControlManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E8EE4 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800EA184 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 */

void __fastcall ConsumerControlManager::~ConsumerControlManager(ConsumerControlManager *this)
{
  unsigned int v2; // edx
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v3; // rbx
  ConsumerControlManager::ConsumerControlDeviceCommandListEntry *v4; // rcx
  __int64 v5; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v6; // rbx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v7; // rcx
  __int64 v8; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v9; // rbx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v10; // rcx
  __int64 v11; // rax

  *(_QWORD *)this = &ConsumerControlManager::`vftable';
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 14);
  v3 = (ConsumerControlManager *)((char *)this + 64);
  while ( 1 )
  {
    v4 = *(ConsumerControlManager::ConsumerControlDeviceCommandListEntry **)v3;
    if ( *(ConsumerControlManager::ConsumerControlDeviceCommandListEntry **)(*(_QWORD *)v3 + 8LL) != v3
      || (v5 = *(_QWORD *)v4,
          *(ConsumerControlManager::ConsumerControlDeviceCommandListEntry **)(*(_QWORD *)v4 + 8LL) != v4) )
    {
LABEL_17:
      __fastfail(3u);
    }
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      break;
    ConsumerControlManager::ConsumerControlDeviceCommandListEntry::`scalar deleting destructor'(v4, v2);
    --*((_QWORD *)this + 10);
  }
  v6 = (ConsumerControlManager *)((char *)this + 40);
  while ( 1 )
  {
    v7 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v6;
    if ( *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_17;
    v8 = *(_QWORD *)v7;
    if ( *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_17;
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( v7 == v6 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v7);
    --*((_QWORD *)this + 7);
  }
  v9 = (ConsumerControlManager *)((char *)this + 16);
  while ( 1 )
  {
    v10 = *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)v9;
    if ( *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_17;
    v11 = *(_QWORD *)v10;
    if ( *(ConsumerControlManager::ConsumerControlNexusDeviceListEntry **)(*(_QWORD *)v10 + 8LL) != v10 )
      goto LABEL_17;
    *(_QWORD *)v9 = v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( v10 == v9 )
      break;
    ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v10);
    --*((_QWORD *)this + 4);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
