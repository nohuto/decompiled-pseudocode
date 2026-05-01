/*
 * XREFs of ??1?$event_revoker@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@$MP8type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1803F94B0
 * Callers:
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803F98A8 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::DiscoverabilityManager_::_1_::dtor$8 @ 0x1806F98D3 (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--Discovera_ea_1806F98D3.c)
 *     ??1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1806F9A9C (--1DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??_9type@?$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@winrt@@$BDI@AA @ 0x1802942E4 (--_9type@-$abi@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@X@impl@winrt@@$BDI@AA.c)
 *     ?get@?$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18040AF1C (-get@-$weak_ref@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@winrt@@QEBA@XZ.c)
 */

void __fastcall __1__event_revoker_UIDeviceWatcher_Enumeration_Devices_Windows_winrt___MP8type___abi_UIDeviceWatcher_Enumeration_Devices_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = (__int64 *)winrt::weak_ref<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::get(a1, &v3);
    if ( *v2 )
       winrt::impl::abi<winrt::Windows::Devices::Enumeration::IDeviceWatcher,void>::type::`vcall'{56,{flat}}(*v2);
    if ( *v2 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
