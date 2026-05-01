/*
 * XREFs of ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@?$factory_cache_entry@UAppVisualTheme@Themes@UI@WindowsUdk@winrt@@UIAppVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUIAppVisualThemeStatics@4562@@Z@Z @ 0x18068DB60
 * Callers:
 *     ??$call_factory_cast@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@ZUAppVisualTheme@2345@U62345@V_lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_@@@impl@winrt@@YA?A_P$$QEAV_lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_@@@Z @ 0x18068DC9C (--$call_factory_cast@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIAppVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA?AUIAppVisualThemeStatics@Themes@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18068E0D0 (--$get_activation_factory@UIAppVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA-AUIAppV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 (__fastcall **a2)(__int64 *))
{
  unsigned int v3; // ebx
  _BYTE v5[40]; // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // [rsp+60h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF

  v6 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v5,
    L"WindowsUdk.UI.Themes.AppVisualTheme",
    35);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>(&v6, v5);
  if ( v6 && (v7 = 0LL, (**v6)(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v8 = v7) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
    _InterlockedIncrement64(&qword_180991C18);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>,
            (signed __int64)v6,
            0LL) )
    {
      v6 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180991C20);
    }
    v3 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>);
    _InterlockedDecrement64(&qword_180991C18);
  }
  else
  {
    v3 = (*a2)((__int64 *)&v6);
  }
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v3;
}
