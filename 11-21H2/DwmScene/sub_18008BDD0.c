/*
 * XREFs of sub_18008BDD0 @ 0x18008BDD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18008BDB8 @ 0x18008BDB8 (sub_18008BDB8.c)
 */

LPVOID __fastcall sub_18008BDD0(LPVOID lpMem, char a2)
{
  sub_18008BDB8((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
