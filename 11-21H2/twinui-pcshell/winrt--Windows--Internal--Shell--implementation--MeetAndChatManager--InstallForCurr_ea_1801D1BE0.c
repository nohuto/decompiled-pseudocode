/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1 @ 0x1801D1BE0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_InitCoro$2 @ 0x1801D1AC0 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCurrentUserAsync$.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020174 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1800444D8 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@ex.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801228B4 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801732E4 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180177638 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180178CCC (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x18017AD28 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ?get_strong@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@QEAA?AU?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801807D0 (-get_strong@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inte.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801D3354 (-IgnoreCurrentThread@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgRe.c)
 *     ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802387B4 (-release_ref@-$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AE.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x180464774 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAUMeetAndChatFallbackProp@implementation@Shell@Internal@34@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?AUfinal_suspend_awaiter@123@XZ @ 0x18056EC54 (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@.c)
 *     winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___ @ 0x1805BEA3C (winrt--Windows--Foundation--AsyncOperationProgressHandler_winrt--Windows--Internal--Shell--MeetA.c)
 *     winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___ @ 0x1805BEB44 (winrt--Windows--Foundation--AsyncOperationWithProgressCompletedHandler_winrt--Windows--Internal-.c)
 *     ??$?0VActivityThreadWatcher@wil@@$0A@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@$$QEAVActivityThreadWatcher@wil@@@Z @ 0x1805BEBB8 (--$-0VActivityThreadWatcher@wil@@$0A@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAA@$$QEAVAc.c)
 *     ??$Start@$$V@UserInitiatedInstall@MeetAndChatTelemetry@@SA?AV01@XZ @ 0x1805BF64C (--$Start@$$V@UserInitiatedInstall@MeetAndChatTelemetry@@SA-AV01@XZ.c)
 *     ??$await_transform@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@QEAA?AU?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@12@$$QEAUawaitable@?1??resume_on_signal@2@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@Z @ 0x1805BF8BC (--$await_transform@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$r_ea_1805BF8BC.c)
 *     ??$emplace@VActivityThreadWatcher@wil@@@?$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVActivityThreadWatcher@wil@@$$QEAV23@@Z @ 0x1805BFADC (--$emplace@VActivityThreadWatcher@wil@@@-$optional@VActivityThreadWatcher@wil@@@std@@QEAAAEAVAct.c)
 *     _lambda_4951771febc4dc983c3581d22c2a6e45_::_lambda_4951771febc4dc983c3581d22c2a6e45_ @ 0x1805C00FC (_lambda_4951771febc4dc983c3581d22c2a6e45_--_lambda_4951771febc4dc983c3581d22c2a6e45_.c)
 *     _lambda_724db070561b64a1d673c65688c83bb1_::_lambda_724db070561b64a1d673c65688c83bb1_ @ 0x1805C0118 (_lambda_724db070561b64a1d673c65688c83bb1_--_lambda_724db070561b64a1d673c65688c83bb1_.c)
 *     ??1?$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ @ 0x1805C0740 (--1-$optional@VActivityThreadWatcher@wil@@@std@@QEAA@XZ.c)
 *     ??1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ @ 0x1805C093C (--1UserInitiatedInstall@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??1promise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@UEAA@XZ @ 0x1805C0968 (--1promise_type@-$coroutine_traits@U-$IAsyncOperationWithProgress@UMeetAndChatInstallResult@Meet.c)
 *     ?Completed@?$consume_Windows_Foundation_IAsyncOperationWithProgress@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@34@UMeetAndChatInstallProgress@67834@@impl@winrt@@QEBAXAEBU?$AsyncOperationWithProgressCompletedHandler@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@3@@Z @ 0x1805C0D0C (-Completed@-$consume_Windows_Foundation_IAsyncOperationWithProgress@U-$IAsyncOperationWithProgre.c)
 *     ?EnsureInstallManager@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUMeetAndChatInstallManager@MeetAndChat@3456@XZ @ 0x1805C1278 (-EnsureInstallManager@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUMee.c)
 *     ?InstallForCurrentUserAsync@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallManager@UIMeetAndChatInstallManager@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@3@XZ @ 0x1805CCC6C (-InstallForCurrentUserAsync@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallMana.c)
 *     ?IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805CD2A8 (-IsInstallInProgress@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ.c)
 *     ?Progress@?$consume_Windows_Foundation_IAsyncOperationWithProgress@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@34@UMeetAndChatInstallProgress@67834@@impl@winrt@@QEBAXAEBU?$AsyncOperationProgressHandler@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@3@@Z @ 0x1805CD800 (-Progress@-$consume_Windows_Foundation_IAsyncOperationWithProgress@U-$IAsyncOperationWithProgres.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805CE9F4 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?Succeeded@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1805CF084 (-Succeeded@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatI.c)
 *     ?SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x1805CF0C8 (-SwitchToApplicationFlyoutIfNeeded@MeetAndChatManager@implementation@Shell@Internal@Windows@winr.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@PEAUMeetAndChatManager@implementation@Shell@Internal@34@@experimental@std@@U?$IAsyncOperationWithProgress@UMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@UMeetAndChatInstallProgress@23456@@Foundation@Windows@winrt@@UMeetAndChatInstallProgress@MeetAndChat@Shell@Internal@78@@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x1805CF51C (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_1805CF51C.c)
 *     ?reset@?$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ @ 0x1805CFBC8 (-reset@-$_Optional_destruct_base@VActivityThreadWatcher@wil@@$0A@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync__ResumeCoro_1(
        __int64 a1)
{
  char v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rcx
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v6; // rcx
  bool IsInstallInProgress; // al
  __int64 v8; // rdi
  void *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  winrt::Windows::Foundation::IUnknown *v13; // rax
  _QWORD *strong; // rax
  __int64 v15; // rdx
  wil::ActivityThreadWatcher *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  PVOID *v23; // rdi
  RTL_SRWLOCK **v24; // rdi
  RTL_SRWLOCK *v25; // rcx
  RTL_SRWLOCK *v26; // rax
  RTL_SRWLOCK *v27; // rcx
  char v28; // al
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager **v29; // rcx
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *v30; // rcx
  winrt::Windows::Foundation::IUnknown **v31; // rax
  winrt::Windows::Foundation::IUnknown *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int16 v35; // ax
  __int64 v36; // [rsp+28h] [rbp-D0h]

  v3 = 1;
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_17;
    case 2:
      MeetAndChatTelemetry::UserInitiatedInstall::Start<>((MeetAndChatTelemetry::UserInitiatedInstall *)(a1 + 16));
      *(_QWORD *)(a1 + 1312) = a1 + 1;
      *(_QWORD *)(a1 + 1328) = a1 + 1825;
      v4 = *(_QWORD *)(a1 + 1825);
      *(_QWORD *)(a1 + 1344) = v4;
      *(_QWORD *)(a1 + 992) = v4;
      winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::get_strong(
        v4,
        (_QWORD *)(a1 + 336));
      *(_QWORD *)(a1 + 344) = 0LL;
      *(_QWORD *)(a1 + 1360) = a1 + 1825;
      v5 = *(_QWORD *)(a1 + 1825);
      *(_QWORD *)(a1 + 1376) = v5;
      v5 += 112LL;
      *(_QWORD *)(a1 + 1392) = v5;
      *(_QWORD *)(a1 + 1024) = v5;
      wil::srwlock::lock_exclusive(v5, a1 + 352);
      *(_QWORD *)(a1 + 1408) = a1 + 1825;
      v6 = *(winrt::Windows::Internal::Shell::implementation::MeetAndChatManager **)(a1 + 1825);
      *(_QWORD *)(a1 + 1424) = v6;
      IsInstallInProgress = winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::IsInstallInProgress(v6);
      *(_BYTE *)(a1 + 1008) = IsInstallInProgress;
      if ( IsInstallInProgress )
      {
        v8 = *(_QWORD *)(a1 + 1825);
        winrt::Windows::Foundation::IUnknown::operator=(
          (winrt::Windows::Foundation::IUnknown *)(a1 + 344),
          (winrt::Windows::Foundation::IUnknown *)(v8 + 248));
        *(_BYTE *)(v8 + 208) = 1;
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)(a1 + 352));
      if ( !*(_QWORD *)(a1 + 344) )
      {
        v12 = *(_QWORD *)(a1 + 1825);
        wil::details::ResetEvent(*(wil::details **)(v12 + 256), v9);
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureInstallManager(v12, a1 + 360);
        v13 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallManager<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallManager>::InstallForCurrentUserAsync(
                                                        a1 + 360,
                                                        a1 + 368);
        winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(a1 + 344), v13);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 368));
        strong = winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::get_strong(
                   v12,
                   (_QWORD *)(a1 + 712));
        v15 = lambda_724db070561b64a1d673c65688c83bb1_::_lambda_724db070561b64a1d673c65688c83bb1_(
                a1 + 384,
                strong,
                a1 + 16);
        winrt::Windows::Foundation::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationWithProgressCompletedHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_724db070561b64a1d673c65688c83bb1___(
          a1 + 376,
          v15);
        winrt::impl::consume_Windows_Foundation_IAsyncOperationWithProgress<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::Completed(
          a1 + 344,
          a1 + 376);
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 376));
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 712);
        wil::srwlock::lock_exclusive(v12 + 112, a1 + 720);
        if ( !winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::IsInstallInProgress((winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *)v12) )
          winrt::Windows::Foundation::IUnknown::operator=(
            (winrt::Windows::Foundation::IUnknown *)(v12 + 248),
            (winrt::Windows::Foundation::IUnknown *)(a1 + 344));
        *(_BYTE *)(v12 + 208) = 1;
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)(a1 + 720));
        winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 360));
      }
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
        a1 + 16,
        v9,
        v10,
        v11);
      *(_QWORD *)(a1 + 1440) = a1 - 112;
      *(_QWORD *)(a1 + 1280) = a1 - 112;
      *(_QWORD *)(a1 + 728) = a1 - 112;
      v16 = wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
              (struct wil::details::IFailureCallback *)(a1 + 16),
              (wil::ActivityThreadWatcher *)(a1 + 816));
      std::optional<wil::ActivityThreadWatcher>::optional<wil::ActivityThreadWatcher>(a1 + 736, v16);
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 816));
      v36 = *(_QWORD *)(a1 + 1825);
      v17 = winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::get_strong(
              v36,
              (_QWORD *)(a1 + 912));
      v18 = lambda_4951771febc4dc983c3581d22c2a6e45_::_lambda_4951771febc4dc983c3581d22c2a6e45_(a1 + 896, v17, a1 + 728);
      winrt::Windows::Foundation::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress_::AsyncOperationProgressHandler_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult_winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress___lambda_4951771febc4dc983c3581d22c2a6e45___(
        a1 + 888,
        v18);
      winrt::impl::consume_Windows_Foundation_IAsyncOperationWithProgress<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::Progress(
        a1 + 344,
        a1 + 888);
      winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 888));
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 912);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(
        a1 + 16,
        v19,
        v20,
        v21);
      std::_Optional_destruct_base<wil::ActivityThreadWatcher,0>::reset((wil::details::StoredCallContextInfo *)(a1 + 736));
      v22 = winrt::resume_on_signal(a1 + 920, *(_QWORD *)(v36 + 256), 0LL);
      v23 = (PVOID *)___await_transform_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z____promise_base_Upromise_type___coroutine_traits_U__IAsyncOperationWithProgress_UMeetAndChatInstallResult_MeetAndChat_Shell_Internal_Windows_winrt__UMeetAndChatInstallProgress_23456__Foundation_Windows_winrt__PEAUMeetAndChatManager_implementation_Shell_Internal_34__experimental_std__U__IAsyncOperationWithProgress_UMeetAndChatInstallResult_MeetAndChat_Shell_Internal_Windows_winrt__UMeetAndChatInstallProgress_23456__Foundation_Windows_winrt__UMeetAndChatInstallProgress_MeetAndChat_Shell_Internal_78__impl_winrt__QEAA_AU__notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__12___QEAUawaitable__1__resume_on_signal_2_YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__Z(
                       a1 - 112,
                       a1 + 976,
                       v22);
      *(_QWORD *)(a1 + 1296) = v23;
      if ( _await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)v23) )
        goto LABEL_11;
      *(_WORD *)(a1 + 8) = 6;
      ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z(v23);
      return;
    case 6:
LABEL_11:
      _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ(*(__int64 **)(a1 + 1296));
      `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 920);
      *(_QWORD *)(a1 + 1248) = wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
                                 (struct wil::details::IFailureCallback *)(a1 + 16),
                                 (wil::ActivityThreadWatcher *)(a1 + 1040));
      std::optional<wil::ActivityThreadWatcher>::emplace<wil::ActivityThreadWatcher>((wil::details::StoredCallContextInfo *)(a1 + 736));
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a1 + 1040));
      v24 = (RTL_SRWLOCK **)(*(_QWORD *)(a1 + 1312) + 1824LL);
      *(_QWORD *)(a1 + 1456) = v24;
      v25 = *v24;
      *(_QWORD *)(a1 + 1472) = *v24;
      v25 += 14;
      *(_QWORD *)(a1 + 1488) = v25;
      *(_QWORD *)(a1 + 1184) = v25;
      wil::srwlock::lock_shared(v25, (RTL_SRWLOCK **)(a1 + 1120));
      *(_QWORD *)(a1 + 1504) = v24;
      v26 = *v24;
      *(_QWORD *)(a1 + 1520) = *v24;
      v26 += 26;
      *(_QWORD *)(a1 + 1536) = v26;
      LOBYTE(v26) = v26->Ptr;
      *(_BYTE *)(a1 + 1552) = (_BYTE)v26;
      if ( !(_BYTE)v26
        || (*(_QWORD *)(a1 + 1568) = v24,
            v27 = *v24,
            *(_QWORD *)(a1 + 1584) = *v24,
            *(_QWORD *)(a1 + 1600) = v27 + 30,
            v28 = winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::Succeeded(),
            (*(_BYTE *)(a1 + 1168) = v28) == 0) )
      {
        v3 = 0;
      }
      *(_BYTE *)(a1 + 1112) = v3;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)(a1 + 1120));
      if ( *(_BYTE *)(a1 + 1112) )
      {
        v29 = (winrt::Windows::Internal::Shell::implementation::MeetAndChatManager **)(*(_QWORD *)(a1 + 1312) + 1824LL);
        *(_QWORD *)(a1 + 1616) = v29;
        v30 = *v29;
        *(_QWORD *)(a1 + 1632) = v30;
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SwitchToApplicationFlyoutIfNeeded(v30);
      }
      wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16);
      v31 = (winrt::Windows::Foundation::IUnknown **)(*(_QWORD *)(a1 + 1312) + 1824LL);
      *(_QWORD *)(a1 + 1648) = v31;
      v32 = *v31;
      *(_QWORD *)(a1 + 1664) = *v31;
      v32 = (winrt::Windows::Foundation::IUnknown *)((char *)v32 + 240);
      *(_QWORD *)(a1 + 1680) = v32;
      *(_QWORD *)(a1 + 1144) = v32;
      v33 = *(_QWORD *)(a1 + 1280);
      *(_QWORD *)(a1 + 1696) = v33 + 96;
      *(_QWORD *)(a1 + 1152) = v33 + 96;
      winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)(v33 + 96), v32);
      std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>((wil::details::StoredCallContextInfo *)(a1 + 736));
      winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 344));
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 336);
      MeetAndChatTelemetry::UserInitiatedInstall::~UserInitiatedInstall((MeetAndChatTelemetry::UserInitiatedInstall *)(a1 + 16));
      *(_QWORD *)(a1 + 1808) = *(_QWORD *)(a1 + 1696);
      *(_QWORD *)(a1 + 1264) = v33;
      v34 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp *>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
              *(_QWORD *)(a1 + 1264),
              a1 + 1136);
      *(_QWORD *)(a1 + 1128) = v34;
      *(_WORD *)(a1 + 8) = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>::final_suspend_awaiter::await_suspend(v34) )
        goto LABEL_17;
      return;
    case 7:
      `winrt::resume_on_signal'::`2'::awaitable::~awaitable(a1 + 920);
      std::optional<wil::ActivityThreadWatcher>::~optional<wil::ActivityThreadWatcher>((wil::details::StoredCallContextInfo *)(a1 + 736));
      winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)(a1 + 344));
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(a1 + 336);
      MeetAndChatTelemetry::UserInitiatedInstall::~UserInitiatedInstall((MeetAndChatTelemetry::UserInitiatedInstall *)(a1 + 16));
LABEL_17:
      *(_QWORD *)(a1 + 1440) = a1 - 112;
      *(_QWORD *)(a1 + 1200) = a1 - 112;
      std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallResult,winrt::Windows::Internal::Shell::MeetAndChat::MeetAndChatInstallProgress>,winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *>::promise_type::~promise_type(a1 - 112);
      *(_QWORD *)(a1 + 1728) = a1 + 10;
      v35 = *(_WORD *)(a1 + 10);
      *(_WORD *)(a1 + 1744) = v35;
      if ( v35 )
      {
        *(_QWORD *)(a1 + 1760) = 1945LL;
        *(_QWORD *)(a1 + 1232) = 1945LL;
        *(_QWORD *)(a1 + 1216) = a1 - 112;
        operator delete(*(void **)(a1 + 1216));
      }
      break;
    default:
      __debugbreak();
      break;
  }
}
