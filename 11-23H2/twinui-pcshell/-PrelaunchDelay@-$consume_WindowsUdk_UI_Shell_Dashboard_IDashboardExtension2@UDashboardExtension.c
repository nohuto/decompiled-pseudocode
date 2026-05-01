/*
 * XREFs of ?PrelaunchDelay@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AFBF4
 * Callers:
 *     _lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a_::operator() @ 0x18023693C (_lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::PrelaunchDelay(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v7 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>,
      &v7);
    v3 = v7;
    v4 = v7;
  }
  else
  {
    v4 = 0LL;
  }
  v8 = v3;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 48LL))(v3, a2);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a2;
}
