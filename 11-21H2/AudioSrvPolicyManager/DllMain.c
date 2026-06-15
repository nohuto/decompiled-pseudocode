/*
 * XREFs of DllMain @ 0x18000E774
 * Callers:
 *     dllmain_dispatch @ 0x18000227C (dllmain_dispatch.c)
 * Callees:
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180007738 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  ULONG64 *v4; // rdi
  const GUID **v5; // rsi
  const GUID *v6; // r8
  _QWORD *v7; // rdi
  TRACEHANDLE v8; // rcx
  const struct wil::FailureInfo *v10; // rdx
  struct _TRACE_GUID_REGISTRATION TraceGuidReg; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v12[160]; // [rsp+50h] [rbp-A8h] BYREF

  if ( fdwReason == 1 )
  {
    qword_18005C588 = 1LL;
    qword_18005C580 = 0LL;
    v4 = (ULONG64 *)&WPP_MAIN_CB;
    WPP_MAIN_CB = 0LL;
    WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
    v5 = (const GUID **)&WPP_REGISTRATION_GUIDS;
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    do
    {
      v6 = *v5;
      TraceGuidReg.Guid = v6;
      ++v5;
      TraceGuidReg.RegHandle = 0LL;
      v4[4] = (ULONG64)v6;
      RegisterTraceGuidsW(WppControlCallback, v4, v6, 1u, &TraceGuidReg, 0LL, 0LL, v4 + 1);
      v4 = (ULONG64 *)*v4;
    }
    while ( v4 );
    DisableThreadLibraryCalls(hinstDLL);
    if ( wil::details::g_pfnTelemetryCallback
      && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback )
    {
      memset_0(v12, 0, 0x98uLL);
      wil::details::WilFailFast((wil::details *)v12, v10);
    }
    wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback;
  }
  else if ( !fdwReason && !lpvReserved )
  {
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      while ( v7 )
      {
        v8 = v7[1];
        if ( v8 )
        {
          UnregisterTraceGuids(v8);
          v7[1] = 0LL;
        }
        v7 = (_QWORD *)*v7;
      }
      WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
    }
  }
  return 1;
}
