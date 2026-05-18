/*
 * XREFs of sub_1800109C0 @ 0x1800109C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180018BFC @ 0x180018BFC (sub_180018BFC.c)
 */

LPVOID __fastcall sub_1800109C0(LPVOID lpMem, char a2)
{
  sub_180018BFC();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
