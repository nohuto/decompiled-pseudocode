/*
 * XREFs of sub_18000C1E8 @ 0x18000C1E8
 * Callers:
 *     sub_18000F650 @ 0x18000F650 (sub_18000F650.c)
 *     sub_18001D9B8 @ 0x18001D9B8 (sub_18001D9B8.c)
 *     sub_1800DAFFC @ 0x1800DAFFC (sub_1800DAFFC.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     _o___stdio_common_vsnprintf_s @ 0x18000BF16 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_18000C1E8()
{
  __int64 result; // rax

  sub_18000AEE4();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
