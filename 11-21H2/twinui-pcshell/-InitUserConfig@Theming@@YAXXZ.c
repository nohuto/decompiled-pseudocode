/*
 * XREFs of ?InitUserConfig@Theming@@YAXXZ @ 0x1800FBDD8
 * Callers:
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x180118F78 (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_.c)
 * Callees:
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x180067020 (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?FindAssetReferencePath@?$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x1800FBFC4 (-FindAssetReferencePath@-$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPack.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801196CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAA_NXZ @ 0x18011999C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAA_N.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119A58 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x180158B6C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 *     ?SetSoundRedirectionPath@Theming@@YAXPEBG@Z @ 0x180170E14 (-SetSoundRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x180170EEC (-SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1801710A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180174FA4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Theming::InitUserConfig(Theming *this, __int64 a2)
{
  char v2; // di
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  int v4; // ebx
  UINT WindowsDirectoryW; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  UINT v9; // esi
  WCHAR *v10; // rcx
  const unsigned __int16 *v11; // rdx
  LPWSTR *v12; // rcx
  __int64 v13; // rdx
  void (__fastcall ***v14)(_QWORD, __int64 *, __int64 *); // rcx
  const unsigned __int16 *v15; // rdx
  Theming *v16; // rcx
  const WCHAR *v17; // rax
  Theming *v18; // rax
  const unsigned __int16 *v19; // rdx
  const WCHAR *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // [rsp+38h] [rbp-59h]
  bool v25; // [rsp+40h] [rbp-51h]
  volatile signed __int32 *v26; // [rsp+48h] [rbp-49h] BYREF
  volatile signed __int32 *v27; // [rsp+50h] [rbp-41h] BYREF
  _BYTE *v28; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v29[3]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v30[32]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v31[32]; // [rsp+98h] [rbp+7h] BYREF
  LPWSTR lpBuffer[3]; // [rsp+B8h] [rbp+27h] BYREF
  unsigned __int64 v33; // [rsp+D0h] [rbp+3Fh]

  v2 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HVSTest>::GetImpl'::`2'::impl,
    a2);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v30, L"CustomThemeSounds", 17LL);
  v28 = v30;
  v29[1] = &qword_1807B4208;
  _InterlockedAdd64(&qword_1807B4208, 1uLL);
  v4 = 0;
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Management_Deployment_IPackageManagerStatics<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::FindAssetReferencePath(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      &v27,
      v30);
    _InterlockedDecrement64(&qword_1807B4208);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4208);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v3,
      (__int64)&v27,
      &v28);
  }
  if ( (unsigned __int8)winrt::operator==(&v27, &LocaleName)
    || (v17 = winrt::hstring::c_str((winrt::hstring *)&v27), !PathFileExistsW(v17)) )
  {
    WindowsDirectoryW = GetWindowsDirectoryW(0LL, 0);
    v9 = WindowsDirectoryW;
    if ( WindowsDirectoryW )
    {
      std::wstring::wstring(lpBuffer, WindowsDirectoryW - 1);
      v10 = (WCHAR *)lpBuffer;
      if ( v33 >= 8 )
        v10 = lpBuffer[0];
      if ( GetWindowsDirectoryW(v10, v9) )
      {
        std::wstring::append(lpBuffer);
        v12 = lpBuffer;
        if ( v33 >= 8 )
          v12 = (LPWSTR *)lpBuffer[0];
        Theming::SetSoundRedirectionPath((Theming *)v12, v11);
      }
      std::wstring::_Tidy_deallocate((__int64)lpBuffer);
    }
  }
  else
  {
    v18 = (Theming *)winrt::hstring::c_str((winrt::hstring *)&v27);
    Theming::SetSoundRedirectionPath(v18, v19);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v27, v6, v7, v8);
  LOBYTE(v13) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl,
    v13);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v31, L"CustomThemeBackgrounds", 22LL);
  v29[0] = v31;
  v29[2] = &qword_1807B4208;
  _InterlockedAdd64(&qword_1807B4208, 1uLL);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Management_Deployment_IPackageManagerStatics<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::FindAssetReferencePath(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      &v26,
      v31);
    _InterlockedDecrement64(&qword_1807B4208);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4208);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v14,
      (__int64)&v26,
      v29);
  }
  if ( (unsigned __int8)winrt::operator==(&v26, &LocaleName)
    || (v20 = winrt::hstring::c_str((winrt::hstring *)&v26), !PathFileExistsW(v20)) )
  {
    v16 = 0LL;
  }
  else
  {
    v16 = (Theming *)winrt::hstring::c_str((winrt::hstring *)&v26);
  }
  Theming::SetBackgroundsRedirectionPath(v16, v15);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v26, v21, v22, v23);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HVSUSSHTest>::GetImpl'::`2'::impl) )
    v2 = 0;
  else
    v4 = 1;
  LODWORD(v26) = v4;
  LOBYTE(v24) = v2;
  dynamic_config::SetRegValueAndLog(
    (dynamic_config *)0xFFFFFFFF80000002LL,
    (HKEY)&stru_18068D570,
    (const unsigned __int16 *)4,
    (unsigned int)L"Configuration",
    (const unsigned __int16 *)&v26,
    (const unsigned __int8 *)4,
    v24,
    v25);
}
