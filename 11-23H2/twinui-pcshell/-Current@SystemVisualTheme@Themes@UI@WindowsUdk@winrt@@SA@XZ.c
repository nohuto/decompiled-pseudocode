/*
 * XREFs of ?Current@SystemVisualTheme@Themes@UI@WindowsUdk@winrt@@SA@XZ @ 0x1805E2BCC
 * Callers:
 *     JointResize::TagViewWithLogoAsync$_ResumeCoro$1 @ 0x180213B40 (JointResize--TagViewWithLogoAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@P6A?AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@?$factory_cache_entry@USystemVisualTheme@Themes@UI@WindowsUdk@winrt@@UISystemVisualThemeStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AW4VisualTheme@Themes@UI@WindowsUdk@2@AEBUISystemVisualThemeStatics@4562@@Z@Z @ 0x18007F560 (--$call@P6A-AW4VisualTheme@Themes@UI@WindowsUdk@winrt@@AEBUISystemVisualThemeStatics@2345@@Z@-$f.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 winrt::WindowsUdk::UI::Themes::SystemVisualTheme::Current(void)
{
  signed int v0; // eax
  __int64 result; // rax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall *v3)(const struct winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics *); // [rsp+38h] [rbp+10h] BYREF
  __int64 *v4; // [rsp+40h] [rbp+18h]

  v4 = &qword_18098EA98;
  _InterlockedIncrement64(&qword_18098EA98);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics> )
  {
    v2 = 0;
    v0 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>
                                                            + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>,
           &v2);
    if ( v0 < 0 )
      winrt::throw_hresult(v0);
    result = v2;
    _InterlockedDecrement64(&qword_18098EA98);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098EA98);
    v3 = _lambda_95a7ded9384efa6b54b5506927790237_::_lambda_invoker_cdecl_;
    return winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Themes::SystemVisualTheme,winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics>::call<enum winrt::WindowsUdk::UI::Themes::VisualTheme (*)(winrt::WindowsUdk::UI::Themes::ISystemVisualThemeStatics const &)>(
             0LL,
             (__int64 (__fastcall **)(__int64 *))&v3);
  }
  return result;
}
