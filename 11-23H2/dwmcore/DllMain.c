/*
 * XREFs of DllMain @ 0x180111360
 * Callers:
 *     dllmain_dispatch @ 0x18010F5EC (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return DwmCoreDllMain(hinstDLL, fdwReason);
}
