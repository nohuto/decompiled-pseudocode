/*
 * XREFs of DllEntryPoint @ 0x18000B2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B9DC @ 0x18000B9DC (sub_18000B9DC.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    sub_18000B9DC();
  return sub_18000B14C((__int64)hinstDLL, fdwReason, (__int64)lpReserved);
}
