/*
 * XREFs of WPP_SF_qq @ 0x1C003EAA4
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0004BA0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0006A50 (RaDriverDeviceControlIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C000FC84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0010EF0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011048 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaDriverPowerIrp @ 0x1C00114B0 (RaDriverPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0011628 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001170C (RaidUnitSetPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011898 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0011970 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0011B7C (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0011E18 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0011EBC (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011F70 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012048 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0012FA4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C00137A0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0013FD0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0014160 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     StorpInitializeWorkItem @ 0x1C0014238 (StorpInitializeWorkItem.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C00143C0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     StorpFreeWorkItem @ 0x1C00146C0 (StorpFreeWorkItem.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0014760 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0014810 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00216F4 (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 *     RaDriverAddDevice @ 0x1C003F5C0 (RaDriverAddDevice.c)
 *     StorpFreeTimer @ 0x1C004895C (StorpFreeTimer.c)
 *     StorpInitializeTimer @ 0x1C00493AC (StorpInitializeTimer.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C005B7BC (RaidSyncAcpiEvalMethod.c)
 *     RaDriverCloseIrp @ 0x1C009FF70 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00A0010 (RaDriverCreateIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C00A1030 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C00A2820 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C00A6490 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C00A6780 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C00A70B8 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
