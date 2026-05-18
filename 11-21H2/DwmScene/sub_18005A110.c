/*
 * XREFs of sub_18005A110 @ 0x18005A110
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18005CD50 @ 0x18005CD50 (sub_18005CD50.c)
 */

LPVOID __fastcall sub_18005A110(LPVOID lpMem, char a2)
{
  sub_18005CD50();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
