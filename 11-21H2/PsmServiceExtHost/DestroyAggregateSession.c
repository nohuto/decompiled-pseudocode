/*
 * XREFs of DestroyAggregateSession @ 0x180094868
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x180048E10 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x180048F98 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x180094EA0 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x1800945DC (CancelTimerCallbacksAndDeleteTimer.c)
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
