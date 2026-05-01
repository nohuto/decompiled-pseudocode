/*
 * XREFs of ?PrelaunchDelay@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@XZ @ 0x1805BDB74
 * Callers:
 *     _lambda_7e165926cc5ca9dec4eb8af005e3d0c6_::operator() @ 0x1801C51CC (_lambda_7e165926cc5ca9dec4eb8af005e3d0c6_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension2<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::PrelaunchDelay(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  signed int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    v6 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v3)(
      v3,
      &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension2>,
      &v6);
    v3 = v6;
  }
  v7 = v3;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 48LL))(v3, a2);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  return a2;
}
