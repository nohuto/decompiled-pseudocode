/*
 * XREFs of ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180411D20
 * Callers:
 *     ?OnClientWindowReadyForPresentationChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUIClientWindowState@ViewManagerInterop@Shell@456@UIClientWindowReadyForPresentationChangedEventArgs@89456@@Z @ 0x1804104C0 (-OnClientWindowReadyForPresentationChanged@GameBarWindowControlImpl@implementation@GamingOverlay.c)
 *     ?OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x1804106DC (-OnViewCreated@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEA.c)
 *     ?Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ @ 0x180411CB8 (-Show@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Navigate@?$consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@3@@Z @ 0x1802D3A40 (-Navigate@-$consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper@UIViewWrapper@ViewMan.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18040ED34 (--$as@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknown.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18040F4D0 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@W4GameBarWindowState@3456@@Z @ 0x180411F2C (-UpdateWindowState@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(
        __int64 a1,
        __int64 a2)
{
  signed int v3; // eax
  int v4; // eax
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  if ( *(_QWORD *)(a1 + 40) )
  {
    winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ApplyPendingValues(a1, a2);
    winrt::impl::as<winrt::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &v9,
      *(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))(a1 + 24));
    v8 = 4;
    winrt::impl::consume_Windows_Internal_Shell_ViewManagerInterop_IViewWrapper<winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::Navigate(
      (_QWORD *)(a1 + 24),
      &v8);
    LOBYTE(v8) = 0;
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 72LL))(v9, &v8);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    if ( (_BYTE)v8 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40), 0LL);
      if ( v4 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x18D,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamebarwindowcontrol.cpp",
          (const char *)(unsigned int)v4,
          v6);
      *(_BYTE *)(a1 + 105) = 0;
      winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::UpdateWindowState(a1, v5, 2LL);
    }
    else
    {
      LOWORD(v8) = 257;
      *(_WORD *)(a1 + 104) = 257;
    }
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  }
  else
  {
    *(_WORD *)(a1 + 104) = 257;
  }
}
