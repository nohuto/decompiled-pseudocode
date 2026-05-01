/*
 * XREFs of _lambda_d0d4ed4ae20f08bb1b2e1f4766442458_::operator()_winrt::com_ptr_IVirtualDesktop___ @ 0x180281E30
 * Callers:
 *     ?GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBA?AUAppWindowRemoteDesktopProperties@3456@_K@Z @ 0x1800BDAE0 (-GetAppWindowRemoteDesktopProperties@SwitchConnectionHandler@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall lambda_d0d4ed4ae20f08bb1b2e1f4766442458_::operator()_winrt::com_ptr_IVirtualDesktop___(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3)
{
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 32LL))(*a3);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x292,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v5,
      v7);
  if ( *a3 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a3);
  return a2;
}
