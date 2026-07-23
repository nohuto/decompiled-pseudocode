/*
 * XREFs of PsLeavePriorityRegion @ 0x1402225A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 */

__int64 __fastcall PsLeavePriorityRegion(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return sub_1402ACD80(KeGetCurrentThread(), a2, 0LL, 0LL);
}
