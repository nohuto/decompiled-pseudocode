/*
 * XREFs of ?IsNetworkConnected@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1807344F8
 * Callers:
 *     ?IsNetworkConnected@?$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtils@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1807344A0 (-IsNetworkConnected@-$produce@UNetworkConnectionUtils@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800D5B1C (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ??$call@P6A?AUConnectionProfile@Connectivity@Networking@Windows@winrt@@AEBUINetworkInformationStatics@2345@@Z@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUConnectionProfile@Connectivity@Networking@Windows@2@AEBUINetworkInformationStatics@4562@@Z@Z @ 0x180694304 (--$call@P6A-AUConnectionProfile@Connectivity@Networking@Windows@winrt@@AEBUINetworkInformationSt.c)
 *     ?GetInternetConnectionProfile@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180696200 (-GetInternetConnectionProfile@-$consume_Windows_Networking_Connectivity_INetworkInformationStati.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180696938 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils::IsNetworkConnected(
        winrt::Windows::Internal::Shell::implementation::NetworkConnectionUtils *this)
{
  char v1; // bl
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp+20h] BYREF
  const struct winrt::Windows::Networking::Connectivity::INetworkInformationStatics *(__fastcall *v4)(const struct winrt::Windows::Networking::Connectivity::INetworkInformationStatics *, __int64); // [rsp+50h] [rbp+28h] BYREF
  __int64 *v5; // [rsp+58h] [rbp+30h]

  v5 = &qword_18098EC28;
  v1 = 1;
  _InterlockedAdd64(&qword_18098EC28, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics> )
  {
    winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::GetInternetConnectionProfile(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>,
      &v3);
    _InterlockedDecrement64(&qword_18098EC28);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EC28);
    v4 = _lambda_3dbfe9da8b0db60d975c7a909fdd7f97_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<winrt::Windows::Networking::Connectivity::ConnectionProfile (*)(winrt::Windows::Networking::Connectivity::INetworkInformationStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v3,
      (void (__fastcall **)(__int64, __int64 *))&v4);
  }
  v4 = 0LL;
  if ( winrt::Windows::Foundation::operator==(&v3, &v4)
    || !(unsigned int)winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel((__int64 *)&v3) )
  {
    v1 = 0;
  }
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  return v1;
}
