/*
 * XREFs of ?OnDeviceAdded@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@56@AEBUDeviceInformation@8956@@Z @ 0x1806FB9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowAddedEventArgs@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180400648 (-Id@-$consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs@UIRemoteSystemWindowAdded.c)
 *     ?Append@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@winrt@@Uhstring@5@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806F9D7C (-Append@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@Uhstring@winrt@@@Collections.c)
 *     ?IsPaired@?$consume_Windows_Devices_Enumeration_IDeviceInformationPairing@UIDeviceInformationPairing@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806FB584 (-IsPaired@-$consume_Windows_Devices_Enumeration_IDeviceInformationPairing@UIDeviceInformationPai.c)
 *     ?Pairing@?$consume_Windows_Devices_Enumeration_IDeviceInformation2@UDeviceInformation@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1806FBB14 (-Pairing@-$consume_Windows_Devices_Enumeration_IDeviceInformation2@UDeviceInformation@Enumeratio.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::OnDeviceAdded(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        const struct winrt::Windows::Devices::Enumeration::DeviceWatcher *a2,
        const struct winrt::Windows::Devices::Enumeration::DeviceInformation *a3)
{
  volatile signed __int32 *v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+68h] [rbp+20h] BYREF

  winrt::impl::consume_Windows_Internal_Shell_IRemoteSystemWindowAddedEventArgs<winrt::Windows::Internal::Shell::IRemoteSystemWindowAddedEventArgs>::Id(
    (__int64 *)a3,
    &v7);
  ++*((_DWORD *)this + 100);
  winrt::impl::consume_Windows_Devices_Enumeration_IDeviceInformation2<winrt::Windows::Devices::Enumeration::DeviceInformation>::Pairing(
    a3,
    &v6);
  if ( v6 )
  {
    if ( winrt::impl::consume_Windows_Devices_Enumeration_IDeviceInformationPairing<winrt::Windows::Devices::Enumeration::IDeviceInformationPairing>::IsPaired(&v6) )
    {
      v5 = v7;
      winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::hstring>,winrt::hstring>::Append(
        (_QWORD *)this + 51,
        &v5);
    }
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
}
