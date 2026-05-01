/*
 * XREFs of ?Execute@SwitchRecoveringState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180731B70
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x180732144 (-RecreateDesktopWithViewsAssociation@SwitchConnectStateBase@implementation@Shell@Internal@Window.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x180736C60 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchRecoveringState::Execute(
        __int64 a1,
        __int64 **a2,
        unsigned int a3)
{
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *v3; // rbx
  __int64 v4; // rdi
  const struct winrt::hstring *v5; // rax
  volatile signed __int32 *v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 != 100 )
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 99LL);
  v3 = (winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(a1 + 8);
  v7 = **a2;
  v4 = v7;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  v5 = (const struct winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
                                        &v7,
                                        v6);
  winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::RecreateDesktopWithViewsAssociation(v3, v5);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v6);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
}
