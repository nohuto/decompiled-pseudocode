/*
 * XREFs of sub_180088050 @ 0x180088050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180030B98 @ 0x180030B98 (sub_180030B98.c)
 *     sub_1800A8E64 @ 0x1800A8E64 (sub_1800A8E64.c)
 */

__int64 *__fastcall sub_180088050(__int64 *lpMem, char a2)
{
  sub_180030B98(lpMem + 2, (__int64)(lpMem + 2));
  sub_1800A8E64(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
