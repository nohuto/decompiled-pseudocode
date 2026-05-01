/*
 * XREFs of CrmActivityFree @ 0x1800086C0
 * Callers:
 *     UnsubscribeActivityCoordinatorPolicy_0 @ 0x1800162F4 (UnsubscribeActivityCoordinatorPolicy_0.c)
 * Callees:
 *     sub_180008700 @ 0x180008700 (sub_180008700.c)
 */

BOOLEAN __fastcall CrmActivityFree(void *a1)
{
  sub_180008700();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
