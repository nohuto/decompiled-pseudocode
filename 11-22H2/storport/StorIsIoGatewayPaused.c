/*
 * XREFs of StorIsIoGatewayPaused @ 0x1C00194C0
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     StorSubmitIoGatewayItem @ 0x1C0004920 (StorSubmitIoGatewayItem.c)
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009EC0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorNextIoGatewayItem @ 0x1C0019328 (StorNextIoGatewayItem.c)
 *     StorReset @ 0x1C0047378 (StorReset.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsIoGatewayPaused(__int64 a1)
{
  return a1 && *(_DWORD *)(*(_QWORD *)(a1 + 48) + 924LL) != 0;
}
