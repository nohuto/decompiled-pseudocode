/*
 * XREFs of ?get@?$static_lazy@VControlCenterLogging@@@details@wil@@QEAAPEAVControlCenterLogging@@P6AXXZ@Z @ 0x18035537C
 * Callers:
 *     ??$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEAIAEA_KAEA_J@Z @ 0x180352368 (--$InputSwitch_PostForwardedInputMessage@_NAEAIAEA_KAEA_J@ControlCenterTelemetry@ControlCenterUI.c)
 *     ??$ShowControlCenterWithDeepLink@_NPEBGAEAEAEAEAEAEAEAE@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_N$$QEAPEBGAEAE222@Z @ 0x180352724 (--$ShowControlCenterWithDeepLink@_NPEBGAEAEAEAEAEAEAEAE@ControlCenterTelemetry@ControlCenterUITe.c)
 *     ??$ToastPeekRegionClicked@_NAEA_N@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEA_N@Z @ 0x1803528E4 (--$ToastPeekRegionClicked@_NAEA_N@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEA_NAEA.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x180353300 (--1-$_TlgActivityBase@V-$ActivityData@VControlCenterLogging@@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?ControlCenterPage_PreloadCompleted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x1803535D4 (-ControlCenterPage_PreloadCompleted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?ControlCenterPage_PreloadFailed@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18035366C (-ControlCenterPage_PreloadFailed@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?ControlCenterPage_PreloadStarted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x180353704 (-ControlCenterPage_PreloadStarted@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x180353844 (-EM_DismissAnimationTimeout@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180353F60 (-NotifyFailure@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflect.c)
 *     ?StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4DismissMethod@3@W4InputType@3@@Z @ 0x18035480C (-StartActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4Di.c)
 *     ?StartActivity@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4InvokeMethod@3@W4InputType@3@W4StateOnInvoke@3@@Z @ 0x1803548E8 (-StartActivity@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@QEAAXW4Inv.c)
 *     ?Stop@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803549EC (-Stop@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StopActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@MEAAXXZ @ 0x180354AF0 (-StopActivity@DismissControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@MEAAXXZ.c)
 *     ?StopActivity@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@MEAAXXZ @ 0x180354D40 (-StopActivity@LaunchControlCenterV1@ControlCenterTelemetry@ControlCenterUITelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180355644 (-zInternalStart@-$ActivityBase@VControlCenterLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflec.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<ControlCenterLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rdx
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPINIT_ONCE v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  v9 = 0LL;
  if ( __std_init_once_begin_initialize(&`ControlCenterLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v8, (LPVOID *)&v9)
    && (_DWORD)v8 )
  {
    v6 = &`ControlCenterLogging::Instance'::`2'::wrapper;
    v9 = &qword_1807B4DF8;
    qword_1807B4DF8 = (__int64)&ShellScreenClippingLogging::`vftable';
    qword_1807B4E10 = (__int64)&`ControlCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v7 = 0;
    wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v6, v3, v4);
  }
  return v9;
}
