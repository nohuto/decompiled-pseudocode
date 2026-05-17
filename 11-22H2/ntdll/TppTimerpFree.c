/*
 * XREFs of TppTimerpFree @ 0x18007AD00
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18007AD3C (TppDestroyTimer.c)
 */

__int64 __fastcall TppTimerpFree(__int64 a1)
{
  TppDestroyTimer();
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
