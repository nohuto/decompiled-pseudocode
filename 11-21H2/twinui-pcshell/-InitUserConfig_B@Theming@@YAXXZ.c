/*
 * XREFs of ?InitUserConfig_B@Theming@@YAXXZ @ 0x1801198E8
 * Callers:
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x180118F78 (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_.c)
 * Callees:
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x180067020 (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?FindAssetReferencePath@?$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x1800FBFC4 (-FindAssetReferencePath@-$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPack.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119ADC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?InitConfig@alchemy_config_dwm@@YAXPEBG@Z @ 0x1805DDB40 (-InitConfig@alchemy_config_dwm@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Theming::InitUserConfig_B(Theming *this, __int64 a2)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  const WCHAR *v6; // rax
  alchemy_config_dwm *v7; // rax
  const unsigned __int16 *v8; // rdx
  _QWORD v9[4]; // [rsp+20h] [rbp-20h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp+10h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+18h] BYREF
  __int64 *v12; // [rsp+60h] [rbp+20h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    a2);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v9, L"ThemeConfigs", 12LL);
  v11 = v9;
  v12 = &qword_1807B4208;
  _InterlockedIncrement64(&qword_1807B4208);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Management_Deployment_IPackageManagerStatics<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::FindAssetReferencePath(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      &v10,
      v9);
    _InterlockedDecrement64(&qword_1807B4208);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4208);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v2,
      (__int64)&v10,
      &v11);
  }
  if ( !(unsigned __int8)winrt::operator==((__int64)&v10, (__int64)&LocaleName) )
  {
    v6 = winrt::hstring::c_str((winrt::hstring *)&v10);
    if ( PathFileExistsW(v6) )
    {
      v7 = (alchemy_config_dwm *)winrt::hstring::c_str((winrt::hstring *)&v10);
      alchemy_config_dwm::InitConfig(v7, v8);
    }
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10, v3, v4, v5);
}
