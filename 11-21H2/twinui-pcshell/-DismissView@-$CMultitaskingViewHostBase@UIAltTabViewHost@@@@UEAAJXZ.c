/*
 * XREFs of ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180231AB0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___::_ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___ @ 0x1801E8CA4 (wil--details--ScopeExitFn__lambda_33e1c56ebc0f688b14996b627787f4f7___--_ScopeExitFn__lambda_33e1.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180231DC0 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 *     wil::details::ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___::_ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___ @ 0x1804A14DC (wil--details--ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___--_ScopeExitFn__lambda_371a.c)
 *     ?AltEscPressed@CAltTabViewHost@@UEAAXXZ @ 0x1804A16D0 (-AltEscPressed@CAltTabViewHost@@UEAAXXZ.c)
 *     ?DisplaySettingsChange@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1804A1830 (-DisplaySettingsChange@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_.c)
 *     wil::details::ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___::_ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___ @ 0x1805F95B0 (wil--details--ScopeExitFn__lambda_4bbd2daea9b54bdbb05689ab88045b07___--_ScopeExitFn__lambda_4bbd.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1805FBBA0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 * Callees:
 *     ?Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18000EE9C (-Stop@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x18000EF90 (-StartActivity@DismissMultitaskingView@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES.c)
 *     ??1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ @ 0x18000F330 (--1DismissMultitaskingView@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewDismissCallback@@@?$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDismissCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000F544 (--$As@UIMultitaskingViewDismissCallback@@@-$ComPtr@UIMultitaskingViewManager@@@WRL@Microsoft@@QE.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014B200 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$QueueTask@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_7d4fab6c161d4dc93915730d1208882c_@@@Z @ 0x1804A11EC (--$QueueTask@V_lambda_7d4fab6c161d4dc93915730d1208882c_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0 @ 0x1804A2B58 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1804A2B58.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(__int64 a1)
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
  EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Unregister_0(a1 + 96);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
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
    Windows::Internal::ComTaskPool::QueueTask<_lambda_7d4fab6c161d4dc93915730d1208882c_>(v6, &v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(
      *(_QWORD *)(a1 + 88),
      *(unsigned int *)(a1 + 72));
    MultitaskingViewTelemetry::DismissMultitaskingView::Stop((__int64)v13, *(_DWORD *)(a1 + 72));
    v5 = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\TwinUI\\MultitaskingView\\inc\\BaseViewHost.h",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  MultitaskingViewTelemetry::DismissMultitaskingView::~DismissMultitaskingView((MultitaskingViewTelemetry::DismissMultitaskingView *)v13);
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return v5;
}
