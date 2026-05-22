/*
 * XREFs of ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x1800F8318
 * Callers:
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x1800F8E40 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B674 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@wil@@QEAA_NXZ @ 0x180059DE0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_AmbientDeviceLighting@@@details@w.c)
 *     ??_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800F7E64 (--_GConsumerControlNexusDeviceListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAPEAULampArrayDeviceListEntry@LampArrayRawInputProvider@@PEAU23@@Z @ 0x1800F872C (-RemoveAt@-$NtList@ULampArrayDeviceListEntry@LampArrayRawInputProvider@@@@QEAAPEAULampArrayDevic.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x1800F9658 (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 */

void __fastcall LampArrayRawInputProvider::OnLampArrayRemoved(LampArrayRawInputProvider *this, struct PnpDevice *a2)
{
  char *v4; // rsi
  char *i; // rbx
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v6; // rax
  ConsumerControlManager::ConsumerControlNexusDeviceListEntry *v7; // rax
  RTL_SRWLOCK *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 30) == 65625 )
  {
    v4 = (char *)this + 72;
    for ( i = (char *)*((_QWORD *)this + 9); i != v4; i = *(char **)i )
    {
      if ( a2 == *(struct PnpDevice **)(*((_QWORD *)i + 2) + 16LL) )
      {
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_AmbientDeviceLighting>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_AmbientDeviceLighting>::GetImpl'::`2'::impl) )
        {
          wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 20, &v8);
          v6 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::RemoveAt(
                                                                                v4,
                                                                                i);
          if ( v6 )
            ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v6);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
        }
        else
        {
          v7 = (ConsumerControlManager::ConsumerControlNexusDeviceListEntry *)NtList<LampArrayRawInputProvider::LampArrayDeviceListEntry>::RemoveAt(
                                                                                v4,
                                                                                i);
          if ( v7 )
            ConsumerControlManager::ConsumerControlNexusDeviceListEntry::`scalar deleting destructor'(v7);
        }
        return;
      }
    }
  }
  else if ( IsEdition(6176LL) )
  {
    ConsumerControlManager::QueueAddRemoveDevice(*((ConsumerControlManager **)this + 42), a2, 0);
  }
}
