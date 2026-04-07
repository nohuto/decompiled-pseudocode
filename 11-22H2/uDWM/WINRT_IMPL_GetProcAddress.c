/*
 * XREFs of WINRT_IMPL_GetProcAddress @ 0x18005D4C6
 * Callers:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800D8850 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
FARPROC __stdcall WINRT_IMPL_GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
{
  return GetProcAddress(hModule, lpProcName);
}
