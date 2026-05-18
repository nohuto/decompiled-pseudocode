/*
 * XREFs of sub_18002DBC0 @ 0x18002DBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18002D7E4 @ 0x18002D7E4 (sub_18002D7E4.c)
 */

LPVOID __fastcall sub_18002DBC0(LPVOID lpMem, char a2)
{
  sub_18002D7E4((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
