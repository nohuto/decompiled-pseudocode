/*
 * XREFs of ExRundownCompleted @ 0x140208880
 * Callers:
 *     PfFileInfoNotify @ 0x1402DF7B0 (PfFileInfoNotify.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDeleteAtsDevice @ 0x1405223F0 (IommuDeleteAtsDevice.c)
 *     IommuDevicePowerChange @ 0x140522470 (IommuDevicePowerChange.c)
 *     IommupMapDeviceInternal @ 0x1405240B8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140524478 (IommupUnmapDeviceInternal.c)
 *     BgkpDisableConsole @ 0x14054F66C (BgkpDisableConsole.c)
 *     PspIoRateEntryInitialize @ 0x140688AF8 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     HalpIommuCreateDevice @ 0x140829348 (HalpIommuCreateDevice.c)
 *     PsUnregisterSyscallProvider @ 0x1409B4A50 (PsUnregisterSyscallProvider.c)
 *     SmcStoreDelete @ 0x1409DB6B8 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1409F3954 (EtwpCoverageSamplerStop.c)
 *     PfInitializeSuperfetch @ 0x140B617C0 (PfInitializeSuperfetch.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74030 (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
