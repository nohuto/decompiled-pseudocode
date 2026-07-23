/*
 * XREFs of sub_1403E5C9C @ 0x1403E5C9C
 * Callers:
 *     sub_1403E52DC @ 0x1403E52DC (sub_1403E52DC.c)
 * Callees:
 *     sub_1403E5CF0 @ 0x1403E5CF0 (sub_1403E5CF0.c)
 *     _get_fpsr @ 0x14042B9F0 (_get_fpsr.c)
 */

__int64 __fastcall sub_1403E5C9C(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return sub_1403E5CF0(a1 & 0x3F | fpsr);
}
