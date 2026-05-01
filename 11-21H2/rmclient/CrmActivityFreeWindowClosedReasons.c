/*
 * XREFs of CrmActivityFreeWindowClosedReasons @ 0x1800091E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CrmActivityFreeWindowClosedReasons(void *a1)
{
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
