/*
 * XREFs of sub_18005A0D0 @ 0x18005A0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009A444 @ 0x18009A444 (sub_18009A444.c)
 */

LPVOID __fastcall sub_18005A0D0(LPVOID lpMem, char a2)
{
  sub_18009A444();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
