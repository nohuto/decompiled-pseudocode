/*
 * XREFs of ?IsPrelaunchEnabled@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801AFB74
 * Callers:
 *     _lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a_::operator() @ 0x18023693C (_lambda_60b8aa6facbf2fdf4ec9aef88bd8d45a_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::IsPrelaunchEnabled(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v3; // eax
  char v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  v1 = *a1;
  if ( v1 )
  {
    v6 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>,
      &v6);
    v1 = v6;
    v2 = v6;
  }
  else
  {
    v2 = 0LL;
  }
  v7 = v1;
  v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 56LL))(v1, &v5);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  if ( v2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return v5;
}
