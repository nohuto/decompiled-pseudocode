/*
 * XREFs of PplpRetrieveListIndex @ 0x1C00C9AEC
 * Callers:
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C7BA8 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C7FC4 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C8528 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C002957C (PplpLazyInitializeLookasideList.c)
 */

unsigned __int64 __fastcall PplpRetrieveListIndex(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbx

  v2 = a1 + ((unsigned __int64)(unsigned int)(a2 + 1) << 7);
  if ( !*(_BYTE *)(v2 + 176) )
    PplpLazyInitializeLookasideList(a1, v2 + 64);
  return v2 + 64;
}
