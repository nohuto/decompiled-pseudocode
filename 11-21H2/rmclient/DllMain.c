/*
 * XREFs of DllMain @ 0x18000BDCC
 * Callers:
 *     __DllMainCRTStartup @ 0x18000ADC4 (__DllMainCRTStartup.c)
 * Callees:
 *     ?FreeResourceManagerProxy@@YAXXZ @ 0x180002878 (-FreeResourceManagerProxy@@YAXXZ.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180005840 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     RmpClientInitializeCoreApi @ 0x180009090 (RmpClientInitializeCoreApi.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  REGHANDLE v4; // rcx

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      TraceLoggingRegisterEx_EventRegister_EventSetInformation();
      RmpClientInitializeCoreApi();
      DisableThreadLibraryCalls(hinstDLL);
    }
  }
  else
  {
    FreeResourceManagerProxy();
    v4 = RegHandle;
    RegHandle = 0LL;
    dword_180032000 = 0;
    EventUnregister(v4);
  }
  return 1;
}
