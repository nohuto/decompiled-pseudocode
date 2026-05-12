/*
 * XREFs of RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00358A0
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidStartIoPacket @ 0x1C0009C70 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000FB70 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     RaidpAdapterDpcRoutine @ 0x1C0014300 (RaidpAdapterDpcRoutine.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C001D420 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidPnPPassToMiniPort @ 0x1C001D6D0 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0037180 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0037644 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C004E4D8 (RaidCompleteMiniportRequestCallback.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C0065BD0 (StorUnitExecuteNvmeSrbComplete.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C0086400 (StorGetNVMeIdentifyInfo.c)
 *     RaWmiPassToMiniPort @ 0x1C0089714 (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C00136DC (RaidAdapterPoFxIdleComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxIdleComponentFromMiniport(__int64 a1, __int64 a2)
{
  bool v3; // al

  v3 = RaidAdapterPoFxIdleComponent(a1, a2, 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4832) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4832) + 96LL));
  return !v3 ? 0xC100000C : 0;
}
