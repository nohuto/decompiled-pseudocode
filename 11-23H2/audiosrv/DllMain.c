/*
 * XREFs of DllMain @ 0x1800711C0
 * Callers:
 *     dllmain_dispatch @ 0x1800667FC (dllmain_dispatch.c)
 * Callees:
 *     ?AeWmiInitialize@@YAHPEBU_GUID@@@Z @ 0x180054C08 (-AeWmiInitialize@@YAHPEBU_GUID@@@Z.c)
 *     ?SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z @ 0x180055B28 (-SetResultTelemetryFallback@wil@@YAXP6AX_NAEBUFailureInfo@1@@_E@Z.c)
 *     ?AeWmiShutdown@@YAXXZ @ 0x180132D24 (-AeWmiShutdown@@YAXXZ.c)
 *     WppCleanupUm @ 0x180157E04 (WppCleanupUm.c)
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
    dword_1801CF8FC = 1;
    if ( ATL::CAtlBaseModule::m_bInitFailed )
    {
      dword_1801CF8F8 = 0;
      v3 = 0;
      dword_1801CF8FC = 0;
    }
    else
    {
      dword_1801CF8F8 = 1;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_1801CF8FC = 0;
    dword_1801CF8F8 = 0;
    AeWmiShutdown();
    WppCleanupUm();
  }
  return v3;
}
