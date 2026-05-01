/*
 * XREFs of CrmActivityFreeWindowClosedReasons @ 0x180009BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CrmActivityFreeWindowClosedReasons(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
