/*
 * XREFs of ?ApplyTheme@@YAXPE$AAVUIElement@Xaml@UI@Windows@@@Z @ 0x18007D35C
 * Callers:
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18007B938 (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180764E70 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076D9B0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1807733A8 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?RequestedTheme@?$consume_Windows_UI_Xaml_IFrameworkElement2@UFrameworkElement@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ElementTheme@Xaml@UI@Windows@3@@Z @ 0x18006CCB4 (-RequestedTheme@-$consume_Windows_UI_Xaml_IFrameworkElement2@UFrameworkElement@Xaml@UI@Windows@w.c)
 *     ??$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA?AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObject@Platform@@@Z @ 0x18007CF70 (--$from_cx@UUIElement@Xaml@UI@Windows@winrt@@@@YA-AUUIElement@Xaml@UI@Windows@winrt@@PE$AAVObjec.c)
 *     ??$as@UFrameworkElement@Xaml@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUFrameworkElement@Xaml@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18007D418 (--$as@UFrameworkElement@Xaml@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X.c)
 *     ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUISystemVisualThemeStatics@4562@@Z@Z @ 0x18007F560 (--$call@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@-$f.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ApplyTheme(__int64 (__fastcall ***a1)(_QWORD, void *, _QWORD *))
{
  int v2; // eax
  _QWORD *v3; // rax
  int v4; // eax
  _QWORD *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  int v8; // [rsp+48h] [rbp+18h] BYREF
  __int64 (__fastcall *v9)(const struct winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics *); // [rsp+50h] [rbp+20h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+28h]

  v10 = &qword_18098EA98;
  _InterlockedIncrement64(&qword_18098EA98);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics> )
  {
    v8 = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>
                                                   + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>,
           &v8);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
    v2 = v8;
    _InterlockedDecrement64(&qword_18098EA98);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EA98);
    v9 = _lambda_95a7ded9384efa6b54b5506927790237_::_lambda_invoker_cdecl_;
    v2 = winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics const &)>(
           0LL,
           &v9);
  }
  if ( v2 == 1 )
  {
    v3 = from_cx<winrt::Windows::UI::Xaml::UIElement>(&v7, a1);
    winrt::impl::as<winrt::Windows::UI::Xaml::FrameworkElement,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v6,
      *v3);
    LODWORD(v9) = 1;
    winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement2<winrt::Windows::UI::Xaml::FrameworkElement>::RequestedTheme(
      &v6,
      (unsigned int *)&v9);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  else
  {
    v5 = from_cx<winrt::Windows::UI::Xaml::UIElement>(&v7, a1);
    winrt::impl::as<winrt::Windows::UI::Xaml::FrameworkElement,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v6,
      *v5);
    LODWORD(v9) = 2;
    winrt::impl::consume_Windows_UI_Xaml_IFrameworkElement2<winrt::Windows::UI::Xaml::FrameworkElement>::RequestedTheme(
      &v6,
      (unsigned int *)&v9);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  }
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
}
