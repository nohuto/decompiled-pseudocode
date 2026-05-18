/*
 * XREFs of DllEntryPoint @ 0x18000B2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B9CC @ 0x18000B9CC (sub_18000B9CC.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    sub_18000B9CC();
  return sub_18000B14C((__int64)hinstDLL, fdwReason, (__int64)lpReserved);
}
