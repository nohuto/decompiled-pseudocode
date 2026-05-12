/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C00136DC
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00117BC (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0018800 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitFreeResources @ 0x1C0019DC8 (RaidUnitFreeResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C001E4E0 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortUnitIdleState @ 0x1C0025000 (StorPortUnitIdleState.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C004AAD0 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C004B780 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C004BA78 (StorPortUnitPowerNotRequiredStep2.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C0065BD0 (StorUnitExecuteNvmeSrbComplete.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 4832), a2, a3);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 4832) + 20LL) & 1) == 0;
}
