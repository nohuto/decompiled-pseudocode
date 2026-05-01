/*
 * XREFs of ?RecoverRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1801AD81C
 * Callers:
 *     ?RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18008CD68 (-RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x18008CE7C (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x180711EC4 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RecoverRemoteSessions(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *v2; // rcx
  char v3; // di
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile __int64 *v6; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    v2 = *(winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v6);
    v3 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RecoverRemoteSessionsData(v2);
    if ( v6 )
      winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(&v6);
    *((_BYTE *)this + 248) = v3;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1E8,
      (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      v4);
  }
}
