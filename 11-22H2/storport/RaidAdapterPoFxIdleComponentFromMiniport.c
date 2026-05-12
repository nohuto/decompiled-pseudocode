/*
 * XREFs of RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8
 * Callers:
 *     RaidStartIoPacket @ 0x1C00050F0 (RaidStartIoPacket.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0007B98 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C000EE10 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidpAdapterDpcRoutine @ 0x1C000F280 (RaidpAdapterDpcRoutine.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019810 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C001E658 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterRequestDirectComplete @ 0x1C00377E4 (RaidAdapterRequestDirectComplete.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00385A8 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0038A6C (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     TcglibEalExecuteCommandSync @ 0x1C005515C (TcglibEalExecuteCommandSync.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C00587A8 (RaidCompleteMiniportRequestCallback.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C00746B0 (StorUnitExecuteNvmeSrbComplete.c)
 *     RaWmiPassToMiniPort @ 0x1C00A2B7C (RaWmiPassToMiniPort.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1C00AB8B4 (StorGetNVMeIdentifyInfo.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxIdleComponentFromMiniport(__int64 a1, __int64 a2)
{
  bool v3; // al

  v3 = RaidAdapterPoFxIdleComponent(a1, a2, 0LL);
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4896) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4896) + 96LL));
  return !v3 ? 0xC100000C : 0;
}
