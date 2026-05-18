/*
 * XREFs of _DllMainCRTStartup @ 0x180002F24
 * Callers:
 *     _DllMainStartup @ 0x18000DF80 (_DllMainStartup.c)
 * Callees:
 *     __security_init_cookie @ 0x180003154 (__security_init_cookie.c)
 */

__int64 __fastcall DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  if ( fdwReason == 1 )
    _security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpvReserved);
}
