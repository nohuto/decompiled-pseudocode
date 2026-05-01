/*
 * XREFs of DestroyAggregateSession @ 0x18008FBB0
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x180043C50 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x180043DE0 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x18008FD58 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x18008FB44 (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)lpMem);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
