/*
 * XREFs of sub_1C004C390 @ 0x1C004C390
 * Callers:
 *     sub_1C004DFA0 @ 0x1C004DFA0 (sub_1C004DFA0.c)
 *     sub_1C004E300 @ 0x1C004E300 (sub_1C004E300.c)
 *     sub_1C004E920 @ 0x1C004E920 (sub_1C004E920.c)
 *     sub_1C004EBE0 @ 0x1C004EBE0 (sub_1C004EBE0.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C004C390(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)sub_1C0007798(a1, 7) )
    return (unsigned int)sub_1C001A364(a1 + 336);
  return v2;
}
