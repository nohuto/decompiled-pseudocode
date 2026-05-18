/*
 * XREFs of sub_1800C9120 @ 0x1800C9120
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800C9078 @ 0x1800C9078 (sub_1800C9078.c)
 */

__int64 *__fastcall sub_1800C9120(__int64 *lpMem, char a2)
{
  sub_1800C9078(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
