/*
 * XREFs of ??$DIFF@H@@YAHHH@Z @ 0x1C0002C80
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1C01775B0 (BmlCompareRegionsWithPivot.c)
 *     BmlGetNextBestSourceMode @ 0x1C017A320 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C017AAF8 (BmlCompareSourceModesWithMonitors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DIFF<int>(int a1, int a2)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - a2);
  if ( a1 <= a2 )
    return (unsigned int)(a2 - a1);
  return result;
}
