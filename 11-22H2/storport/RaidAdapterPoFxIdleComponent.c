/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C00089A8
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0008784 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0013FD0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     StorPortAdapterPoFxD0Completion @ 0x1C00148B0 (StorPortAdapterPoFxD0Completion.c)
 *     RaidUnitFreeResources @ 0x1C001544C (RaidUnitFreeResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     StorPortUnitIdleState @ 0x1C0024F60 (StorPortUnitIdleState.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00385A8 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x1C004DE30 (StorPortAdapterDirectedPowerUpCompletion.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C004F140 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C004F438 (StorPortUnitPowerNotRequiredStep2.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C00746B0 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  PoFxIdleComponent(**(_QWORD **)(a1 + 4896), a2, a3);
  return (*(_BYTE *)(*(_QWORD *)(a1 + 4896) + 20LL) & 1) == 0;
}
