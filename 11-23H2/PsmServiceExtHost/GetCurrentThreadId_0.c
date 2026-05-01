/*
 * XREFs of GetCurrentThreadId_0 @ 0x18004A356
 * Callers:
 *     GetCurrentDesktopName @ 0x180052990 (GetCurrentDesktopName.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
