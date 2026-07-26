/*
 * XREFs of NdisIMCopySendPerPacketInfo @ 0x1C00C6680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisIMCopySendPerPacketInfo(PNDIS_PACKET DstPacket, PNDIS_PACKET SrcPacket)
{
  __int64 NdisPacketOobOffset; // rbx
  unsigned __int8 *v4; // r11
  unsigned __int8 *v5; // r8
  signed __int64 v6; // rcx
  __int64 v7; // r10
  unsigned __int8 v8; // cl

  NdisPacketOobOffset = SrcPacket->Private.NdisPacketOobOffset;
  v4 = &DstPacket->Private.ValidCounts + DstPacket->Private.NdisPacketOobOffset;
  v5 = v4;
  v6 = (char *)SrcPacket + NdisPacketOobOffset - ((char *)DstPacket + DstPacket->Private.NdisPacketOobOffset);
  v7 = 4LL;
  do
  {
    *(_QWORD *)v5 = *(_QWORD *)&v5[v6];
    v5 += 8;
    --v7;
  }
  while ( v7 );
  *((_QWORD *)v4 + 6) = *(unsigned __int64 *)((char *)&SrcPacket->Reserved[1] + NdisPacketOobOffset);
  *((_QWORD *)v4 + 8) = *(_QWORD *)((char *)&SrcPacket[1].Private.PhysicalCount + NdisPacketOobOffset);
  v8 = DstPacket->Private.NdisPacketFlags & 0xC0;
  DstPacket->Private.NdisPacketFlags = v8;
  DstPacket->Private.NdisPacketFlags = v8 | SrcPacket->Private.NdisPacketFlags & 0x3F;
}
