/*
 * XREFs of DllMain @ 0x18001F2AC
 * Callers:
 *     dllmain_dispatch @ 0x1800165DC (dllmain_dispatch.c)
 * Callees:
 *     memset_0 @ 0x180017838 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18001A9C8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     WppInitUm @ 0x18001F4C8 (WppInitUm.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  const struct wil::FailureInfo *v4; // rdx
  _QWORD *v5; // rdi
  TRACEHANDLE v6; // rcx
  _BYTE v8[160]; // [rsp+20h] [rbp-A8h] BYREF

  if ( fdwReason == 1 )
  {
    qword_180063678 = 1LL;
    WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
    qword_180063670 = 0LL;
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    WPP_MAIN_CB = 0LL;
    WppInitUm(hinstDLL, fdwReason, lpvReserved);
    DisableThreadLibraryCalls(hinstDLL);
    if ( wil::details::g_pfnTelemetryCallback
      && (char *)wil::details::g_pfnTelemetryCallback != (char *)AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback )
    {
      memset_0(v8, 0, 0x98uLL);
      wil::details::WilFailFast((wil::details *)v8, v4);
    }
    wil::details::g_pfnTelemetryCallback = (__int64 (__fastcall *)(_QWORD, _QWORD))AudioSrvPolicyManagerTelemetryProvider::FallbackTelemetryCallback;
  }
  else if ( !fdwReason && !lpvReserved )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      while ( v5 )
      {
        v6 = v5[1];
        if ( v6 )
        {
          UnregisterTraceGuids(v6);
          v5[1] = 0LL;
        }
        v5 = (_QWORD *)*v5;
      }
      WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
    }
  }
  return 1;
}
