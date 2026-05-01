/*
 * XREFs of DestroyAggregateSession @ 0x18008F850
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x180043BC0 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x180043D50 (CreateTlgAggregateSession.c)
 *     TlgUnregisterAggregateProvider @ 0x18008F9F8 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x18008F7E4 (CancelTimerCallbacksAndDeleteTimer.c)
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
