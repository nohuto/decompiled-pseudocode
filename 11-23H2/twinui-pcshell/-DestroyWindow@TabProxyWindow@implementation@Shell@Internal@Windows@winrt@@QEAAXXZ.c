/*
 * XREFs of ?DestroyWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1800353E0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9___::Invoke @ 0x1800356A0 (CAsyncCallbackWithLambda__lambda_3333870f0a6df31e96efe5437eaf05f9___--Invoke.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x180050D84 (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___::_ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___ @ 0x18063A954 (wil--details--ScopeExitFn__lambda_7e18fbc32ccf02786ed85ea49ff66772___--_ScopeExitFn__lambda_7e18.c)
 *     ?DestroyWindowInternal@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ @ 0x18063AF20 (-DestroyWindowInternal@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJXZ.c)
 * Callees:
 *     ?TabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x180035438 (-TabChanged@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::DestroyWindow(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  const char *v2; // r9
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 185) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 14) + 96LL))(
           *((_QWORD *)this + 14),
           *((_QWORD *)this + 4));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13E,
        (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
        (const char *)(unsigned int)v3,
        v4);
  }
  if ( !DestroyWindow(*((HWND *)this + 4)) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x141,
      (unsigned int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      v2);
  *((_QWORD *)this + 4) = 0LL;
  if ( *((_QWORD *)this + 6) )
    winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::TabChanged(
      (char *)this + 48,
      (char *)this + 152);
}
