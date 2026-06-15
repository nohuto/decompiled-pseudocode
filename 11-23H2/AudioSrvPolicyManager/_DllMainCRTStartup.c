/*
 * XREFs of _DllMainCRTStartup @ 0x180016550
 * Callers:
 *     <none>
 * Callees:
 *     __security_init_cookie @ 0x180016FE0 (__security_init_cookie.c)
 */

BOOL __stdcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}
