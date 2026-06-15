/*
 * XREFs of ?get@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvPolicyManagerTelemetryProvider@@P6AXXZ@Z @ 0x180011530
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000C280 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z @ 0x18000E6C0 (-TsSessionIdIsAudioInStandbyAllowed@@YA_NK@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18001116C (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?LogState@CApplicationManager@@QEAAXXZ @ 0x18001118C (-LogState@CApplicationManager@@QEAAXXZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180012CA0 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180014ED0 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18001C4A0 (-FallbackTelemetryCallback@AudioSrvPolicyManagerTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     atexit @ 0x180016C08 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x18001BFC4 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  fPending = a1;
  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
         0,
         (PBOOL)&fPending,
         &Context)
    && (_DWORD)fPending )
  {
    v4 = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1800615C0;
    qword_1800615C0 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
    qword_1800615D8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&v4);
  }
  return Context;
}
