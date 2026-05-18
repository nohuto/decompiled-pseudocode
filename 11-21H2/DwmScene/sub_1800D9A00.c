/*
 * XREFs of sub_1800D9A00 @ 0x1800D9A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800EB414 @ 0x1800EB414 (sub_1800EB414.c)
 */

LPVOID __fastcall sub_1800D9A00(LPVOID lpMem, char a2)
{
  sub_1800EB414();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
