/*
 * XREFs of sub_180019190 @ 0x180019190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180059BA0 @ 0x180059BA0 (sub_180059BA0.c)
 */

LPVOID __fastcall sub_180019190(LPVOID lpMem, char a2)
{
  sub_180059BA0();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
