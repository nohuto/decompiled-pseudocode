/*
 * XREFs of TppFreeThreadData @ 0x180083C18
 * Callers:
 *     TppWorkerThread @ 0x180016A00 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

struct _TEB *__fastcall TppFreeThreadData(__int64 a1)
{
  struct _TEB *result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) |= 4u;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 2883584, a1);
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
