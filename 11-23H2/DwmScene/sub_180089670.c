/*
 * XREFs of sub_180089670 @ 0x180089670
 * Callers:
 *     sub_1800895A0 @ 0x1800895A0 (sub_1800895A0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_1800895DC @ 0x1800895DC (sub_1800895DC.c)
 */

LPVOID __fastcall sub_180089670(LPVOID lpMem, char a2)
{
  sub_1800895DC();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
