/*
 * XREFs of sub_180010300 @ 0x180010300
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180017B24 @ 0x180017B24 (sub_180017B24.c)
 */

LPVOID __fastcall sub_180010300(LPVOID lpMem, char a2)
{
  sub_180017B24();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
