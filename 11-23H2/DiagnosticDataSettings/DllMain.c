/*
 * XREFs of DllMain @ 0x18000144C
 * Callers:
 *     dllmain_dispatch @ 0x180004D5C (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    DisableThreadLibraryCalls(hinstDLL);
  return 1;
}
