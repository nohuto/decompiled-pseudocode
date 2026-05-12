/*
 * XREFs of WPP_SF_qq @ 0x1C003C710
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0009760 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000AFB0 (RaDriverDeviceControlIrp.c)
 *     RaDriverPowerIrp @ 0x1C0014740 (RaDriverPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0014988 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0014A90 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0014E6C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0015460 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0015F84 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitPowerIrp @ 0x1C0016744 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0016828 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0016A48 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0016C00 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0017A14 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0017D60 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0017EE0 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0018350 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00184B0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0018650 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0018800 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C001DC30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDevice @ 0x1C001E2E8 (RaidAdapterPowerUpDevice.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00226C4 (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaDriverAddDevice @ 0x1C003D390 (RaDriverAddDevice.c)
 *     StorpFreeTimer @ 0x1C0045484 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C004570C (StorpFreeWorkItem.c)
 *     StorpInitializeTimer @ 0x1C0046240 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C00463D4 (StorpInitializeWorkItem.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C004F66C (RaidSyncAcpiEvalMethod.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00519EC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaDriverCreateIrp @ 0x1C0084FF0 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0085090 (RaDriverCloseIrp.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0085B00 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C0085E24 (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0086F64 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C0089400 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterScsiIrp @ 0x1C008CB6C (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
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
