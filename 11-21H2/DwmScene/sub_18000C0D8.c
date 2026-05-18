/*
 * XREFs of sub_18000C0D8 @ 0x18000C0D8
 * Callers:
 *     sub_18000ED38 @ 0x18000ED38 (sub_18000ED38.c)
 *     sub_18000FE54 @ 0x18000FE54 (sub_18000FE54.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___stdio_common_vswprintf @ 0x18000BF3E (_o___stdio_common_vswprintf.c)
 */

__int64 sub_18000C0D8()
{
  __int64 result; // rax

  sub_18000AEE4();
  result = o___stdio_common_vswprintf();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
