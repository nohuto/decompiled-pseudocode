/*
 * XREFs of ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUISystemVisualThemeStatics@4562@@Z@Z @ 0x18007F560
 * Callers:
 *     ?ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z @ 0x18007D35C (-ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z.c)
 *     ?Current@SystemVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ @ 0x1805E2BCC (-Current@SystemVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     _anonymous_namespace_::GetLogoTileTheme @ 0x1806A1A64 (_anonymous_namespace_--GetLogoTileTheme.c)
 * Callees:
 *     ??$get_activation_factory@UISystemVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA?AUISystemVisualThemeStatics@Themes@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18007F668 (--$get_activation_factory@UISystemVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA-AUIS.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1801CEFB9 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics const &)>(
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
    L"WindowsUdk.UI.Themes.SystemVisualTheme",
    0x26uLL);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>(&v6, v5);
  if ( v6 && (v7 = 0LL, (**v6)(v6, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v7), (v8 = v7) != 0) )
  {
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
    _InterlockedIncrement64(&qword_18098EA98);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>,
            (signed __int64)v6,
            0LL) )
    {
      v6 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_18098EAA0);
    }
    v3 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>);
    _InterlockedDecrement64(&qword_18098EA98);
  }
  else
  {
    v3 = (*a2)((__int64 *)&v6);
  }
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return v3;
}
