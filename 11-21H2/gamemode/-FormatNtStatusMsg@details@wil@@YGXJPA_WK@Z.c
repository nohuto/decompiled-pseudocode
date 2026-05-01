/*
 * XREFs of ?FormatNtStatusMsg@details@wil@@YGXJPA_WK@Z @ 0x10003E70
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ @ 0x10003CC4 (-wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ.c)
 */

void __stdcall wil::details::FormatNtStatusMsg(DWORD dwMessageId, LPWSTR lpBuffer, DWORD nSize, unsigned int a4)
{
  HINSTANCE NtDllModuleHandle; // eax

  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  FormatMessageW(0x1A00u, NtDllModuleHandle, dwMessageId, 0x400u, lpBuffer, nSize, 0);
}
