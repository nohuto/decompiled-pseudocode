/*
 * XREFs of sub_180018190 @ 0x180018190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_18001BB30 @ 0x18001BB30 (sub_18001BB30.c)
 */

LPVOID __fastcall sub_180018190(LPVOID lpMem, char a2)
{
  sub_18001BB30();
  if ( (a2 & 1) != 0 )
    sub_18000B988(lpMem);
  return lpMem;
}
