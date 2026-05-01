/*
 * XREFs of _lambda_702b059237f471f0f2abb9216d2aed5e_::operator() @ 0x1801C5044
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_702b059237f471f0f2abb9216d2aed5e__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1801CE900 (std--_Func_impl_no_alloc__lambda_702b059237f471f0f2abb9216d2aed5e__void_winrt--Wind_ea_1801CE900.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$DashboardInteracted@AEBUguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAXAEBUguid@winrt@@$$QEAIAEA_N@Z @ 0x18017BC14 (--$DashboardInteracted@AEBUguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAXAEBUguid@winrt@@$$QE.c)
 *     ?IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18017F7C4 (-IsDashboardVisible@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJXZ @ 0x1801806C8 (-DisableWindowHardeningPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CAJX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_702b059237f471f0f2abb9216d2aed5e_::operator()(__int64 a1, IUnknown **a2)
{
  int v4; // eax
  HRESULT v5; // eax
  IUnknown *v6; // rcx
  struct IUnknownVtbl *lpVtbl; // rax
  unsigned int v8; // eax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char IsDashboardVisible; // [rsp+70h] [rbp+8h] BYREF
  IUnknown **v13; // [rsp+78h] [rbp+10h]
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v13 = a2;
  IsDashboardVisible = winrt::Windows::Internal::Shell::implementation::DashboardManager::IsDashboardVisible(*(winrt::Windows::Internal::Shell::implementation::DashboardManager **)a1);
  v14 = *(_DWORD *)(a1 + 24);
  DashboardManagerTelemetry::DashboardInteracted<winrt::guid const &,unsigned int,bool &>(
    (__int128 *)(a1 + 8),
    &v14,
    &IsDashboardVisible);
  v4 = winrt::Windows::Internal::Shell::implementation::DashboardManager::DisableWindowHardeningPolicy();
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x419,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = CoAllowSetForegroundWindow(*a2, 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x41A,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
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
  winrt::check_hresult(v8);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)a2);
}
