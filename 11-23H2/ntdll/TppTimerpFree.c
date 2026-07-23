/*
 * XREFs of TppTimerpFree @ 0x18007B370
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18007B3AC (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
