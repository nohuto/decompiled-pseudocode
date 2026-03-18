/*
 * XREFs of ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C007CB90
 * Callers:
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     GetMonitorMenuRect @ 0x1C025A588 (GetMonitorMenuRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpiContext(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                   + 64LL) & 1) == 0) )
  {
    return 18;
  }
  return CurrentThreadDpiAwarenessContext;
}
