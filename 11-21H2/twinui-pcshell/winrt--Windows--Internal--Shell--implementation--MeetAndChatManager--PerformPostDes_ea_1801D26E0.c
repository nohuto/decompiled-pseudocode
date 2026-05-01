/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_ResumeCoro$1 @ 0x1801D26E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization$_InitCoro$2 @ 0x1801D2628 (winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--PerformPostDesktopReadyInit.c)
 * Callees:
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18001781C (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflecto.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1800435C8 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@impl.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1800444D8 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@ex.c)
 *     ?Stop@?$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180044994 (-Stop@-$ActivityBase@VMeetAndChatTelemetryLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800C7878 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ??1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ @ 0x1800C7F64 (--1MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAA@XZ.c)
 *     ??0CorrelationVector@@QEAA@XZ @ 0x1800C8100 (--0CorrelationVector@@QEAA@XZ.c)
 *     ??$Start@W4MeetAndChatManagerOperationKind@MeetAndChatTelemetry@@AEAVCorrelationVector@@@MeetAndChatManagerOperation@MeetAndChatTelemetry@@SA?AV01@$$QEAW4MeetAndChatManagerOperationKind@1@AEAVCorrelationVector@@@Z @ 0x1800C8984 (--$Start@W4MeetAndChatManagerOperationKind@MeetAndChatTelemetry@@AEAVCorrelationVector@@@MeetAnd.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5674 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x1801732E4 (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ra.c)
 *     ?await_ready@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA_NXZ @ 0x180177638 (-await_ready@-$notify_awaiter@Uawaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$rat.c)
 *     ?resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180178CCC (-resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x18017AD28 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 *     ??1CorrelationVector@@QEAA@XZ @ 0x18017C464 (--1CorrelationVector@@QEAA@XZ.c)
 *     ?get_strong@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@QEAA?AU?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1801807D0 (-get_strong@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inte.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@CAX_N_JAEBVCorrelationVector@@@Z @ 0x1801D1460 (-EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun@MeetAndChatManager@implementation@Shell@.c)
 *     ?TryGetHighResolutionTimerValue@Utils@@YA_JXZ @ 0x1801D3A88 (-TryGetHighResolutionTimerValue@Utils@@YA_JXZ.c)
 *     ?release_ref@?$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1802387B4 (-release_ref@-$com_ptr@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AE.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::PerformPostDesktopReadyInitialization__ResumeCoro_1(
        void **a1)
{
  void **v1; // rbx
  void **v2; // rsi
  void **v3; // r15
  MeetAndChatTelemetry::MeetAndChatManagerOperation *v4; // r14
  _WORD *v5; // r13
  Utils *v6; // rcx
  wil::details **v7; // r12
  HANDLE v8; // rax
  void *v9; // rdx
  void *v10; // rdx
  wil::ActivityThreadWatcher *v11; // r15
  TraceLoggingCorrelationVector **v12; // rax
  int v13; // edx
  const char *v14; // r9
  __int16 v15; // ax
  wil::ActivityThreadWatcher *v19; // [rsp+38h] [rbp-70h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  try
  {
    v1 = a1;
    v2 = a1;
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_10;
      case 2:
        v3 = a1 + 2;
        CorrelationVector::CorrelationVector((CorrelationVector *)(a1 + 2));
        *((_BYTE *)v1 + 24) = 1;
        v4 = (MeetAndChatTelemetry::MeetAndChatManagerOperation *)(v1 + 4);
        MeetAndChatTelemetry::MeetAndChatManagerOperation::Start<enum MeetAndChatTelemetry::MeetAndChatManagerOperationKind,CorrelationVector &>(
          (struct wil::details::IFailureCallback *)(v1 + 4),
          (char *)v1 + 24,
          (volatile signed __int64 **)v1 + 2);
        v5 = v1 + 44;
        winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::get_strong(
          *(__int64 *)((char *)v1 + 673),
          v1 + 44);
        v1[45] = (void *)Utils::TryGetHighResolutionTimerValue(v6);
        v7 = (wil::details **)(v1 + 46);
        v8 = OpenEventW(0x100000u, 0, L"ShellDesktopSwitchEvent");
        v1[46] = v8;
        if ( !v8 )
          goto LABEL_9;
        v1[54] = (void *)winrt::resume_on_signal((__int64)(v1 + 47), (__int64)v1[46], 3000000000LL);
        if ( _await_ready___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64)(v1 + 54)) )
        {
LABEL_7:
          _await_resume___notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAA_NXZ((__int64 *)v1 + 54);
          `winrt::resume_on_signal'::`2'::awaitable::~awaitable((__int64)(v1 + 47));
          v11 = (wil::ActivityThreadWatcher *)(v1 + 56);
          v19 = (wil::ActivityThreadWatcher *)(v1 + 56);
          v4 = (MeetAndChatTelemetry::MeetAndChatManagerOperation *)(v1 + 4);
          wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
            (struct wil::details::IFailureCallback *)(v1 + 4),
            (wil::ActivityThreadWatcher *)(v1 + 56));
          v12 = CorrelationVector::Increment((TraceLoggingCorrelationVector **)v1 + 2);
          try
          {
            winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureCurrentlyRegisteredUriHandlerLaunchedForFirstRun(
              1,
              (__int64)v1[45],
              (const struct CorrelationVector *)v12);
            wil::ActivityBase<MeetAndChatTelemetryLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
              (__int64)(v1 + 4),
              v13);
          }
          catch ( ... )
          {
            wil::details::in1diag3::Log_CaughtException(
              retaddr,
              (void *)0x146,
              (unsigned int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
              v14);
            v2 = a1;
            v4 = (MeetAndChatTelemetry::MeetAndChatManagerOperation *)(a1 + 4);
            v1 = a1;
            v11 = v19;
          }
          wil::ActivityThreadWatcher::~ActivityThreadWatcher(v11);
          v7 = (wil::details **)(v2 + 46);
          v5 = v2 + 44;
          v3 = v2 + 2;
LABEL_9:
          __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
            v7,
            v9);
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(v5);
          MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation(v4);
          CorrelationVector::~CorrelationVector(v3);
          std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::DashboardManager *>::promise_type::final_suspend(
            (__int64)v1,
            (_BYTE *)v1 + 528);
LABEL_10:
          v1[72] = (char *)v1 + 10;
          v15 = *((_WORD *)v1 + 5);
          *((_WORD *)v1 + 296) = v15;
          if ( v15 )
          {
            v1[76] = (void *)681;
            v1[70] = (void *)681;
            v2[68] = v1;
            v1[82] = (char *)v1 + 10;
            operator delete(v1);
          }
        }
        else
        {
          *((_WORD *)v1 + 4) = 4;
          ___await_suspend_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std_____notify_awaiter_Uawaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__impl_winrt__QEAAXU__coroutine_handle_Upromise_type___coroutine_traits_UIAsyncAction_Foundation_Windows_winrt____V_experimental_std___experimental_std___Z(v1 + 54);
        }
        break;
      case 4:
        goto LABEL_7;
      case 5:
        `winrt::resume_on_signal'::`2'::awaitable::~awaitable((__int64)(a1 + 47));
        __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
          (wil::details **)v1 + 46,
          v10);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::DashboardManager>::release_ref(v1 + 44);
        MeetAndChatTelemetry::MeetAndChatManagerOperation::~MeetAndChatManagerOperation((MeetAndChatTelemetry::MeetAndChatManagerOperation *)(v1 + 4));
        CorrelationVector::~CorrelationVector(v1 + 2);
        goto LABEL_10;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,MiniSearchExperienceManager *,winrt::WindowsUdk::UI::Shell::DismissShellViewRequestedEventArgs>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
