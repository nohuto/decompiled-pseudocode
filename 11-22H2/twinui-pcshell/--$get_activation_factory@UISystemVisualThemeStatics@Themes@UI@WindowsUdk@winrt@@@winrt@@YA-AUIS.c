/*
 * XREFs of ??$get_activation_factory@UISystemVisualThemeStatics@Themes@UI@WindowsUdk@winrt@@@winrt@@YA?AUISystemVisualThemeStatics@Themes@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x18007F668
 * Callers:
 *     ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUISystemVisualThemeStatics@4562@@Z@Z @ 0x18007F560 (--$call@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@-$f.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    &winrt::impl::guid_v<winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>,
    &v5);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a1 = v5;
  return a1;
}
