/*
 * XREFs of sub_180019150 @ 0x180019150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18004DDDC @ 0x18004DDDC (sub_18004DDDC.c)
 */

LPVOID __fastcall sub_180019150(LPVOID lpMem, char a2)
{
  sub_18004DDDC();
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
