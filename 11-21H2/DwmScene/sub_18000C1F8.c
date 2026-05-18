/*
 * XREFs of sub_18000C1F8 @ 0x18000C1F8
 * Callers:
 *     sub_18000FDDC @ 0x18000FDDC (sub_18000FDDC.c)
 *     sub_18001F06C @ 0x18001F06C (sub_18001F06C.c)
 *     sub_1800F40F4 @ 0x1800F40F4 (sub_1800F40F4.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___stdio_common_vsnprintf_s @ 0x18000BF26 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_18000C1F8()
{
  __int64 result; // rax

  sub_18000AEE4();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
