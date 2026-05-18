/*
 * XREFs of sub_18000C194 @ 0x18000C194
 * Callers:
 *     sub_18001E474 @ 0x18001E474 (sub_18001E474.c)
 *     sub_18001E4A4 @ 0x18001E4A4 (sub_18001E4A4.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000BF32 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000C194()
{
  __int64 result; // rax

  sub_18000AEE4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
