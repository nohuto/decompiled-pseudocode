/*
 * XREFs of TppTimerpFree @ 0x180084170
 * Callers:
 *     <none>
 * Callees:
 *     TppDestroyTimer @ 0x18001F830 (TppDestroyTimer.c)
 */

LOGICAL __fastcall TppTimerpFree(_QWORD *a1)
{
  TppDestroyTimer(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x100000, a1);
}
