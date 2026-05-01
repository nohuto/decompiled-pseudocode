/*
 * XREFs of ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x180705DAC
 * Callers:
 *     ?EnableCloudPC@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEAX000@Z @ 0x180705D30 (-EnableCloudPC@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemote.c)
 * Callees:
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x1800B54E0 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ @ 0x180206AA0 (--1-$tip_test@U_tip_OnLaunchedTest@XamlExplorerHostTipTests@@@tip@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18027F1E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@deta.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x180466940 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ??$EnableCloudPCCompleted@PEBG_N@CloudPCTelemetry@@SAX$$QEAPEBG$$QEA_N@Z @ 0x180701F1C (--$EnableCloudPCCompleted@PEBG_N@CloudPCTelemetry@@SAX$$QEAPEBG$$QEA_N@Z.c)
 *     ??$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEBU76@@winrt@@YA?A_PAEBUhstring@0@00@Z @ 0x1807026EC (--$make@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEBU.c)
 *     ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x180705B84 (-DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1807074F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery@@@details@wil@@QEAA_NXZ @ 0x180707C6C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CloudPCFastSwitchDis_ea_180707C6C.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_EnableCloudPCTipTest@@@tip@@QEAA?AV?$test_watcher@U_tip_EnableCloudPCTipTest@@@2@XZ @ 0x180708648 (-start_and_watch_errors@-$tip_test@U_tip_EnableCloudPCTipTest@@@tip@@QEAA-AV-$test_watcher@U_tip.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180725ECC (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::EnableCloudPC(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::hstring *a2,
        winrt::impl **a3,
        const struct winrt::hstring *a4,
        const struct winrt::hstring *a5)
{
  __int64 *v9; // rax
  struct winrt::impl::shared_hstring_header **v10; // rax
  winrt::hstring *v11; // rax
  const WCHAR *v12; // rax
  int v13; // eax
  bool v14; // sf
  const BYTE *lpData; // rax
  DWORD v16; // edx
  LSTATUS v17; // edi
  const struct winrt::Windows::Internal::Shell::RegistrationData *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  bool v21[8]; // [rsp+58h] [rbp-31h] BYREF
  volatile signed __int32 *v22; // [rsp+60h] [rbp-29h] BYREF
  __int128 v23; // [rsp+68h] [rbp-21h] BYREF
  HKEY hKey; // [rsp+78h] [rbp-11h] BYREF
  struct winrt::impl::shared_hstring_header *v25; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v26[48]; // [rsp+88h] [rbp-1h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+2Fh]

  v23 = 0LL;
  tip::tip_test<_tip_EnableCloudPCTipTest>::start_and_watch_errors(&v23, v26);
  tip::tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>::~tip_test<XamlExplorerHostTipTests::_tip_OnLaunchedTest>((__int64)&v23);
  v9 = (__int64 *)winrt::operator+((__int64)&v23, (__int64)a2, (__int64)a3);
  v10 = winrt::operator+(&v25, v9, (__int64)L"\\");
  v11 = (winrt::hstring *)winrt::operator+((__int64)&v22, (__int64)v10, (__int64)a4);
  v12 = winrt::hstring::c_str(v11);
  v13 = RegCreateKeyExW(HKEY_CURRENT_USER, v12, 0, 0LL, 0, 0x20006u, 0LL, &hKey, 0LL);
  v14 = v13 < 0;
  if ( v13 > 0 )
  {
    v13 = (unsigned __int16)v13 | 0x80070000;
    v14 = v13 < 0;
  }
  if ( v14 )
    winrt::throw_hresult(v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v25);
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v23);
  lpData = (const BYTE *)winrt::hstring::c_str(a5);
  v17 = RegSetValueExW(hKey, L"displayName", 0, 1u, lpData, v16);
  if ( v17 )
  {
    winrt::Windows::Internal::Shell::implementation::CloudPCComponent::DisableCloudPC(this, a2, a3, a4);
    if ( v17 < 0 )
      winrt::throw_hresult(v17);
    RegCloseKey(hKey);
    tip::details::test_common_data<1>::complete(v27 + 8);
    v21[0] = 0;
  }
  else
  {
    RegCloseKey(hKey);
    v21[0] = 1;
    v18 = (const struct winrt::Windows::Internal::Shell::RegistrationData *)winrt::make<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,winrt::hstring const &>(
                                                                              &v22,
                                                                              (winrt::impl **)a4,
                                                                              a3,
                                                                              (winrt::impl **)a5);
    winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(v18, v21);
    if ( v22 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::GetImpl'::`2'::impl) )
    {
      LOBYTE(v19) = wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::GetImpl'::`2'::impl) != 0;
      LOBYTE(v20) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_CloudPCFastSwitchDiscovery>::GetImpl'::`2'::impl,
        v19,
        v20);
    }
    tip::details::test_common_data<1>::complete(v27 + 8);
    v21[0] = 1;
  }
  *(_QWORD *)&v23 = winrt::hstring::c_str(a4);
  CloudPCTelemetry::EnableCloudPCCompleted<unsigned short const *,bool>((__int64 *)&v23, v21);
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v26);
}
