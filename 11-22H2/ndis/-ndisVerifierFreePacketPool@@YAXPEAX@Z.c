/*
 * XREFs of ?ndisVerifierFreePacketPool@@YAXPEAX@Z @ 0x1C00B2CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x1C00C5944 (-ndisFreePacketPoolInternal@@YAXPEAXE@Z.c)
 */

void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1, unsigned __int8 a2)
{
  ndisFreePacketPoolInternal(a1, a2);
}
