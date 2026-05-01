/*
 * XREFs of ?InitUserConfig@Theming@@YAXXZ @ 0x1800B2628
 * Callers:
 *     ?HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_N@Z @ 0x1801B6FDC (-HandlePackageServicing@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJ_.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x1800B004C (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x1800B08A8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?FindAssetReferencePath@?$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B280C (-FindAssetReferencePath@-$consume_WindowsUdk_Management_Deployment_IPackageManagerStatics@UIPack.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114E54 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAA_NXZ @ 0x180115084 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HVSUSSHTest@@@details@wil@@QEAA_N.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F4E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AUTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x18018CE8C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 *     ?SetSoundRedirectionPath@Theming@@YAXPEBG@Z @ 0x1801A94C8 (-SetSoundRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x1801A95A0 (-SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Theming::InitUserConfig(Theming *this, __int64 a2)
{
  char v2; // bl
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  UINT WindowsDirectoryW; // eax
  UINT v5; // edi
  WCHAR *v6; // rcx
  __int64 v7; // rdx
  const unsigned __int16 *v8; // rdx
  LPWSTR *v9; // rcx
  __int64 v10; // rdx
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // rcx
  const unsigned __int16 *v12; // rdx
  Theming *v13; // rcx
  const WCHAR *v14; // rax
  Theming *v15; // rax
  const unsigned __int16 *v16; // rdx
  const WCHAR *v17; // rax
  unsigned __int8 v18; // al
  unsigned __int64 v19; // [rsp+38h] [rbp-59h]
  bool v20; // [rsp+40h] [rbp-51h]
  unsigned __int16 v21[4]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v22[8]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE *v23; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v24[3]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v25[32]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v26[32]; // [rsp+98h] [rbp+7h] BYREF
  LPWSTR lpBuffer[3]; // [rsp+B8h] [rbp+27h] BYREF
  unsigned __int64 v28; // [rsp+D0h] [rbp+3Fh]

  v2 = 0;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HVSTest>::GetImpl'::`2'::impl,
    a2);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v25, L"CustomThemeSounds", 0x11uLL);
  v23 = v25;
  v24[1] = &qword_18098E488;
  _InterlockedIncrement64(&qword_18098E488);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Management_Deployment_IPackageManagerStatics<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::FindAssetReferencePath(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      v22,
      v25);
    _InterlockedDecrement64(&qword_18098E488);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E488);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v3,
      (__int64)v22,
      &v23);
  }
  if ( (unsigned __int8)winrt::operator==(v22, &LocaleName)
    || (v14 = winrt::hstring::c_str((winrt::hstring *)v22), !PathFileExistsW(v14)) )
  {
    WindowsDirectoryW = GetWindowsDirectoryW(0LL, 0);
    v5 = WindowsDirectoryW;
    if ( WindowsDirectoryW )
    {
      std::wstring::wstring((__int64)lpBuffer, WindowsDirectoryW - 1, 0);
      v6 = (WCHAR *)lpBuffer;
      if ( v28 >= 8 )
        v6 = lpBuffer[0];
      if ( GetWindowsDirectoryW(v6, v5) )
      {
        std::wstring::append(lpBuffer, L"\\media", 6uLL);
        v9 = lpBuffer;
        if ( v28 >= 8 )
          v9 = (LPWSTR *)lpBuffer[0];
        Theming::SetSoundRedirectionPath((Theming *)v9, v8);
      }
      std::wstring::_Tidy_deallocate(lpBuffer, v7);
    }
  }
  else
  {
    v15 = (Theming *)winrt::hstring::c_str((winrt::hstring *)v22);
    Theming::SetSoundRedirectionPath(v15, v16);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(v22);
  LOBYTE(v10) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AUTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AUTest>::GetImpl'::`2'::impl,
    v10);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v26, L"CustomThemeBackgrounds", 0x16uLL);
  v24[0] = v26;
  v24[2] = &qword_18098E488;
  _InterlockedIncrement64(&qword_18098E488);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics> )
  {
    winrt::impl::consume_WindowsUdk_Management_Deployment_IPackageManagerStatics<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::FindAssetReferencePath(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>,
      v21,
      v26);
    _InterlockedDecrement64(&qword_18098E488);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E488);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::Management::Deployment::PackageManager,winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>::call<_lambda_720477a61d445079ad03f3ff7eed504d_ &>(
      v11,
      (__int64)v21,
      v24);
  }
  if ( (unsigned __int8)winrt::operator==(v21, &LocaleName)
    || (v17 = winrt::hstring::c_str((winrt::hstring *)v21), !PathFileExistsW(v17)) )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = (Theming *)winrt::hstring::c_str((winrt::hstring *)v21);
  }
  Theming::SetBackgroundsRedirectionPath(v13, v12);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v21);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HVSUSSHTest>::GetImpl'::`2'::impl) )
  {
    v18 = 1;
  }
  else
  {
    v18 = 0;
    v2 = 1;
  }
  *(_DWORD *)v21 = v18 ^ 1;
  LOBYTE(v19) = v2;
  dynamic_config::SetRegValueAndLog(
    (dynamic_config *)0xFFFFFFFF80000002LL,
    (HKEY)&stru_18081C1C0,
    (const unsigned __int16 *)4,
    (unsigned int)L"Configuration",
    v21,
    (const unsigned __int8 *)4,
    v19,
    v20);
}
