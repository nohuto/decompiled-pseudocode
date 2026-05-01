/*
 * XREFs of ?Execute@SwitchConnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x1807316A0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$convert@$00U_GUID@@@guid@winrt@@CA?AU01@AEBU_GUID@@@Z @ 0x180088608 (--$convert@$00U_GUID@@@guid@winrt@@CA-AU01@AEBU_GUID@@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18072FE68 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ?SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUhstring@6@@Z @ 0x1807324F8 (-SetForegroundToLastRegistedProviderWindow@SwitchConnectStateBase@implementation@Shell@Internal@.c)
 *     ?DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@AEBW4DismissalReason@TransitionScreen@CloudDesktop@3456@@Z @ 0x180735D40 (-DismissTransitionScreen@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXA.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x180736C60 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectedState::Execute(
        __int64 a1,
        _QWORD **a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // [rsp+20h] [rbp-40h] BYREF
  volatile signed __int32 *v13; // [rsp+28h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-20h] BYREF

  if ( a3 )
  {
    if ( a3 != 2 && a3 != 99 )
      winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 1LL);
  }
  else
  {
    *(_QWORD *)&v14 = **a2;
    v6 = v14;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
      (__int64 *)&v14,
      &v12);
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    LODWORD(v14) = 3;
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::DismissTransitionScreen(v7, a2, &v14, v8);
    winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase::SetForegroundToLastRegistedProviderWindow(
      (winrt::Windows::Internal::Shell::implementation::SwitchConnectStateBase *)(a1 + 8),
      (const struct winrt::hstring *)&v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  }
  if ( *(_QWORD *)(a1 + 96) && a3 != 99 )
  {
    *(_QWORD *)&v14 = **a2;
    v9 = v14;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
      (__int64 *)&v14,
      &v13);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(
      *(PSRWLOCK *)(a1 + 16),
      (__int64 *)&v12,
      (__int64 *)&v13);
    v10 = v12;
    if ( v12 )
    {
      v14 = 0LL;
      if ( (*(int (__fastcall **)(volatile signed __int32 *, __int128 *))(*(_QWORD *)v12 + 32LL))(v12, &v14) >= 0 )
      {
        winrt::guid::convert<1,_GUID>((__int64)v15, (int *)&v14);
        v11 = *(_QWORD *)(a1 + 96);
        if ( !v11 )
        {
          std::_Xbad_function_call();
          __debugbreak();
        }
        (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 16LL))(v11, v15);
      }
    }
    if ( v10 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  }
}
