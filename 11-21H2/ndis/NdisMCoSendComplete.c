/*
 * XREFs of NdisMCoSendComplete @ 0x1C00BDCD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMCoSendComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, PNDIS_PACKET Packet)
{
  (*((void (__fastcall **)(NDIS_STATUS, NDIS_HANDLE, PNDIS_PACKET))NdisVcHandle + 34))(Status, NdisVcHandle, Packet);
}
