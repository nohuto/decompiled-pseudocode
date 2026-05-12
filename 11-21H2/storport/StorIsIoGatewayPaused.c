/*
 * XREFs of StorIsIoGatewayPaused @ 0x1C0006E4C
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorSubmitIoGatewayItem @ 0x1C00062BC (StorSubmitIoGatewayItem.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008220 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterRestartGateway @ 0x1C001DF98 (RaidAdapterRestartGateway.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsIoGatewayPaused(__int64 a1)
{
  return a1 && *(_DWORD *)(*(_QWORD *)(a1 + 48) + 860LL) != 0;
}
