/*
 * XREFs of sub_1800193C0 @ 0x1800193C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18005CE30 @ 0x18005CE30 (sub_18005CE30.c)
 */

LPVOID __fastcall sub_1800193C0(LPVOID lpMem, char a2)
{
  sub_18005CE30();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
