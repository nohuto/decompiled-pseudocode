/*
 * XREFs of ?GetRemoteDesktopName@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x180725DD8
 * Callers:
 *     ?GetRemoteSystemName@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1807217F0 (-GetRemoteSystemName@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730220 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 *     ?RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x180732144 (-RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Window.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?DisplayName@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180725CFC (-DisplayName@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Interna.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x180725D50 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@URegistrationData@Shell@Inter.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@URegistrationData@Shell@Internal@45@@impl@winrt@@QEBA@XZ @ 0x180725E7C (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@URegistrationData@Shell@Intern.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::GetRemoteDesktopName(
        _QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v6; // [rsp+50h] [rbp+18h]

  AcquireSRWLockShared(&winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_lock);
  v6 = &winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_lock;
  if ( (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::Size() )
  {
    v3 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Internal::Shell::RegistrationData>,winrt::Windows::Internal::Shell::RegistrationData>::GetAt(
           v2,
           &v5,
           0);
    winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::DisplayName(
      v3,
      a1);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  ReleaseSRWLockShared(&winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::m_lock);
  return a1;
}
