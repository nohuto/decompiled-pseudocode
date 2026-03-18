/*
 * XREFs of ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C029D570
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C00278BC (-vSynchronizeDriver@@YAXK@Z.c)
 */

void __fastcall GreSynchronizeTimer(void *a1)
{
  vSynchronizeDriver(128);
}
