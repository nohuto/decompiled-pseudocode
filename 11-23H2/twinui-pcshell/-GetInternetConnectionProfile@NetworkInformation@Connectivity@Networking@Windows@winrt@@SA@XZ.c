/*
 * XREFs of ?GetInternetConnectionProfile@NetworkInformation@Connectivity@Networking@Windows@winrt@@SA@XZ @ 0x180696254
 * Callers:
 *     ?IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ @ 0x18023F54C (-IsNetworkAvailableAndNotConstrained@LockScreenWidgetPackageHelperBase@@IEAA_NXZ.c)
 * Callees:
 *     ??$call@P6A?AUConnectionProfile@Connectivity@Networking@Windows@winrt@@AEBUINetworkInformationStatics@2345@@Z@?$factory_cache_entry@UNetworkInformation@Connectivity@Networking@Windows@winrt@@UINetworkInformationStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUConnectionProfile@Connectivity@Networking@Windows@2@AEBUINetworkInformationStatics@4562@@Z@Z @ 0x180694304 (--$call@P6A-AUConnectionProfile@Connectivity@Networking@Windows@winrt@@AEBUINetworkInformationSt.c)
 *     ?GetInternetConnectionProfile@?$consume_Windows_Networking_Connectivity_INetworkInformationStatics@UINetworkInformationStatics@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180696200 (-GetInternetConnectionProfile@-$consume_Windows_Networking_Connectivity_INetworkInformationStati.c)
 */

_QWORD *__fastcall winrt::Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile(
        _QWORD *a1)
{
  const struct winrt::Windows::Networking::Connectivity::INetworkInformationStatics *(__fastcall *v3)(const struct winrt::Windows::Networking::Connectivity::INetworkInformationStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098EC28);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics> )
  {
    winrt::impl::consume_Windows_Networking_Connectivity_INetworkInformationStatics<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::GetInternetConnectionProfile(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>,
      a1);
    _InterlockedDecrement64(&qword_18098EC28);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EC28);
    v3 = _lambda_3dbfe9da8b0db60d975c7a909fdd7f97_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Networking::Connectivity::NetworkInformation,winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::call<winrt::Windows::Networking::Connectivity::ConnectionProfile (*)(winrt::Windows::Networking::Connectivity::INetworkInformationStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
