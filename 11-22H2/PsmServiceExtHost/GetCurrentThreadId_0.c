/*
 * XREFs of GetCurrentThreadId_0 @ 0x18004A3E6
 * Callers:
 *     GetCurrentDesktopName @ 0x180052B90 (GetCurrentDesktopName.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
