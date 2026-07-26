/*
 * XREFs of ?ndisSynchReturnPacketsForTranslation@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C9AB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReturnPacketToNetBufferList @ 0x1C00C9A6C (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisSynchReturnPacketsForTranslation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2)
{
  ndisReturnPacketToNetBufferList(a1, a2);
}
