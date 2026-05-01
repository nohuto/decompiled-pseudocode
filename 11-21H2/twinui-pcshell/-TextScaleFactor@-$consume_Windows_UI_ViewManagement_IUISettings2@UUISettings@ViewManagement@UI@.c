/*
 * XREFs of ?TextScaleFactor@?$consume_Windows_UI_ViewManagement_IUISettings2@UUISettings@ViewManagement@UI@Windows@winrt@@@impl@winrt@@QEBANXZ @ 0x1800F82B0
 * Callers:
 *     ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x1800F8128 (-IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
double __fastcall winrt::impl::consume_Windows_UI_ViewManagement_IUISettings2<winrt::Windows::UI::ViewManagement::UISettings>::TextScaleFactor(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  double v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0.0;
  v1 = *a1;
  if ( v1 )
  {
    v4 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v1)(
      v1,
      &winrt::impl::guid_v<winrt::Windows::UI::ViewManagement::IUISettings2>,
      &v4);
    v1 = v4;
  }
  v5 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v1 + 48LL))(v1, &v6);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  return v6;
}
