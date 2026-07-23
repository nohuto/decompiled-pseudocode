/*
 * XREFs of _statfp @ 0x1403E5CC4
 * Callers:
 *     sub_1403E5930 @ 0x1403E5930 (sub_1403E5930.c)
 * Callees:
 *     _get_fpsr @ 0x14042B9F0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
