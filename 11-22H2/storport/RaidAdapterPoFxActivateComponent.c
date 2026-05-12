/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C00089E4
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0008870 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0011B7C (RaidUnitSetDevicePowerIrp.c)
 *     RaidCreateUnit @ 0x1C0018888 (RaidCreateUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0024A76 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0024F60 (StorPortUnitIdleState.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00385A8 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortAdapterPoFxWaitWakeCompletion @ 0x1C004E1E0 (StorPortAdapterPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C004F864 (StorPortUnitPowerRequiredStep2.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     StorUnitExecuteNvmeSrb @ 0x1C0074478 (StorUnitExecuteNvmeSrb.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00A711C (RaidAdapterStopDeviceIrp.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (*(_BYTE *)(a1 + 108) & 1) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5216));
    if ( (*(_BYTE *)(a1 + 108) & 2) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5224));
  }
  if ( *(_DWORD *)(a1 + 92) && (a3 & 1) != 0 )
    a3 = (unsigned int)a3 | 4;
  PoFxActivateComponent(**(_QWORD **)(a1 + 4896), a2, a3);
  return *(_BYTE *)(*(_QWORD *)(a1 + 4896) + 20LL) & 1;
}
