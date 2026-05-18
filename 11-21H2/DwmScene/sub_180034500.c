/*
 * XREFs of sub_180034500 @ 0x180034500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180033018 @ 0x180033018 (sub_180033018.c)
 */

LPVOID __fastcall sub_180034500(LPVOID lpMem, char a2)
{
  sub_180033018((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
