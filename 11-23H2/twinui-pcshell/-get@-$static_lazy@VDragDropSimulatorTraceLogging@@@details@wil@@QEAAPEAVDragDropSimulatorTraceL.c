/*
 * XREFs of ?get@?$static_lazy@VDragDropSimulatorTraceLogging@@@details@wil@@QEAAPEAVDragDropSimulatorTraceLogging@@P6AXXZ@Z @ 0x18062CF54
 * Callers:
 *     ??$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z @ 0x18062986C (--$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BL@$$CBD$$QEAJ@Z @ 0x1806298F4 (--$FailureTrace@AEAY0BL@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BL@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BM@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BM@$$CBD$$QEAJ@Z @ 0x18062997C (--$FailureTrace@AEAY0BM@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BM@$$CBD$$QEAJ@Z.c)
 *     ??$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z @ 0x180629A04 (--$FailureTrace@AEAY0BP@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BP@$$CBD$$QEAJ@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x18062A5B8 (--1-$_TlgActivityBase@V-$ActivityData@VDragDropSimulatorTraceLogging@@U_TlgReflectorTag_Param0Is.c)
 *     ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x18062B13C (-GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimula.c)
 *     ?GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAPEAUHWND__@@AEBUtagPOINT@@PEAU8@1@Z @ 0x18062B4D0 (-GetInitialTargetWindowFromPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@She.c)
 *     ?NotifyFailure@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18062BC90 (-NotifyFailure@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_T.c)
 *     ?StartActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXXZ @ 0x18062C218 (-StartActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18062C334 (-Stop@-$ActivityBase@VDragDropSimulatorTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 *     ?StopActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@MEAAXXZ @ 0x18062C440 (-StopActivity@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@MEAAXXZ.c)
 *     ?TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z @ 0x18062C684 (-TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z.c)
 *     ?TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z @ 0x18062C7D4 (-TraceWindowInfo@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180084F18 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<DragDropSimulatorTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`DragDropSimulatorTraceLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v8,
         (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`DragDropSimulatorTraceLogging::Instance'::`2'::wrapper;
    v9 = &qword_18098FE10;
    qword_18098FE10 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_18098FE28 = (__int64)&`DragDropSimulatorTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
