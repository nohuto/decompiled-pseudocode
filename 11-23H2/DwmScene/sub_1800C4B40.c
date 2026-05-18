/*
 * XREFs of sub_1800C4B40 @ 0x1800C4B40
 * Callers:
 *     sub_1800C7B30 @ 0x1800C7B30 (sub_1800C7B30.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800C432C @ 0x1800C432C (sub_1800C432C.c)
 */

__int64 *__fastcall sub_1800C4B40(__int64 *lpMem, char a2)
{
  sub_1800C432C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
