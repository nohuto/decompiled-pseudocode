/*
 * XREFs of ?Activate@ProviderActivator@implementation@Shell@Internal@Windows@winrt@@IEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180734C60
 * Callers:
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 *     ?ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x180730220 (-ActivateProvider@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___ @ 0x180284108 (winrt--Windows--Foundation--AsyncOperationCompletedHandler_bool_--AsyncOperationCompletedHandler.c)
 *     _lambda_5dd99ac34d6bd03dd8b88786cad3764c_::_lambda_5dd99ac34d6bd03dd8b88786cad3764c_ @ 0x18028418C (_lambda_5dd99ac34d6bd03dd8b88786cad3764c_--_lambda_5dd99ac34d6bd03dd8b88786cad3764c_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@AEBU?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@3@@Z @ 0x18054DA28 (-Completed@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UTileCollection@Start.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?revoke@?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAAXXZ @ 0x18071D9F0 (-revoke@-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@.c)
 *     ??$_Emplace_reallocate@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAPEAU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@QEAU23@$$QEAU23@@Z @ 0x18072C658 (--$_Emplace_reallocate@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@I.c)
 *     ??1?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x18072CA9C (--1-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@_ea_18072CA9C.c)
 *     ?Rendered@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@X@impl@7@EAAHUevent_token@7@@_E1??_989impl@7@$BGA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@UTransitionScreenId@123456@@Foundation@Windows@3@@Z @ 0x18072E4CC (-Rendered@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITra.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::ProviderActivator::Activate(
        winrt::Windows::Internal::Shell::implementation::ProviderActivator *this,
        const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen *a2,
        const struct winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 *v11; // rdx
  __int64 *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int32 *v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18[4]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+48h] BYREF

  v6 = operator new(0x18uLL);
  v6[1] = this;
  v7 = (unsigned int)_InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 4) = 1;
  *v6 = off_1807CBCE0;
  v14 = v6;
  v8 = winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Rendered(
         (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))a2,
         v16,
         v7,
         &v14);
  v9 = v8[1];
  v10 = *v8;
  *v8 = 0LL;
  v18[0] = v10;
  v18[1] = (__int64) winrt::impl::abi<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen,void>::type::`vcall'{96,{flat}};
  v18[2] = v9;
  __1__event_revoker_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt___MP8type___abi_UITransitionScreen_TransitionScreen_CloudDesktop_Shell_Internal_Windows_winrt__X_impl_7_EAAHUevent_token_7___E1___989impl_7__BGA_AA_impl_winrt__QEAA_XZ(v16);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  v11 = (__int64 *)*((_QWORD *)this + 2);
  if ( v11 == *((__int64 **)this + 3) )
  {
    std::vector<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>::_Emplace_reallocate<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>(
      (__int64 *)this + 1,
      (__int64)v11,
      v18);
  }
  else
  {
    v18[0] = 0LL;
    *v11 = v10;
    v11[1] = (__int64) winrt::impl::abi<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen,void>::type::`vcall'{96,{flat}};
    v11[2] = v9;
    *((_QWORD *)this + 2) += 24LL;
  }
  (*(void (__fastcall **)(winrt::Windows::Internal::Shell::implementation::ProviderActivator *, __int64 *, const struct winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo *))(*(_QWORD *)this + 72LL))(
    this,
    &v19,
    a3);
  v12 = winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
          (__int64 *)a3,
          &v15);
  v13 = lambda_5dd99ac34d6bd03dd8b88786cad3764c_::_lambda_5dd99ac34d6bd03dd8b88786cad3764c_(&v17, (__int64)this, v12);
  winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool_::AsyncOperationCompletedHandler_bool___lambda_5dd99ac34d6bd03dd8b88786cad3764c___(
    &v20,
    (__int64)v13);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::Completed(
    &v19,
    &v20);
  if ( v20 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  if ( v19 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::revoke((__int64)v18);
  if ( v18[0] )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v18);
}
