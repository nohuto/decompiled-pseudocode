/*
 * XREFs of PnprWakeDevices @ 0x140A9DE0C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140964CF0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A9DCD0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoEndPartitionReplace @ 0x140989768 (PoEndPartitionReplace.c)
 *     PoEndPowerStateTasks @ 0x140989790 (PoEndPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x140989904 (PoUnblockConsoleSwitch.c)
 *     PoClearBroadcast @ 0x14098BD8C (PoClearBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140A9C724 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  *(_DWORD *)(PnprContext + 33320) = PnprGetMillisecondCounter(0);
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4);
  PoClearBroadcast();
  PoEndPartitionReplace((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
  PoEndPowerStateTasks((_DWORD *)(a1 + 36));
  PoUnblockConsoleSwitch((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
  *(_DWORD *)(PnprContext + 33324) = PnprGetMillisecondCounter(0);
  return 0LL;
}
