/*
 * XREFs of WPP_SF_qqD @ 0x1C003EAF4
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0001770 (RaidUnitCompleteRequest.c)
 *     RaDriverScsiIrp @ 0x1C0004BA0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C0006A50 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 *     RaDriverPnpIrp @ 0x1C0007940 (RaDriverPnpIrp.c)
 *     RaUnitStartIo @ 0x1C0008F30 (RaUnitStartIo.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0010EF0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0011048 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0011250 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C00114B0 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0011558 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0011628 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C001170C (RaidUnitSetPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011898 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0011970 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0011CB4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0011E18 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011F70 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00121D4 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C00137A0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0013FD0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0014160 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C00143C0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C0014760 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0014810 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitAsyncError @ 0x1C0016C64 (RaUnitAsyncError.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00216F4 (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 *     RaAdapterStartPowerIo @ 0x1C004B4C4 (RaAdapterStartPowerIo.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C004B940 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x1C004BE40 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 *     RaUnitStartResetIo @ 0x1C005F780 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00610B0 (RaidUnitCompleteResetRequest.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0063260 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     StorUnitStartBypassIo @ 0x1C0063780 (StorUnitStartBypassIo.c)
 *     RaDriverCloseIrp @ 0x1C009FF70 (RaDriverCloseIrp.c)
 *     RaDriverCreateIrp @ 0x1C00A0010 (RaDriverCreateIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C00A2820 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00A6210 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
