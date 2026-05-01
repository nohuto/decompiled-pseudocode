/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18076C300
 * Callers:
 *     wil::details::ScopeExitFn__lambda_e965cc9d8ffd18de24091c71433a25e1___::_ScopeExitFn__lambda_e965cc9d8ffd18de24091c71433a25e1___ @ 0x18076A454 (wil--details--ScopeExitFn__lambda_e965cc9d8ffd18de24091c71433a25e1___--_ScopeExitFn__lambda_e965.c)
 *     ?CurrentVirtualDesktopChanged@XamlSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18076C250 (-CurrentVirtualDesktopChanged@XamlSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?DisplaySettingsChange@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18076C510 (-DisplaySettingsChange@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_D.c)
 *     ?MonitorAdded@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18076CEF0 (-MonitorAdded@XamlSnapAssistViewHost@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ @ 0x18076EC60 (-ViewLoaded@XamlSnapAssistViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18002D1BC (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18002D4E0 (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18002D58C (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewDismissCallback@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDismissCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D780 (--$As@UIMultitaskingViewDismissCallback@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister @ 0x18002DAEC (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_18002DAEC.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180109938 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$QueueTask@V_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@Z @ 0x1802ECD52 (--$QueueTask@V_lambda_4c0281b189a4f50ab192cc99e41387bc_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // r14d
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v9; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+48h] [rbp-B8h]
  _QWORD v13[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v11[1] = (__int64)v2;
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  v12 = v3;
  *(_BYTE *)(a1 + 112) = 0;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"DismissMultitaskingView");
  v13[0] = &MultitaskingViewTelemetry::DismissMultitaskingView::`vftable';
  MultitaskingViewTelemetry::DismissMultitaskingView::StartActivity((__int64)v13, *(_DWORD *)(a1 + 72));
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister(a1 + 96);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  v8 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IMultitaskingViewManager>::As<IMultitaskingViewDismissCallback>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(a1 + 80),
         (__int64)&v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    v10 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v11[0] = a1;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    Windows::Internal::ComTaskPool::QueueTask<_lambda_4c0281b189a4f50ab192cc99e41387bc_>(v6, (__int64)&v10);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(
      *(_QWORD *)(a1 + 88),
      *(unsigned int *)(a1 + 72));
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop((__int64)v13, *(_DWORD *)(a1 + 72));
    v5 = 0;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (int)"pcshell\\twinui\\MultitaskingView\\inc\\baseviewhost.h",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView((MultitaskingViewTelemetry::DismissMultitaskingView *)v13);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
