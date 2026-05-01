/*
 * XREFs of ?InitUserConfig_B@Theming@@YAXXZ @ 0x1800AFF98
 * Callers:
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x1801B6FDC (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_.c)
 * Callees:
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x1800B004C (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 *     ?FindAssetReferencePath@?$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B280C (-FindAssetReferencePath@-$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPack.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115270 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?InitConfig@alchemy_config_dwm@@YAXPEBG@Z @ 0x1806E2A90 (-InitConfig@alchemy_config_dwm@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Theming::InitUserConfig_B(Theming *this, __int64 a2)
{
  __int64 v2; // rcx
  const WCHAR *v3; // rax
  alchemy_config_dwm *v4; // rax
  const unsigned __int16 *v5; // rdx
  _BYTE v6[32]; // [rsp+20h] [rbp-20h] BYREF
  _BYTE *v7; // [rsp+50h] [rbp+10h] BYREF
  char v8; // [rsp+58h] [rbp+18h] BYREF
  __int64 *v9; // [rsp+60h] [rbp+20h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    a2);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v6, L"ThemeConfigs", 0xCuLL);
  v7 = v6;
  v9 = &qword_18098E488;
  _InterlockedIncrement64(&qword_18098E488);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Management_Deployment_IPackageManagerStatics<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::FindAssetReferencePath(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      &v8,
      v6);
    _InterlockedDecrement64(&qword_18098E488);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E488);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v2,
      &v8,
      &v7);
  }
  if ( !(unsigned __int8)winrt::operator==(&v8, &LocaleName) )
  {
    v3 = winrt::hstring::c_str((winrt::hstring *)&v8);
    if ( PathFileExistsW(v3) )
    {
      v4 = (alchemy_config_dwm *)winrt::hstring::c_str((winrt::hstring *)&v8);
      alchemy_config_dwm::InitConfig(v4, v5);
    }
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
}
