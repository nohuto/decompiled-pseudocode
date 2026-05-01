/*
 * XREFs of ??$call_factory_cast@P6A?AUColor@UI@Windows@winrt@@AEBUIColorsStatics@234@@ZUColors@234@U5234@V_lambda_d7b00691c3c9723fe1824ae9cb58901d_@@@impl@winrt@@YA?A_P$$QEAV_lambda_d7b00691c3c9723fe1824ae9cb58901d_@@@Z @ 0x1806E5D50
 * Callers:
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1806E6F40 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@P6A?AUColor@UI@Windows@winrt@@AEBUIColorsStatics@234@@Z@?$factory_cache_entry@UColors@UI@Windows@winrt@@UIColorsStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUColor@UI@Windows@2@AEBUIColorsStatics@452@@Z@Z @ 0x1806E5C08 (--$call@P6A-AUColor@UI@Windows@winrt@@AEBUIColorsStatics@234@@Z@-$factory_cache_entry@UColors@UI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 winrt::impl::call_factory_cast<winrt::Windows::UI::Color (*)(winrt::Windows::UI::IColorsStatics const &),winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics,_lambda_d7b00691c3c9723fe1824ae9cb58901d_>()
{
  signed int v0; // eax
  __int64 result; // rax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall *v4)(const struct winrt::Windows::UI::IColorsStatics *); // [rsp+48h] [rbp+20h] BYREF

  _InterlockedIncrement64(&qword_180990E18);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics> )
  {
    v2 = 0;
    v0 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>
                                                            + 456LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>,
           &v2);
    if ( v0 < 0 )
      winrt::throw_hresult(v0);
    result = v2;
    _InterlockedDecrement64(&qword_180990E18);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990E18);
    v4 = _lambda_d7b00691c3c9723fe1824ae9cb58901d_::_lambda_invoker_cdecl_;
    return (unsigned int)*winrt::impl::factory_cache_entry<winrt::Windows::UI::Colors,winrt::Windows::UI::IColorsStatics>::call<winrt::Windows::UI::Color (*)(winrt::Windows::UI::IColorsStatics const &)>(
                            0LL,
                            &v3,
                            (__int64 (__fastcall **)(__int64 *))&v4);
  }
  return result;
}
