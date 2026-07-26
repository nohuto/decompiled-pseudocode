/*
 * XREFs of ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C00C0CD8
 * Callers:
 *     NdisFreePacket @ 0x1C002DAD0 (NdisFreePacket.c)
 *     ?ndisFreePacketPoolInternal@@YAXPEAXE@Z @ 0x1C00C0D64 (-ndisFreePacketPoolInternal@@YAXPEAXE@Z.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0005150 (NdisFreeNetBufferList.c)
 */

void __fastcall ndisFreePacketPoolHdr(char *P, struct _NDIS_PKT_POOL *a2)
{
  int PktsPerBlock; // edi
  char *v3; // rsi
  struct _NET_BUFFER_LIST *v6; // rcx

  PktsPerBlock = a2->PktsPerBlock;
  v3 = P + 64;
  if ( a2->PktsPerBlock )
  {
    do
    {
      v6 = *(struct _NET_BUFFER_LIST **)&v3[48 * ndisPacketStackSize
                                          + 136
                                          + *(unsigned __int16 *)&v3[48 * ndisPacketStackSize + 58]];
      if ( v6 )
        NdisFreeNetBufferList(v6);
      v3 += a2->PacketLength;
      --PktsPerBlock;
    }
    while ( PktsPerBlock );
  }
  ExFreePoolWithTag(P, 0);
  --a2->BlocksAllocated;
}
