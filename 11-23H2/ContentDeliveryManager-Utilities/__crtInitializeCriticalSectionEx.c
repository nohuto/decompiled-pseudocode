/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x18000D9EC
 * Callers:
 *     _Mtxinit @ 0x18000CBF0 (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
