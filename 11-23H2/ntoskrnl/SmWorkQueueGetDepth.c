/*
 * XREFs of SmWorkQueueGetDepth @ 0x1405CA224
 * Callers:
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x140465B4C (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1405C6850 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmWorkQueueGetDepth(_DWORD *a1, int a2)
{
  int v2; // r8d

  v2 = a1[1648] + a1[1524];
  if ( a2 )
    return (unsigned int)(a1[1525] + v2);
  else
    return (unsigned int)((a1[1525] >> 8) + v2);
}
