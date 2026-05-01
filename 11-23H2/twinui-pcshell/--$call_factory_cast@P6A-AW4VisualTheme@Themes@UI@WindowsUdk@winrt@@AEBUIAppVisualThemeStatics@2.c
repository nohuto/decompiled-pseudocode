/*
 * XREFs of ??$call_factory_cast@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@ZUAppVisualTheme@2345@U62345@V_lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_@@@impl@winrt@@YA?A_P$$QEAV_lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_@@@Z @ 0x18068DC9C
 * Callers:
 *     ?Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NIPEAUHWND__@@_N1W4SnapControlType@34567@W4InputDeviceKind@4UI@WindowsUdk@7@PEAUHMONITOR__@@@Z @ 0x18068FA04 (-Initialize@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@?$factory_cache_entry@UAppVisualTheme@Themes@UI@WindowsUdk@winrt@@UIAppVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUIAppVisualThemeStatics@4562@@Z@Z @ 0x18068DB60 (--$call@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUIAppVisualThemeStatics@2345@@Z@-$fact.c)
 */

__int64 winrt::impl::call_factory_cast<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics const &),winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics,_lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_>()
{
  signed int v0; // eax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall *v3)(const struct winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics *); // [rsp+40h] [rbp+18h] BYREF

  _InterlockedIncrement64(&qword_180991C18);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics> )
  {
    v2 = 0;
    v0 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>
                                                            + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>,
           &v2);
    if ( v0 < 0 )
      winrt::throw_hresult(v0);
    _InterlockedDecrement64(&qword_180991C18);
    return v2;
  }
  else
  {
    _InterlockedDecrement64(&qword_180991C18);
    v3 = _lambda_831f77a093b85e8e1ecbaea7dd7b1cdf_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::AppVisualTheme,winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::IAppVisualThemeStatics const &)>(
             0LL,
             (__int64 (__fastcall **)(__int64 *))&v3);
  }
}
