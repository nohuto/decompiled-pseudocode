/*
 * XREFs of ?DragLeave@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1803AE9C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803ABC24 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1DragLeave@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x1803AC60C (--1DragLeave@AppViewManagerTabTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@DragLeave@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1803B1ED0 (-StartActivity@DragLeave@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?Stop@?$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803B29A0 (-Stop@-$ActivityBase@VTabShellTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::DragLeave(CAppViewManager *this, const struct _GUID *a2, struct tagPOINT a3)
{
  struct tagPOINT v5; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v6[40]; // [rsp+30h] [rbp-158h] BYREF

  v5 = a3;
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v6);
  v6[0] = &AppViewManagerTabTelemetry::DragLeave::`vftable';
  AppViewManagerTabTelemetry::DragLeave::StartActivity((AppViewManagerTabTelemetry::DragLeave *)v6, a2, &v5);
  wil::ActivityBase<TabShellTelemetryProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v6);
  AppViewManagerTabTelemetry::DragLeave::~DragLeave((AppViewManagerTabTelemetry::DragLeave *)v6);
  return 0LL;
}
