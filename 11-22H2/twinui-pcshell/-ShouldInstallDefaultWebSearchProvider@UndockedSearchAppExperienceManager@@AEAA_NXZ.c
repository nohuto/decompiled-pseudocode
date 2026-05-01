/*
 * XREFs of ?ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x18046A628
 * Callers:
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x18046AD4C (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?IsWebSearchProviderInstalled@@YA_NXZ @ 0x1801ED8E8 (-IsWebSearchProviderInstalled@@YA_NXZ.c)
 *     ?IsWebSearchProviderInstalledLatest@@YA_NXZ @ 0x1801ED9B4 (-IsWebSearchProviderInstalledLatest@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ @ 0x1801F0554 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55370801@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$UndockedSearchExperienceManager_SkipInstallDefaultWebProviderApp@PEBGW4SkipInstallDefaultWebProviderAppReason@@@SearchAppExperienceManagerTelemetry@@SAX$$QEAPEBG$$QEAW4SkipInstallDefaultWebProviderAppReason@@@Z @ 0x1804621DC (--$UndockedSearchExperienceManager_SkipInstallDefaultWebProviderApp@PEBGW4SkipInstallDefaultWebP.c)
 *     ??$call@P6A?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@AEBUISearchPolicySettingsStatics@23456@@Z@?$factory_cache_entry@USearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@UISearchPolicySettingsStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@2@AEBUISearchPolicySettingsStatics@45672@@Z@Z @ 0x180462DF0 (--$call@P6A-AUSearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@AEBUISear.c)
 *     ?CanUserInstallStoreApps@@YA_NXZ @ 0x180466EB4 (-CanUserInstallStoreApps@@YA_NXZ.c)
 *     ?IsWebSearchEnabled@?$consume_WindowsUdk_System_UserProfile_SearchSettings_ISearchPolicySettings@UISearchPolicySettings@SearchSettings@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180469170 (-IsWebSearchEnabled@-$consume_WindowsUdk_System_UserProfile_SearchSettings_ISearchPolicySettings.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UndockedSearchAppExperienceManager::ShouldInstallDefaultWebSearchProvider(
        UndockedSearchAppExperienceManager *this)
{
  signed int v3; // eax
  bool v4; // di
  const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *(__fastcall *v5)(const struct winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics *, __int64); // [rsp+50h] [rbp+20h] BYREF
  __int64 v6; // [rsp+58h] [rbp+28h] BYREF
  __int64 v7; // [rsp+60h] [rbp+30h] BYREF
  const unsigned __int16 *v8; // [rsp+68h] [rbp+38h] BYREF

  if ( *((_BYTE *)this + 874) )
    return 0;
  if ( IsWebSearchProviderInstalled() )
  {
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_55370801>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_55370801>::GetImpl'::`2'::impl) )
    {
      LODWORD(v5) = 1;
      goto LABEL_7;
    }
    if ( IsWebSearchProviderInstalledLatest() )
    {
      LODWORD(v5) = 5;
LABEL_7:
      v8 = winrt::hstring::c_str((UndockedSearchAppExperienceManager *)((char *)this + 840));
      SearchAppExperienceManagerTelemetry::UndockedSearchExperienceManager_SkipInstallDefaultWebProviderApp<unsigned short const *,enum SkipInstallDefaultWebProviderAppReason>(
        (__int64 *)&v8,
        &v5);
      return 0;
    }
  }
  _InterlockedIncrement64(&qword_180991218);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics> )
  {
    v7 = 0LL;
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>
                                                       + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>,
           &v7);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    v6 = v7;
    _InterlockedDecrement64(&qword_180991218);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991218);
    v5 = _lambda_d36c29fbb2e64753b55d53c833bf7733_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings,winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics>::call<winrt::WindowsUdk::System::UserProfile::SearchSettings::SearchPolicySettings (*)(winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettingsStatics const &)>(
      0LL,
      (__int64)&v6,
      (void (__fastcall **)(__int64, __int64 *))&v5);
  }
  v4 = winrt::impl::consume_WindowsUdk_System_UserProfile_SearchSettings_ISearchPolicySettings<winrt::WindowsUdk::System::UserProfile::SearchSettings::ISearchPolicySettings>::IsWebSearchEnabled(&v6) == 0;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  if ( v4 )
  {
    LODWORD(v5) = 3;
    goto LABEL_7;
  }
  if ( !CanUserInstallStoreApps() )
  {
    LODWORD(v5) = 4;
    goto LABEL_7;
  }
  return 1;
}
