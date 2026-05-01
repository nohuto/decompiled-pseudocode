/*
 * XREFs of ??1?$event_revoker@UIGattCharacteristic@GenericAttributeProfile@Bluetooth@Devices@Windows@winrt@@$MP8type@?$abi@UIGattCharacteristic@GenericAttributeProfile@Bluetooth@Devices@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BKI@AA@impl@winrt@@QEAA@XZ @ 0x1803F9510
 * Callers:
 *     ??1GamingOverlayExperienceManager@@EEAA@XZ @ 0x1803F98A8 (--1GamingOverlayExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_9type@?$abi@UIGattCharacteristic@GenericAttributeProfile@Bluetooth@Devices@Windows@winrt@@X@impl@winrt@@$BKI@AA @ 0x180294304 (--_9type@-$abi@UIGattCharacteristic@GenericAttributeProfile@Bluetooth@Devices@Windows@winrt@@X@i.c)
 */

void __fastcall __1__event_revoker_UIGattCharacteristic_GenericAttributeProfile_Bluetooth_Devices_Windows_winrt___MP8type___abi_UIGattCharacteristic_GenericAttributeProfile_Bluetooth_Devices_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BKI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v3 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic>,
      &v3);
    v4 = v3;
    if ( v3 )
    {
       winrt::impl::abi<winrt::Windows::Devices::Bluetooth::GenericAttributeProfile::IGattCharacteristic,void>::type::`vcall'{168,{flat}}(v3);
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
    }
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
