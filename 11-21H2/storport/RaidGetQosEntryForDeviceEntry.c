/*
 * XREFs of RaidGetQosEntryForDeviceEntry @ 0x1C00225D4
 * Callers:
 *     StorSubmitIoGatewayItem @ 0x1C00062BC (StorSubmitIoGatewayItem.c)
 *     StorPortAdapterActiveCondition @ 0x1C00063C0 (StorPortAdapterActiveCondition.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008220 (StorRemoveIoGatewayItem.c)
 *     RiNormalizeDeviceQueue @ 0x1C000936C (RiNormalizeDeviceQueue.c)
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     RiEnqueueDeviceQueue @ 0x1C000B74C (RiEnqueueDeviceQueue.c)
 *     RaidAdapterRestartGateway @ 0x1C001DF98 (RaidAdapterRestartGateway.c)
 *     RaidRemoveIoQueue @ 0x1C001EE2C (RaidRemoveIoQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetQosEntryForDeviceEntry(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  if ( *(_BYTE *)(v1 + 2) == 40 )
    v2 = *(_QWORD *)(v1 + 96);
  else
    v2 = *(_QWORD *)(v1 + 48);
  return v2 + 24;
}
