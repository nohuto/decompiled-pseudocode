/*
 * XREFs of ExRundownCompleted @ 0x140208880
 * Callers:
 *     PfFileInfoNotify @ 0x1402DF520 (PfFileInfoNotify.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADB80 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDeleteAtsDevice @ 0x140521EA0 (IommuDeleteAtsDevice.c)
 *     IommuDevicePowerChange @ 0x140521F20 (IommuDevicePowerChange.c)
 *     IommupMapDeviceInternal @ 0x140523B68 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140523F28 (IommupUnmapDeviceInternal.c)
 *     BgkpDisableConsole @ 0x14054EFAC (BgkpDisableConsole.c)
 *     PspIoRateEntryInitialize @ 0x140688AF8 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     HalpIommuCreateDevice @ 0x140829048 (HalpIommuCreateDevice.c)
 *     PsUnregisterSyscallProvider @ 0x1409B4850 (PsUnregisterSyscallProvider.c)
 *     SmcStoreDelete @ 0x1409DB4B8 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1409F36C4 (EtwpCoverageSamplerStop.c)
 *     PfInitializeSuperfetch @ 0x140B617C0 (PfInitializeSuperfetch.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74030 (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
