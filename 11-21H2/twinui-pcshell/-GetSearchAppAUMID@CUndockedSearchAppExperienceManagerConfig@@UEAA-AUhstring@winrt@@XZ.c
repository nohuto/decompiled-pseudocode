/*
 * XREFs of ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x1800F5200
 * Callers:
 *     <none>
 * Callees:
 *     ??$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@Z @ 0x180066EF4 (--$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@AEBW4AppExtensionOptions@5673@@Z @ 0x1800F5304 (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionSta.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ActivateUndockedSearchApp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F7104 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ActivateUndockedSearchApp@@@details@wil@@.c)
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F718C (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F78A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SRTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F793C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA?AW4SearchAppIdentityToUse@123@XZ @ 0x18038EA1C (-GetIdentityToUse@SearchAppIdentity@Search@Windows@@CA-AW4SearchAppIdentityToUse@123@XZ.c)
 */

// Hidden C++ exception states: #wind=5
winrt::hstring *__fastcall CUndockedSearchAppExperienceManagerConfig::GetSearchAppAUMID(__int64 a1, winrt::hstring *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int IdentityToUse; // eax
  const unsigned __int16 *v13; // rdx
  volatile signed __int32 *v14[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-20h] BYREF
  int v17; // [rsp+80h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+28h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ActivateUndockedSearchApp>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ActivateUndockedSearchApp>::GetImpl'::`2'::impl,
    0LL);
  LOBYTE(v3) = 3;
  LOBYTE(v4) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SRTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SRTest>::GetImpl'::`2'::impl,
    v4,
    v3);
  LOBYTE(v5) = 3;
  LOBYTE(v6) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    v6,
    v5);
  v17 = 1;
  v16[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)v14, L"com.microsoft.windows.app.search");
  v15[0] = v16;
  v15[1] = &v17;
  v14[1] = (volatile signed __int32 *)&qword_1807B40F8;
  _InterlockedIncrement64(&qword_1807B40F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      &v18,
      v16,
      &v17,
      v14[0]);
    _InterlockedDecrement64(&qword_1807B40F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B40F8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6d00043e8e6068abd62a830dd09eee93_ &>(
      v7,
      (__int64)&v18,
      v15);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(v14, v8, v9, v10);
  if ( v18 )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
      &v18,
      a2);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  }
  else
  {
    IdentityToUse = Windows::Search::SearchAppIdentity::GetIdentityToUse();
    if ( IdentityToUse )
    {
      if ( IdentityToUse == 1 )
        v13 = L"Microsoft.Search_8wekyb3d8bbwe!CortanaUI";
      else
        v13 = L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI";
    }
    else
    {
      v13 = L"Microsoft.Windows.Search_cw5n1h2txyewy!CortanaUI";
    }
    winrt::hstring::hstring(a2, v13);
  }
  return a2;
}
