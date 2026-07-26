/*
 * XREFs of NdisSetPacketStatus @ 0x1C00C1A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisSetPacketStatus(PNDIS_PACKET Packet, NDIS_STATUS Status, NDIS_HANDLE Handle, ULONG Code)
{
  *(unsigned int *)((char *)&Packet->Private.Count + Packet->Private.NdisPacketOobOffset) = Status;
}
