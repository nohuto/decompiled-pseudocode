/*
 * XREFs of sub_1C0020508 @ 0x1C0020508
 * Callers:
 *     sub_1C00203B0 @ 0x1C00203B0 (sub_1C00203B0.c)
 *     sub_1C0020470 @ 0x1C0020470 (sub_1C0020470.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 */

__int64 __fastcall sub_1C0020508(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( (unsigned int)sub_1C0007798(a1, 8) )
    return (unsigned int)sub_1C001A364(a1 + 336);
  return v2;
}
