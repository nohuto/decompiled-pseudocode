/*
 * XREFs of ?ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z @ 0x180014164
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1800135A8 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1805FBBA0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ??$as@UFrameworkElement@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUFrameworkElement@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180014220 (--$as@UFrameworkElement@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X.c)
 *     ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@?$factory_cache_entry@UAppVisualTheme@Themes@UI@WindowsUdk@winrt@@UIAppVisualThemeStatics@2345@@impl@winrt@@QEAA?AW4VisualTheme@Themes@UI@WindowsUdk@2@$$QEAP6A?AW434562@AEBUIAppVisualThemeStatics@4562@@Z@Z @ 0x180014288 (--$call@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@-$fact.c)
 *     ?RequestedTheme@?$consume_Windows_UI_Xaml_IFrameworkElement2@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBW4ElementTheme@Xaml@UI@Windows@3@@Z @ 0x180014488 (-RequestedTheme@-$consume_Windows_UI_Xaml_IFrameworkElement2@UFrameworkElement@Xaml@UI@Windows@w.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18001450C (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ApplyTheme(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // rax
  int v4; // eax
  _QWORD *v5; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-10h] BYREF
  int v7; // [rsp+48h] [rbp+18h] BYREF
  void *v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v6[1] = &qword_1807B4468;
  _InterlockedIncrement64(&qword_1807B4468);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics> )
  {
    v7 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>
                                                   + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>,
           &v7);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    v2 = v7;
    _InterlockedDecrement64(&qword_1807B4468);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B4468);
    v8 = &_lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_::_lambda_invoker_cdecl_;
    v2 = winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics const &)>(
           0LL,
           &v8);
  }
  if ( v2 == 1 )
  {
    v3 = (_QWORD *)from_cx<winrt::Windows::UI::Xaml::UIElement>(v6, a1);
    winrt::impl::as<winrt::Windows::UI::Xaml::FrameworkElement,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v9,
      *v3);
    LODWORD(v8) = 1;
    winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement2<winrt::Windows::UI::Xaml::FrameworkElement>::RequestedTheme(
      &v9,
      &v8);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  }
  else
  {
    v5 = (_QWORD *)from_cx<winrt::Windows::UI::Xaml::UIElement>(v6, a1);
    winrt::impl::as<winrt::Windows::UI::Xaml::FrameworkElement,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v9,
      *v5);
    LODWORD(v8) = 2;
    winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement2<winrt::Windows::UI::Xaml::FrameworkElement>::RequestedTheme(
      &v9,
      &v8);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  }
  if ( v6[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v6);
}
