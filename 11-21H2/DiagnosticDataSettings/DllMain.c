/*
 * XREFs of DllMain @ 0x1800012A0
 * Callers:
 *     dllmain_dispatch @ 0x1800041AC (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
