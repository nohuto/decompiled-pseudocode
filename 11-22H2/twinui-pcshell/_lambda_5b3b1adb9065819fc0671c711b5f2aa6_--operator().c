/*
 * XREFs of _lambda_5b3b1adb9065819fc0671c711b5f2aa6_::operator() @ 0x180236738
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5b3b1adb9065819fc0671c711b5f2aa6__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x180248250 (std--_Func_impl_no_alloc__lambda_5b3b1adb9065819fc0671c711b5f2aa6__void_winrt--Wind_ea_180248250.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1801BDCB0 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_5b3b1adb9065819fc0671c711b5f2aa6_::operator()(__int64 a1, IUnknown **a2)
{
  int v4; // eax
  HRESULT v5; // eax
  IUnknown *v6; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x70C,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = CoAllowSetForegroundWindow(*a2, 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x70D,
      (int)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = *a2;
  lpVtbl = (*a2)->lpVtbl;
  v9 = *(_OWORD *)(a1 + 28);
  v10 = *(_OWORD *)(a1 + 8);
  v8 = ((__int64 (__fastcall *)(IUnknown *, __int128 *, _QWORD, __int128 *))lpVtbl[2].QueryInterface)(
         v6,
         &v10,
         *(unsigned int *)(a1 + 24),
         &v9);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)a2);
}
