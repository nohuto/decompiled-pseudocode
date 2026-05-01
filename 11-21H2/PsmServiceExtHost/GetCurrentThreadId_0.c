/*
 * XREFs of GetCurrentThreadId_0 @ 0x18004F186
 * Callers:
 *     ?GetCurrentDesktopName@@YAHPEAGI@Z @ 0x18009C7B4 (-GetCurrentDesktopName@@YAHPEAGI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId_0()
{
  return GetCurrentThreadId();
}
