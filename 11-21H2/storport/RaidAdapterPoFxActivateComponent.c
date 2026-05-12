/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C0002B10
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000FA68 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0016A48 (RaidUnitSetDevicePowerIrp.c)
 *     RaidCreateUnit @ 0x1C001CC08 (RaidCreateUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0024DC8 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0025000 (StorPortUnitIdleState.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C004ACB0 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C004BEA4 (StorPortUnitPowerRequiredStep2.c)
 *     StorUnitExecuteNvmeSrb @ 0x1C00659C4 (StorUnitExecuteNvmeSrb.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C008CBD0 (RaidAdapterStopDeviceIrp.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterPoFxActivateComponent(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5152));
    if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5160));
  }
  PoFxActivateComponent(**(_QWORD **)(a1 + 4832));
  return *(_BYTE *)(*(_QWORD *)(a1 + 4832) + 20LL) & 1;
}
