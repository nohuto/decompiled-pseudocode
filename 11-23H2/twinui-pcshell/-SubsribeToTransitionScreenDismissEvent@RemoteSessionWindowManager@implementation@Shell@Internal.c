/*
 * XREFs of ?SubsribeToTransitionScreenDismissEvent@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180723308
 * Callers:
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x180720D54 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?make_weak_ref@?$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800DA618 (-make_weak_ref@-$root_implements@URemoteSessionWindowManager@implementation@Shell@Internal@Windo.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_665315f8e7a3be3e9382c02473f3b139___ @ 0x18027A33C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--CloudDesktop--Tra.c)
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::_lambda_665315f8e7a3be3e9382c02473f3b139_ @ 0x18027AD08 (_lambda_665315f8e7a3be3e9382c02473f3b139_--_lambda_665315f8e7a3be3e9382c02473f3b139_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x18038CC34 (--0bad_alloc@std@@QEAA@XZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18071D9F0 (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 *     ??$from_com_ref@AEBUITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@?$weak_ref@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@AEAAXAEBUITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@1@@Z @ 0x18071F18C (--$from_com_ref@AEBUITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt.c)
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x180720264 (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@_ea_180720264.c)
 *     ??4?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1807301D4 (--4-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SubsribeToTransitionScreenDismissEvent(
        volatile signed __int64 *a1,
        RTL_SRWLOCK **a2)
{
  void (__fastcall ***Ptr)(_QWORD, __int64 *, __int64 *); // rbx
  volatile signed __int32 *v5; // rcx
  __int64 *weak_ref; // rax
  signed int v7; // eax
  __int64 *v8; // rdx
  signed int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  RTL_SRWLOCK *v12; // rbx
  const char *v13; // r9
  __int64 v14; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-90h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-88h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18[3]; // [rsp+50h] [rbp-68h] BYREF
  RTL_SRWLOCK *v19; // [rsp+68h] [rbp-50h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v21[6]; // [rsp+88h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v23; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+18h] BYREF
  void (__fastcall ***v25)(_QWORD, __int64 *, __int64 *); // [rsp+D8h] [rbp+20h] BYREF

  LODWORD(v23) = 0;
  Ptr = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))(*a2)[1].Ptr;
  v25 = Ptr;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  *(_OWORD *)v17 = 0LL;
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    v17[0] = (std::_Ref_count_base *)*a2;
    v17[1] = (std::_Ref_count_base *)v5;
    _InterlockedIncrement(v5 + 3);
    Ptr = v25;
  }
  weak_ref = (__int64 *)winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteSessionWindowManager>::make_weak_ref(a1);
  try
  {
    if ( !weak_ref )
    {
      std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
      throw (std::bad_alloc *)pExceptionObject;
    }
    v15 = weak_ref;
    v24 = 0LL;
    LODWORD(v23) = 2;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*weak_ref + 24))(weak_ref, &v24);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref((__int64 *)&v15);
    v8 = (__int64 *)lambda_665315f8e7a3be3e9382c02473f3b139_::_lambda_665315f8e7a3be3e9382c02473f3b139_(
                      v21,
                      &v24,
                      (__int64)v17);
    winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::DismissedArguments___lambda_665315f8e7a3be3e9382c02473f3b139___(
      &v14,
      v8);
    v23 = 0LL;
    v9 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64 *))(*Ptr)[13])(Ptr, v14, &v23);
    if ( v9 < 0 )
      winrt::throw_hresult(v9);
    v10 = v23;
    v15 = v16;
    v16[0] = 0LL;
    winrt::weak_ref<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::from_com_ref<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen const &>(
      v16,
      &v25);
    v16[1] = v10;
    v11 = v16[0];
    v16[0] = 0LL;
    v18[0] = v11;
    v18[1] = (__int64) winrt::impl::abi<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen,void>::type::`vcall'{112,{flat}};
    v18[2] = v10;
    __1__event_revoker_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt___MP8type___abi_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BHA_AA_impl_winrt__QEAA_XZ(v16);
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
    if ( v24 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v24);
    v12 = *a2;
    wil::srwlock::lock_exclusive(*a2 + 2, &v19);
    winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::operator=(
      &v12[17],
      v18);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v19);
    winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke((__int64)v18);
    if ( v18[0] )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v18);
    if ( v17[1] )
      std::_Ref_count_base::_Decwref(v17[1]);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x338,
      (int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionwindowmanager.cpp",
      v13);
  }
}
