/*
 * XREFs of TppTimerpFree @ 0x18007AD00
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18007AD3C (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(void *a1)
{
  TppDestroyTimer();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
