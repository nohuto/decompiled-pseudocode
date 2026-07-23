/*
 * XREFs of sub_1405F2CDC @ 0x1405F2CDC
 * Callers:
 *     sub_1405F2B80 @ 0x1405F2B80 (sub_1405F2B80.c)
 *     sub_1405F2BFC @ 0x1405F2BFC (sub_1405F2BFC.c)
 * Callees:
 *     sub_14042B760 @ 0x14042B760 (sub_14042B760.c)
 *     sub_1405F2E30 @ 0x1405F2E30 (sub_1405F2E30.c)
 */

__int64 sub_1405F2CDC()
{
  __int64 result; // rax

  if ( !byte_140C0D790 )
  {
    if ( byte_140D04926 )
      result = sub_14042B760();
    else
      result = sub_1405F2E30(6LL, 0LL);
  }
  _mm_lfence();
  _enable();
  return result;
}
