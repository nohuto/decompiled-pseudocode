/*
 * XREFs of sub_1800D99C0 @ 0x1800D99C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800EB0EC @ 0x1800EB0EC (sub_1800EB0EC.c)
 */

LPVOID __fastcall sub_1800D99C0(LPVOID lpMem, char a2)
{
  sub_1800EB0EC();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
