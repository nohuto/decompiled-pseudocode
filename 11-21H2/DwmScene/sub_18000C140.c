/*
 * XREFs of sub_18000C140 @ 0x18000C140
 * Callers:
 *     sub_180020EC0 @ 0x180020EC0 (sub_180020EC0.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___acrt_iob_func @ 0x18000BEF6 (_o___acrt_iob_func.c)
 *     _o___stdio_common_vfprintf @ 0x18000BF1A (_o___stdio_common_vfprintf.c)
 */

__int64 sub_18000C140()
{
  o___acrt_iob_func();
  sub_18000AEE4();
  return o___stdio_common_vfprintf();
}
