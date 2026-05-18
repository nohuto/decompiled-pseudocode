/*
 * XREFs of sub_180023150 @ 0x180023150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180022FFC @ 0x180022FFC (sub_180022FFC.c)
 */

LPVOID __fastcall sub_180023150(LPVOID lpMem, char a2)
{
  sub_180022FFC((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
