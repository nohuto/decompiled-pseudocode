/*
 * XREFs of ?ShowErrorTransitionScreen@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x1807328B0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?Update@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180723980 (-Update@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITrans.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x18072E704 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScr_ea_18072E704.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x180733A64 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4CloudPCState@3456@XZ @ 0x180733C0C (-State@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4CloudPCStat.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AU0TransitionScreen@CloudDesktop@3456@XZ @ 0x180733CD8 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x180733D34 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::ShowErrorTransitionScreen(
        __int64 a1,
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **a2)
{
  int v4; // eax
  __int64 v5; // r12
  _QWORD *v6; // rbx
  unsigned int *v7; // rax
  HMONITOR v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // [rsp+50h] [rbp-19h] BYREF
  __int64 v13; // [rsp+58h] [rbp-11h] BYREF
  volatile signed __int32 *v14; // [rsp+60h] [rbp-9h] BYREF
  volatile signed __int32 *v15; // [rsp+68h] [rbp-1h] BYREF
  _BYTE v16[8]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v17[9]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned int v18; // [rsp+D8h] [rbp+6Fh] BYREF
  POINT pt; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v20; // [rsp+E8h] [rbp+7Fh] BYREF

  v4 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::State(*a2);
  v5 = *((_QWORD *)*a2 + 1);
  if ( v4 )
  {
    v13 = *((_QWORD *)*a2 + 1);
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    v18 = 2;
    pt = 0LL;
    v8 = MonitorFromPoint(0LL, 1u);
    v17[0] = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)a1 + 128LL))(
                          a1,
                          &v15);
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 120LL))(a1, v16);
    pt.x = 1;
    v12 = *(_QWORD *)*a2;
    v10 = v12;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
      &v12,
      &v14);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
      &v13,
      &v20,
      &v14,
      (unsigned int *)&pt,
      v9,
      v17,
      (__int64)v8,
      1,
      &v18);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
    if ( v10 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*a2, 1);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
      *a2,
      (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v20);
  }
  else
  {
    v20 = *((_QWORD *)*a2 + 1);
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v20);
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)a1 + 120LL))(a1, &v15);
    v18 = 1;
    v7 = (unsigned int *)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
                           *a2,
                           &pt);
    winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Update(
      &v20,
      v7,
      &v18,
      v6);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  }
  return winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(*a2, 1LL);
}
