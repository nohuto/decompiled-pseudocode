/*
 * XREFs of ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@?$factory_cache_entry@UAppVisualTheme@Themes@UI@WindowsUdk@winrt@@UIAppVisualThemeStatics@2345@@impl@winrt@@QEAA?AW4VisualTheme@Themes@UI@WindowsUdk@2@$$QEAP6A?AW434562@AEBUIAppVisualThemeStatics@4562@@Z@Z @ 0x180014288
 * Callers:
 *     ?ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z @ 0x180014164 (-ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z.c)
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1AEBUIInspectable@Foundation@67@@Z @ 0x1805B8EB4 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     ??$get_activation_factory@UIAppVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA?AUIAppVisualThemeStatics@Themes@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180014398 (--$get_activation_factory@UIAppVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA-AUIAppV.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics const &)>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 (__fastcall **a2)(__int64 *))
{
  __int64 v3; // rax
  char v4; // bl
  unsigned int v5; // ebx
  _BYTE v7[40]; // [rsp+28h] [rbp-28h] BYREF
  void (__fastcall ***v8)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h] BYREF

  v8 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v7,
    L"WindowsUdk.UI.Themes.AppVisualTheme",
    0x23uLL);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>(&v8, v7);
  if ( v8 )
  {
    v9 = 0LL;
    (**v8)(v8, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v9);
    v3 = v9;
    v10 = v9;
    if ( v9 )
    {
      v4 = 1;
      goto LABEL_4;
    }
  }
  else
  {
    v3 = 0LL;
    v10 = 0LL;
  }
  v4 = 0;
LABEL_4:
  if ( v3 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v10);
  if ( v4 )
  {
    _InterlockedIncrement64(&qword_1807B4468);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>,
            (signed __int64)v8,
            0LL) )
    {
      v8 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B4470);
    }
    v5 = (*a2)(&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>);
    _InterlockedDecrement64(&qword_1807B4468);
  }
  else
  {
    v5 = (*a2)((__int64 *)&v8);
  }
  if ( v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return v5;
}
