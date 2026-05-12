/*
 * XREFs of WPP_SF_qqD @ 0x1C003C760
 * Callers:
 *     RaUnitStartIo @ 0x1C0004190 (RaUnitStartIo.c)
 *     RaidUnitCompleteRequest @ 0x1C0006E70 (RaidUnitCompleteRequest.c)
 *     RaDriverScsiIrp @ 0x1C0009760 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000AFB0 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 *     RaUnitAsyncError @ 0x1C000BF68 (RaUnitAsyncError.c)
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 *     RaDriverPnpIrp @ 0x1C000CC90 (RaDriverPnpIrp.c)
 *     RaDriverPowerIrp @ 0x1C0014740 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C00147E8 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0014988 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0014A90 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C0014E6C (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C0015460 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaUnitPowerIrp @ 0x1C0016744 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0016828 (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00168E4 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0016D0C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0017A14 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C0017D60 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0017EE0 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0018350 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00184B0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0018650 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0018800 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C001A098 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001A238 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C001DC30 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C001DD00 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C00226C4 (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaAdapterStartPowerIo @ 0x1C0048664 (RaAdapterStartPowerIo.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C0048980 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterSendPowerToMiniportWorkItemRoutine @ 0x1C0048DE0 (RaidAdapterSendPowerToMiniportWorkItemRoutine.c)
 *     RaUnitStartResetIo @ 0x1C0052F6C (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C00546E0 (RaidUnitCompleteResetRequest.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1C0056490 (RaidUpdateUnitIdentityWorkRoutine.c)
 *     StorUnitStartBypassIo @ 0x1C0056990 (StorUnitStartBypassIo.c)
 *     RaDriverCreateIrp @ 0x1C0084FF0 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0085090 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0089400 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C008C490 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
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
