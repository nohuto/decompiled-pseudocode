/*
 * XREFs of PsEnterPriorityRegion @ 0x140223390
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 */

__int64 PsEnterPriorityRegion()
{
  return sub_1402ACD80(KeGetCurrentThread(), 0LL, 0LL, 0LL);
}
