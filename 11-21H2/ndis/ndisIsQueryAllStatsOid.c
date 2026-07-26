/*
 * XREFs of ndisIsQueryAllStatsOid @ 0x1C002E6CC
 * Callers:
 *     ?ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z @ 0x1C002E700 (-ndisSplitStatisticsOids@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAKK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsQueryAllStatsOid(int a1)
{
  return (a1 & 0xFF0000) == 0x20000 && (a1 & 0xFF000000) != 0xFF000000 && a1 != 131613;
}
