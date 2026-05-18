/*
 * XREFs of sub_18000C0C8 @ 0x18000C0C8
 * Callers:
 *     sub_18000F770 @ 0x18000F770 (sub_18000F770.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___stdio_common_vswprintf @ 0x18000BF2E (_o___stdio_common_vswprintf.c)
 */

__int64 sub_18000C0C8()
{
  __int64 result; // rax

  sub_18000AEE4();
  result = o___stdio_common_vswprintf();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
