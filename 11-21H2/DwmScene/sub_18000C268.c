/*
 * XREFs of sub_18000C268 @ 0x18000C268
 * Callers:
 *     sub_180025C4C @ 0x180025C4C (sub_180025C4C.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000BF32 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000C268()
{
  __int64 result; // rax

  sub_18000AEE4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
