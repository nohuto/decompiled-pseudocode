/*
 * XREFs of sub_18000C130 @ 0x18000C130
 * Callers:
 *     sub_18001FB80 @ 0x18001FB80 (sub_18001FB80.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___acrt_iob_func @ 0x18000BEE6 (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x18000BF0A (_o___stdio_common_vfprintf.c)
 */

__int64 sub_18000C130()
{
  o___acrt_iob_func();
  sub_18000AEE4();
  return o___stdio_common_vfprintf();
}
