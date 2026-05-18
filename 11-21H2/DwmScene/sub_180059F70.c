/*
 * XREFs of sub_180059F70 @ 0x180059F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009A59C @ 0x18009A59C (sub_18009A59C.c)
 */

LPVOID __fastcall sub_180059F70(LPVOID lpMem, char a2)
{
  sub_18009A59C();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
