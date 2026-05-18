/*
 * XREFs of sub_18000C184 @ 0x18000C184
 * Callers:
 *     sub_18001CF00 @ 0x18001CF00 (sub_18001CF00.c)
 *     sub_18001CF30 @ 0x18001CF30 (sub_18001CF30.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___stdio_common_vsprintf_s @ 0x18000BF22 (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_18000C184()
{
  __int64 result; // rax

  sub_18000AEE4();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
