/*
 * XREFs of _anonymous_namespace_::TryGetDashboardPackageName @ 0x18005A3E8
 * Callers:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18005A0D0 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1802389D0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180697FE0 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ?PackageFullName@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18005A508 (-PackageFullName@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtensio.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x180093C8C (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAp_ea_180093C8C.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@Z @ 0x180133DCC (--$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall anonymous_namespace_::TryGetDashboardPackageName(_QWORD *a1)
{
  _WORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  winrt::hstring *v5; // rax
  unsigned __int16 *v6; // rax
  _QWORD *v7; // [rsp+28h] [rbp-40h] BYREF
  int *v8; // [rsp+30h] [rbp-38h]
  _QWORD v9[6]; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+90h] [rbp+28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+30h] BYREF
  char v12; // [rsp+A0h] [rbp+38h] BYREF
  char v13; // [rsp+A8h] [rbp+40h] BYREF

  v2 = a1;
  if ( a1[3] >= 8uLL )
    v2 = (_WORD *)*a1;
  a1[2] = 0LL;
  *v2 = 0;
  v10 = 8;
  v9[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)&v12, L"com.microsoft.windows.extension.dashboard");
  v7 = v9;
  v8 = &v10;
  _InterlockedIncrement64(&qword_18098E268);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    ((void (__fastcall *)(__int64 *, __int64 *, _QWORD *, int *, __int64 *, _QWORD *, int *))winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find)(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      &v11,
      v9,
      &v10,
      &qword_18098E268,
      v7,
      v8);
    v4 = -1LL;
    _InterlockedAdd64(&qword_18098E268, 0xFFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v4 = -1LL;
    _InterlockedAdd64(&qword_18098E268, 0xFFFFFFFFFFFFFFFFuLL);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6d00043e8e6068abd62a830dd09eee93_ &>(
      v3,
      &v11,
      &v7);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  if ( v11 )
  {
    v5 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::PackageFullName(
                             &v11,
                             &v13);
    v6 = (unsigned __int16 *)winrt::hstring::c_str(v5);
    do
      ++v4;
    while ( v6[v4] );
    std::wstring::assign(a1, v6);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  }
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
}
