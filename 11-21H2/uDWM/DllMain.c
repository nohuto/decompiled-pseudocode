/*
 * XREFs of DllMain @ 0x180062AAC
 * Callers:
 *     dllmain_dispatch @ 0x18006217C (dllmain_dispatch.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180012B88 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     McGenEventRegister_EtwEventRegister @ 0x180014264 (McGenEventRegister_EtwEventRegister.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z @ 0x1800142A4 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z.c)
 *     ?SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z @ 0x1800142D8 (-SetResultLoggingCallback@wil@@YAXP6AXAEBUFailureInfo@1@@_E@Z.c)
 *     McGenEventUnregister_EtwEventUnregister @ 0x1800C876C (McGenEventUnregister_EtwEventUnregister.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      g_hInstance = hinstDLL;
      DisableThreadLibraryCalls(hinstDLL);
      wil::SetResultTelemetryFallback();
      McGenEventRegister_EtwEventRegister();
      wil::SetResultLoggingCallback();
      TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801418A0);
      TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_180141868);
    }
  }
  else
  {
    v3 = qword_180141888;
    qword_180141888 = 0LL;
    dword_180141868 = 0;
    EtwEventUnregister(v3, fdwReason, lpvReserved);
    v4 = qword_1801418C0;
    qword_1801418C0 = 0LL;
    dword_1801418A0 = 0;
    EtwEventUnregister(v4, v5, v6);
    McGenEventUnregister_EtwEventUnregister();
  }
  return 1;
}
