/*
 * XREFs of ?nullDeleteFilter@@YAXPEAU_X_FILTER@@@Z @ 0x1C008AEDC
 * Callers:
 *     ?ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0065B74 (-ndisMCleanupMiniportBlockOnStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C0024000 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *P)
{
  NdisFreeRWLock(P[36]);
  ExFreePoolWithTag(P, 0);
}
