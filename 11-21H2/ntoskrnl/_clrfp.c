/*
 * XREFs of _clrfp @ 0x1403E5BF4
 * Callers:
 *     sub_1403E5930 @ 0x1403E5930 (sub_1403E5930.c)
 * Callees:
 *     sub_1403E5D00 @ 0x1403E5D00 (sub_1403E5D00.c)
 *     _get_fpsr @ 0x14042B9F0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  sub_1403E5D00();
  return (unsigned int)v0;
}
