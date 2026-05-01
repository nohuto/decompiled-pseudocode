/*
 * XREFs of sub_18000A530 @ 0x18000A530
 * Callers:
 *     sub_180001750 @ 0x180001750 (sub_180001750.c)
 *     sub_180001780 @ 0x180001780 (sub_180001780.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall sub_18000A530(RTL_SRWLOCK *a1)
{
  a1->Ptr = 0LL;
  InitializeSRWLock(a1 + 1);
  InitializeSRWLock(a1 + 2);
  return a1;
}
