/*
 * XREFs of ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x1803ADF70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803ABCC8 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragCancel@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x1803AC588 (--1DragCancel@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DragCancel@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@@Z @ 0x1803B1BB8 (-StartActivity@DragCancel@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803B2AAC (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1803B72E4 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::DragCancel(CAppViewManager *this, const struct _GUID *a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"DragCancel");
  v5[0] = &AppViewManagerTabTelemetry::DragCancel::`vftable';
  AppViewManagerTabTelemetry::DragCancel::StartActivity((AppViewManagerTabTelemetry::DragCancel *)v5, a2);
  CAppViewManager::_ObliterateOperation((CAppViewManager *)((char *)this - 56), a2);
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v5);
  AppViewManagerTabTelemetry::DragCancel::~DragCancel((AppViewManagerTabTelemetry::DragCancel *)v5);
  return 0LL;
}
