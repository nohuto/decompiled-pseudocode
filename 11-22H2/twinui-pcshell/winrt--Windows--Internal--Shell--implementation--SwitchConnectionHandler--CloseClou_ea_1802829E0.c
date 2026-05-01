/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x1802829E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_InitCoro$2 @ 0x1802828E8 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 * Callees:
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA@XZ @ 0x18006FD1C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$.c)
 *     ??1awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x180071960 (--1awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExperienceManager@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExperienceManager@@@experimental@std@@@experimental@std@@@Z @ 0x180073D78 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExpe.c)
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D2458 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_1800D2458.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801BAF48 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA?AV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x180210FE8 (-shared_from_this@-$enable_shared_from_this@USwitchConnectionHandler@implementation@Shell@Intern.c)
 *     ??1?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ @ 0x180276C00 (--1-$test_data_control@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA@XZ.c)
 *     ?complete@?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAAXXZ @ 0x1802788A4 (-complete@-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAAXXZ.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_66e3247105c53d232400c257ddcfd6f2__0_ @ 0x180281B58 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_66e3247105c53d232400c257.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_c08ce6a39495b94ac81d1bf94c809a99__0_ @ 0x180281C88 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_c08ce6a39495b94ac81d1bf9.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_d5554fb7d1d16b7c69ea1af45fa7d089__0_ @ 0x180281DD0 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_d5554fb7d1d16b7c69ea1af4.c)
 *     _lambda_c08ce6a39495b94ac81d1bf94c809a99_::_lambda_c08ce6a39495b94ac81d1bf94c809a99_ @ 0x1802822C0 (_lambda_c08ce6a39495b94ac81d1bf94c809a99_--_lambda_c08ce6a39495b94ac81d1bf94c809a99_.c)
 *     _lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_ @ 0x180282374 (_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_--_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_ @ 0x180282514 (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_180282514.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x1802D2E70 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@U-$IAsyncOperation@UIR.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ?release_ref@?$com_ptr@VJointResize@@@winrt@@AEAAXXZ @ 0x180392284 (-release_ref@-$com_ptr@VJointResize@@@winrt@@AEAAXXZ.c)
 *     ??B?$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ @ 0x1806006B8 (--B-$test_watcher@U_tip_RemoteSessionOnStateChangedTipTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA?AV?$test_data_control@U_tip_VDSlideAnimationPerfTest@@@1@XZ @ 0x1806006DC (--C-$test_watcher@U_tip_VDSlideAnimationPerfTest@@@tip@@QEAA-AV-$test_data_control@U_tip_VDSlide.c)
 *     ?now@clock@winrt@@SA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x1806F70F4 (-now@clock@winrt@@SA-AV-$time_point@Uclock@winrt@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA?A_PXZ @ 0x18070CD04 (--$open_and_watch_errors@V-$tip_test@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ??C?$test_data_control@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEBAPEAU_tip_DeactivateRemoteDesktopTipTest@@XZ @ 0x18070EF6C (--C-$test_data_control@U_tip_DeactivateRemoteDesktopTipTest@@@tip@@QEBAPEAU_tip_DeactivateRemote.c)
 *     ?SystemId@?$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1807192A8 (-SystemId@-$consume_Windows_Internal_Shell_IRegistrationData@UIRegistrationData@Shell@Internal@W.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAA_NXZ @ 0x18071A844 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout.c)
 *     ??$?0USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$0A@@?$weak_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@std@@QEAA@AEBV?$shared_ptr@USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18071CE5C (--$-0USwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@$0A@@-$weak_ptr@USwit.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18072FE68 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ?Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18073002C (-Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 *     ?Dismiss@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUTransitionScreenId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4DismissalReason@567893@@Z @ 0x180731654 (-Dismiss@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITran.c)
 *     ?RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DisconnectSource@23456@AEBUhstring@6@1_N@Z @ 0x1807320D0 (-RaiseCPCProviderAppClosedTelemetryEvent@SwitchConnectionHandler@implementation@Shell@Internal@W.c)
 *     ?DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4DisconnectSource@23456@XZ @ 0x180733914 (-DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-AW4.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180733ABC (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Win_ea_180733ABC.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x180733B70 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?SetTransitionScreenDismissedCallback@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z @ 0x180733B98 (-SetTransitionScreenDismissedCallback@RemoteSessionInformation@implementation@Shell@Internal@Win.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x180733CB0 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AU0TransitionScreen@CloudDesktop@3456@XZ @ 0x180733CD8 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 *     ?TransitionScreenShownTime@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x180733D8C (-TransitionScreenShownTime@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA?AW4ScreenType@TransitionScreen@CloudDesktop@3456@XZ @ 0x180733DEC (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 */

// Hidden C++ exception states: #wind=19
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1(
        char *a1)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, char *); // rbx
  int v6; // eax
  __int64 v7; // rax
  _QWORD *v8; // r12
  bool IsTransitionScreenShown; // bl
  int v10; // eax
  char v11; // cl
  bool v12; // zf
  char v13; // al
  __int64 v14; // rbx
  unsigned int v15; // edi
  PVOID *v16; // rbx
  __int16 v17; // ax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  std::_Ref_count_base *v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  char *v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(__int64, char *); // rdi
  int v34; // eax
  _QWORD *v35; // rdi
  __int64 *v36; // rax
  __int64 (__fastcall ***v37)(_QWORD, GUID *, char *); // rdi
  __int64 (__fastcall *v38)(_QWORD, GUID *, char *); // rbx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // [rsp+20h] [rbp-158h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_79;
      case 2:
        v2 = *(RTL_SRWLOCK **)(a1 + 827);
        std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::shared_from_this(
          (__int64)&v2[9],
          (_QWORD *)a1 + 2);
        tip::open_and_watch_errors<tip::tip_test<_tip_DeactivateRemoteDesktopTipTest>>((struct wil::details::IFailureCallback *)(a1 + 32));
        wil::srwlock::lock_exclusive(v2 + 20, (RTL_SRWLOCK **)a1 + 12);
        a1[104] = 0;
        *((_QWORD *)a1 + 14) = a1 + 104;
        if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
          goto LABEL_8;
        *((_WORD *)a1 + 4) = 4;
        ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__U__IAsyncOperation_UIRandomAccessStreamReference_Streams_Storage_Windows_winrt___Foundation_Windows_2__experimental_std___experimental_std___Z(
          v3,
          a1);
        return;
      case 4:
LABEL_8:
        _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
        *((_QWORD *)a1 + 15) = 0LL;
        v4 = *(_QWORD *)(*(_QWORD *)(a1 + 827) + 152LL);
        v5 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL);
        winrt::com_ptr<JointResize>::release_ref(a1 + 120);
        v6 = v5(v4, a1 + 120);
        if ( v6 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1BA,
            (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
            (const char *)(unsigned int)v6,
            v51);
        v7 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
               *(_QWORD *)(a1 + 835),
               a1 + 128);
        winrt::impl::consume_Windows_Internal_Shell_IRegistrationData<winrt::Windows::Internal::Shell::IRegistrationData>::SystemId(
          v7,
          a1 + 136);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 128));
        v8 = a1 + 144;
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(*(PSRWLOCK *)(*(_QWORD *)(a1 + 827)
                                                                                                  + 136LL));
        IsTransitionScreenShown = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*(winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **)(a1 + 835));
        v10 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(*(_QWORD *)(a1 + 835));
        if ( !IsTransitionScreenShown || (v11 = 1, v10 != 3) )
          v11 = 0;
        a1[152] = v11;
        if ( !IsTransitionScreenShown || (v12 = v10 == 1, v13 = 1, !v12) )
          v13 = 0;
        a1[825] = v13;
        a1[153] = v13;
        a1[154] = 0;
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenShownTime(
          *(_QWORD *)(a1 + 835),
          a1 + 160);
        winrt::clock::now(a1 + 168);
        v14 = *((_QWORD *)a1 + 21) - *((_QWORD *)a1 + 20);
        v15 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::DisconnectReason(*(_QWORD *)(a1 + 835));
        *((_DWORD *)a1 + 44) = v15;
        if ( *v8 == *((_QWORD *)a1 + 15) )
        {
          if ( a1[152] && v14 < 30000000 )
          {
            *((_QWORD *)a1 + 23) = 0LL;
            *((_QWORD *)a1 + 24) = 0LL;
            *((_QWORD *)a1 + 25) = 30000000 - v14;
            *((_QWORD *)a1 + 26) = 0LL;
            *((_DWORD *)a1 + 54) = 0;
            v16 = (PVOID *)(a1 + 224);
            *((_QWORD *)a1 + 28) = a1 + 184;
            if ( !_await_ready___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)(a1 + 224)) )
            {
              v17 = 6;
LABEL_21:
              *((_WORD *)a1 + 4) = v17;
              ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVCControlCenterExperienceManager___experimental_std_____notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAVCControlCenterExperienceManager___experimental_std___experimental_std___Z(v16);
              return;
            }
LABEL_48:
            _await_resume___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_XZ((_QWORD *)a1 + 28);
            `winrt::resume_after'::`2'::awaitable::~awaitable((volatile __int64 **)a1 + 23);
            v32 = *(_QWORD *)(*(_QWORD *)(a1 + 827) + 152LL);
            v33 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 48LL);
            winrt::com_ptr<JointResize>::release_ref(a1 + 120);
            v34 = v33(v32, a1 + 120);
            if ( v34 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1CE,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v34,
                v51);
          }
          if ( *((_QWORD *)a1 + 15) == *((_QWORD *)a1 + 18) )
          {
            v35 = *(_QWORD **)(a1 + 827);
            v36 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*v35 + 72LL))(v35, a1 + 232);
            winrt::com_ptr<ITouchSwipe>::operator=((__int64 *)a1 + 15, v36);
            winrt::com_ptr<JointResize>::release_ref(a1 + 232);
            *((_QWORD *)a1 + 30) = 0LL;
            v37 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))v35[19];
            v38 = **v37;
            winrt::com_ptr<JointResize>::release_ref(a1 + 240);
            v39 = v38(v37, &GUID_53f5ca0b_158f_4124_900c_057158060b27, a1 + 240);
            if ( v39 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1D6,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v39,
                v51);
            v40 = (*(__int64 (**)(void))(**((_QWORD **)a1 + 30) + 184LL))();
            if ( v40 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1D7,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v40);
            winrt::com_ptr<JointResize>::release_ref(a1 + 240);
          }
          if ( !a1[152] && !a1[825] )
          {
            v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 827) + 152LL) + 96LL))(*(_QWORD *)(*(_QWORD *)(a1 + 827) + 152LL));
            v29 = retaddr;
            if ( v41 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x1F4,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v41,
                v51);
            v31 = *((unsigned int *)a1 + 44);
            v30 = a1 + 136;
LABEL_43:
            winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RaiseCPCProviderAppClosedTelemetryEvent(
              v29,
              v31,
              a1 + 851,
              v30);
            goto LABEL_44;
          }
          v42 = std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::shared_from_this(
                  *(_QWORD *)(a1 + 827) + 72LL,
                  (_QWORD *)a1 + 33);
          std::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>(
            a1 + 248,
            v42);
          if ( *((_QWORD *)a1 + 34) )
            std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)a1 + 34));
          v43 = *(_QWORD *)(a1 + 835);
          v44 = lambda_d5554fb7d1d16b7c69ea1af45fa7d089_::_lambda_d5554fb7d1d16b7c69ea1af45fa7d089_(
                  (__int64)(a1 + 352),
                  (__int64)(a1 + 248),
                  (__int64)(a1 + 144),
                  (_QWORD *)a1 + 15,
                  (winrt::impl **)(a1 + 851),
                  (winrt::impl **)a1 + 17,
                  (_DWORD *)a1 + 44,
                  a1 + 153);
          std::function_void___cdecl_void__::function_void___cdecl_void____lambda_d5554fb7d1d16b7c69ea1af45fa7d089__0_(
            (__int64)(a1 + 288),
            v44);
          winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::SetTransitionScreenDismissedCallback(
            v43,
            a1 + 288);
          std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
            (__int64)(a1 + 288),
            v45);
          v46 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                  *(_QWORD *)(a1 + 835),
                  a1 + 408);
          *((_DWORD *)a1 + 104) = 7;
          v47 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
                  *(_QWORD *)(a1 + 835),
                  a1 + 420);
          winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Dismiss(
            v46,
            v47,
            a1 + 416);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 408));
          if ( *((_QWORD *)a1 + 32) )
            std::_Ref_count_base::_Decwref(*((std::_Ref_count_base **)a1 + 32));
LABEL_70:
          winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Remove(
            *(PSRWLOCK *)(*(_QWORD *)(a1 + 827) + 136LL),
            (const struct winrt::hstring *)(a1 + 136));
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl)
            && !LockSetForegroundWindow(2u) )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x243,
              (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
              (const char *)0x80070005LL);
          }
          if ( a1[154]
            && (unsigned __int8)tip::test_watcher<_tip_RemoteSessionOnStateChangedTipTest>::operator bool(a1 + 32) )
          {
            v50 = tip::test_watcher<_tip_VDSlideAnimationPerfTest>::operator->(a1 + 32, a1 + 808);
            *(_BYTE *)(tip::test_data_control<_tip_DeactivateRemoteDesktopTipTest>::operator->(v50) + 41) = 1;
            tip::test_data_control<_tip_VDSlideAnimationPerfTest>::~test_data_control<_tip_VDSlideAnimationPerfTest>((__int64 *)a1 + 101);
            tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::complete((__int64)(a1 + 32));
          }
          winrt::com_ptr<JointResize>::release_ref(a1 + 144);
          winrt::hstring::~hstring((void **)a1 + 17);
          winrt::com_ptr<JointResize>::release_ref(a1 + 120);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 12);
          tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)(a1 + 32));
          if ( *((_QWORD *)a1 + 3) )
            std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)a1 + 3));
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
            a1,
            a1 + 824);
LABEL_79:
          winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::__parameters_((__int64)(a1 + 827));
          if ( *((_WORD *)a1 + 5) )
            operator delete(a1);
          return;
        }
        if ( !*v8 )
        {
LABEL_44:
          a1[154] = 1;
          goto LABEL_70;
        }
        if ( !a1[152] )
        {
          v28 = (*(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)(a1 + 827) + 152LL) + 96LL))();
          v29 = retaddr;
          if ( v28 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x236,
              (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
              (const char *)(unsigned int)v28,
              v51);
          v30 = a1 + 136;
          v31 = v15;
          goto LABEL_43;
        }
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl) )
        {
          v18 = std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::shared_from_this(
                  *(_QWORD *)(a1 + 827) + 72LL,
                  (_QWORD *)a1 + 55);
          std::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>(
            a1 + 424,
            v18);
          if ( *((_QWORD *)a1 + 56) )
            std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)a1 + 56));
          v19 = *(_QWORD *)(a1 + 835);
          v20 = lambda_c08ce6a39495b94ac81d1bf94c809a99_::_lambda_c08ce6a39495b94ac81d1bf94c809a99_(
                  (__int64)(a1 + 528),
                  (__int64)(a1 + 424),
                  (__int64)(a1 + 144),
                  (_QWORD *)a1 + 15,
                  (_DWORD *)a1 + 44,
                  (winrt::impl **)a1 + 17,
                  (winrt::impl **)(a1 + 851));
          std::function_void___cdecl_void__::function_void___cdecl_void____lambda_c08ce6a39495b94ac81d1bf94c809a99__0_(
            (__int64)(a1 + 464),
            v20);
          winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::SetTransitionScreenDismissedCallback(
            v19,
            a1 + 464);
          std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
            (__int64)(a1 + 464),
            v21);
          if ( !*((_QWORD *)a1 + 54) )
            goto LABEL_69;
          v22 = (std::_Ref_count_base *)*((_QWORD *)a1 + 54);
        }
        else
        {
          if ( v15 == 1 )
          {
            v23 = (*(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)(a1 + 827) + 152LL) + 96LL))();
            if ( v23 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x215,
                (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
                (const char *)(unsigned int)v23,
                v51);
            winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::RaiseCPCProviderAppClosedTelemetryEvent(
              retaddr,
              1LL,
              a1 + 851,
              a1 + 136);
            a1[154] = 1;
            if ( v14 < 30000000 )
            {
              *((_QWORD *)a1 + 73) = 0LL;
              *((_QWORD *)a1 + 74) = 0LL;
              *((_QWORD *)a1 + 75) = 30000000 - v14;
              *((_QWORD *)a1 + 76) = 0LL;
              *((_DWORD *)a1 + 154) = 0;
              v16 = (PVOID *)(a1 + 624);
              *((_QWORD *)a1 + 78) = a1 + 584;
              if ( !_await_ready___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)(a1 + 624)) )
              {
                v17 = 8;
                goto LABEL_21;
              }
LABEL_68:
              _await_resume___notify_awaiter_Uawaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_XZ((_QWORD *)a1 + 78);
              `winrt::resume_after'::`2'::awaitable::~awaitable((volatile __int64 **)a1 + 73);
            }
            goto LABEL_69;
          }
          v24 = std::enable_shared_from_this<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::shared_from_this(
                  *(_QWORD *)(a1 + 827) + 72LL,
                  (_QWORD *)a1 + 81);
          std::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>::weak_ptr<winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler>(
            a1 + 632,
            v24);
          if ( *((_QWORD *)a1 + 82) )
            std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)a1 + 82));
          v25 = *(_QWORD *)(a1 + 835);
          v26 = lambda_c08ce6a39495b94ac81d1bf94c809a99_::_lambda_c08ce6a39495b94ac81d1bf94c809a99_(
                  (__int64)(a1 + 736),
                  (__int64)(a1 + 632),
                  (__int64)(a1 + 144),
                  (_QWORD *)a1 + 15,
                  (_DWORD *)a1 + 44,
                  (winrt::impl **)a1 + 17,
                  (winrt::impl **)(a1 + 851));
          std::function_void___cdecl_void__::function_void___cdecl_void____lambda_66e3247105c53d232400c257ddcfd6f2__0_(
            (__int64)(a1 + 672),
            v26);
          winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::SetTransitionScreenDismissedCallback(
            v25,
            a1 + 672);
          std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
            (__int64)(a1 + 672),
            v27);
          if ( !*((_QWORD *)a1 + 80) )
          {
LABEL_69:
            v48 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(
                    *(_QWORD *)(a1 + 835),
                    a1 + 792);
            *((_DWORD *)a1 + 200) = 8;
            v49 = winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
                    *(_QWORD *)(a1 + 835),
                    a1 + 804);
            winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Dismiss(
              v48,
              v49,
              a1 + 800);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 792));
            goto LABEL_70;
          }
          v22 = (std::_Ref_count_base *)*((_QWORD *)a1 + 80);
        }
        std::_Ref_count_base::_Decwref(v22);
        goto LABEL_69;
      case 5:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 12);
        tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)(a1 + 32));
        if ( *((_QWORD *)a1 + 3) )
          std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)a1 + 3));
        goto LABEL_79;
      case 6:
        goto LABEL_48;
      case 7:
        `winrt::resume_after'::`2'::awaitable::~awaitable((volatile __int64 **)a1 + 23);
        winrt::com_ptr<JointResize>::release_ref(a1 + 144);
        winrt::hstring::~hstring((void **)a1 + 17);
        winrt::com_ptr<JointResize>::release_ref(a1 + 120);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 12);
        tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)(a1 + 32));
        if ( *((_QWORD *)a1 + 3) )
          std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)a1 + 3));
        goto LABEL_79;
      case 8:
        goto LABEL_68;
      case 9:
        `winrt::resume_after'::`2'::awaitable::~awaitable((volatile __int64 **)a1 + 73);
        winrt::com_ptr<JointResize>::release_ref(a1 + 144);
        winrt::hstring::~hstring((void **)a1 + 17);
        winrt::com_ptr<JointResize>::release_ref(a1 + 120);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)a1 + 12);
        tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)(a1 + 32));
        if ( *((_QWORD *)a1 + 3) )
          std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)a1 + 3));
        goto LABEL_79;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
