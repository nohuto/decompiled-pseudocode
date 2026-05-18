/*
 * XREFs of sub_18005A050 @ 0x18005A050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009A1C8 @ 0x18009A1C8 (sub_18009A1C8.c)
 */

LPVOID __fastcall sub_18005A050(LPVOID lpMem, char a2)
{
  sub_18009A1C8();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
