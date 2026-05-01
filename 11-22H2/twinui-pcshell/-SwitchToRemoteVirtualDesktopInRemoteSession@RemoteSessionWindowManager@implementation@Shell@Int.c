/*
 * XREFs of ?SwitchToRemoteVirtualDesktopInRemoteSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x180723920
 * Callers:
 *     ?SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1807078D8 (-SwitchToCurrentDesktop@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SwitchToRemoteVirtualDesktopInRemoteSession(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  __int64 v1; // rcx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 5);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x33E,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      v2);
  }
}
