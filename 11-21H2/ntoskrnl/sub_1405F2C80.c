/*
 * XREFs of sub_1405F2C80 @ 0x1405F2C80
 * Callers:
 *     sub_1405F2B80 @ 0x1405F2B80 (sub_1405F2B80.c)
 *     sub_1405F2BFC @ 0x1405F2BFC (sub_1405F2BFC.c)
 * Callees:
 *     sub_14042B760 @ 0x14042B760 (sub_14042B760.c)
 *     sub_1405F2D28 @ 0x1405F2D28 (sub_1405F2D28.c)
 *     sub_1405F2E30 @ 0x1405F2E30 (sub_1405F2E30.c)
 */

char sub_1405F2C80()
{
  char result; // al

  result = byte_140D04925;
  if ( !byte_140D04925 )
    result = sub_1405F2D28();
  _disable();
  if ( !byte_140C0D790 )
  {
    if ( byte_140D04926 )
      return sub_14042B760();
    else
      return sub_1405F2E30(6LL, 1LL);
  }
  return result;
}
