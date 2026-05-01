/*
 * XREFs of DllEntryPoint @ 0x18000AA80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AF80 @ 0x18000AF80 (sub_18000AF80.c)
 */

BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    sub_18000AF80();
  return sub_18000AAC4(hinstDLL);
}
