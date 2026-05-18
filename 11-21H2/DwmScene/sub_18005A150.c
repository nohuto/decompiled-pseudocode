/*
 * XREFs of sub_18005A150 @ 0x18005A150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009AC14 @ 0x18009AC14 (sub_18009AC14.c)
 */

LPVOID __fastcall sub_18005A150(LPVOID lpMem, char a2)
{
  sub_18009AC14();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
