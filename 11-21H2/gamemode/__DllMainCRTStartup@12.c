/*
 * XREFs of __DllMainCRTStartup@12 @ 0x10006A10
 * Callers:
 *     <none>
 * Callees:
 *     ___security_init_cookie @ 0x1000713B (___security_init_cookie.c)
 */

BOOL __stdcall _DllMainCRTStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return _DllMainCRTStartup(hinstDLL, fdwReason, lpReserved);
}
