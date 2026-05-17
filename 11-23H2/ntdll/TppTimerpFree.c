/*
 * XREFs of TppTimerpFree @ 0x18007B370
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18007B3AC (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(__int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
