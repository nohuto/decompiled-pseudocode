/*
 * XREFs of ?WindowSnapStateChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x1804A4EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804A2F30 (--0-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1ListenerTelemetrySignalTracker@@QEAA@XZ @ 0x1804A3380 (--1ListenerTelemetrySignalTracker@@QEAA@XZ.c)
 *     ??1WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAA@XZ @ 0x1804A33A4 (--1WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAA@XZ.c)
 *     ?SnapSignalDataNotCreated@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXXZ @ 0x1804A457C (-SnapSignalDataNotCreated@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z @ 0x1804A4620 (-StartActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804A4744 (-Stop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ?TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@23456@PEAUIApplicationView@@@Z @ 0x1804A4B60 (-TryCreateSnapSignalData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA-AV-$co.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::WindowSnapStateChanged(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64),
        int a3)
{
  __int64 v6; // rcx
  struct IApplicationView *SnapSignalData; // rax
  __int64 v8; // rbx
  struct IApplicationView *v9; // rax
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-178h] BYREF
  __int64 v13; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v14[40]; // [rsp+30h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v14);
  v14[0] = &TaskFlowDataEngineTelemetry::WindowSnapStateChanged::`vftable';
  TaskFlowDataEngineTelemetry::WindowSnapStateChanged::StartActivity(
    (TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)v14,
    a3);
  v13 = 0LL;
  if ( a3 == 1 )
  {
    SnapSignalData = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData(
                       v6,
                       (struct IApplicationView *)&v12,
                       0,
                       a2);
    v8 = *(_QWORD *)SnapSignalData;
    *(_QWORD *)SnapSignalData = 0LL;
    v13 = v8;
  }
  else
  {
    if ( a3 )
    {
      wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64)v14,
        -2147467263);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
      TaskFlowDataEngineTelemetry::WindowSnapStateChanged::~WindowSnapStateChanged((TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)v14);
      return 2147500033LL;
    }
    v9 = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateSnapSignalData(
           v6,
           (struct IApplicationView *)&v12,
           1u,
           a2);
    v8 = *(_QWORD *)v9;
    *(_QWORD *)v9 = 0LL;
    v13 = v8;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v12);
  if ( v8 )
  {
    LOWORD(v12) = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 64LL))(*(_QWORD *)(a1 + 56), v8);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB8,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v10,
        v12);
    LOBYTE(v12) = 1;
    ListenerTelemetrySignalTracker::~ListenerTelemetrySignalTracker((ListenerTelemetrySignalTracker *)&v12);
  }
  else
  {
    TaskFlowDataEngineTelemetry::WindowSnapStateChanged::SnapSignalDataNotCreated((TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)v14);
  }
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v14,
    0);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  TaskFlowDataEngineTelemetry::WindowSnapStateChanged::~WindowSnapStateChanged((TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)v14);
  return 0LL;
}
