/*
 * XREFs of __crtInitializeCriticalSectionEx @ 0x18000D2F8
 * Callers:
 *     _Mtxinit @ 0x18000C4FC (_Mtxinit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall _crtInitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, DWORD Flags)
{
  return InitializeCriticalSectionEx(lpCriticalSection, dwSpinCount, Flags);
}
