/*
 * XREFs of ?SwitchToLocalVirtualDesktopInLocalSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x180723828
 * Callers:
 *     ?SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1807078D8 (-SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     _lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__ @ 0x18071E164 (_lambda_2f7fc8b500d57ad36b179527aa3b33ab_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SwitchToLocalVirtualDesktopInLocalSession(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  __int64 v1; // rcx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 5);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
    if ( v4 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x344,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      v2);
  }
}
