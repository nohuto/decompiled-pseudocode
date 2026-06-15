/*
 * XREFs of DllMain @ 0x180062B2C
 * Callers:
 *     dllmain_dispatch @ 0x18005E76C (dllmain_dispatch.c)
 * Callees:
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x180042750 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z @ 0x180042BF0 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x180124DE4 (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x180150A14 (WppCleanupUm.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL v3; // ebx
  const struct _GUID *v4; // rcx

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    hHeap = GetProcessHeap();
    AeWmiInitialize(v4);
    wil::SetResultTelemetryFallback();
    dword_1801C23D4 = 1;
    if ( ATL::CAtlBaseModule::m_bInitFailed )
    {
      dword_1801C23D0 = 0;
      v3 = 0;
      dword_1801C23D4 = 0;
    }
    else
    {
      dword_1801C23D0 = 1;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_1801C23D4 = 0;
    dword_1801C23D0 = 0;
    AeWmiShutdown();
    WppCleanupUm();
  }
  return v3;
}
