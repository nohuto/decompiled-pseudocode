/*
 * XREFs of sub_18002DC00 @ 0x18002DC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18002D880 @ 0x18002D880 (sub_18002D880.c)
 */

LPVOID __fastcall sub_18002DC00(LPVOID lpMem, char a2)
{
  sub_18002D880((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
