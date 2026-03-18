/*
 * XREFs of __security_check_cookie @ 0x1C001F330
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0007740 (UsbhFdoSystemPowerState.c)
 *     UsbhHubProcessIsr @ 0x1C00083B0 (UsbhHubProcessIsr.c)
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhDisableTimerObject @ 0x1C000B4D0 (UsbhDisableTimerObject.c)
 *     UsbhQueryBusRelations @ 0x1C000B7A0 (UsbhQueryBusRelations.c)
 *     UsbhEnableTimerObject @ 0x1C000C0D0 (UsbhEnableTimerObject.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000C730 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C000C920 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C000DFB0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000E150 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDmTimerDpc @ 0x1C000E2D0 (UsbhDmTimerDpc.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001A270 (UsbhSyncPowerOnPorts.c)
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 *     UsbhCreateDevice @ 0x1C001BC70 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C001E90C (UsbhInitializeDevice.c)
 *     __GSHandlerCheckCommon @ 0x1C001F3CC (__GSHandlerCheckCommon.c)
 *     UsbhAcpiEnumChildren @ 0x1C0028F7C (UsbhAcpiEnumChildren.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0029104 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C00299A8 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C0029ADC (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetAcpiPortAttributes @ 0x1C002A8DC (UsbhGetAcpiPortAttributes.c)
 *     UsbhSetPortPower @ 0x1C002D208 (UsbhSetPortPower.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C0031FBC (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     UsbhIoctlValidateParameters @ 0x1C0040958 (UsbhIoctlValidateParameters.c)
 *     UsbhMakePdoName @ 0x1C00432FC (UsbhMakePdoName.c)
 *     UsbhGetD3Policy @ 0x1C00443E8 (UsbhGetD3Policy.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00461CC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhUpdateRegSurpriseRemovalCount @ 0x1C0046790 (UsbhUpdateRegSurpriseRemovalCount.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0048514 (UsbhBuildWmiConnectionNotification.c)
 *     UsbhGetPerformanceInfo @ 0x1C0048D38 (UsbhGetPerformanceInfo.c)
 *     UsbhQuerySSstate @ 0x1C004BD78 (UsbhQuerySSstate.c)
 *     UsbhReset1Timeout @ 0x1C004D800 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004DDF0 (UsbhReset2Timeout.c)
 *     UsbhGetDeviceFlags @ 0x1C0051110 (UsbhGetDeviceFlags.c)
 *     UsbhPdoCheckBootDeviceReady @ 0x1C0054050 (UsbhPdoCheckBootDeviceReady.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055AB0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056200 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C00566C0 (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005919C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005925C (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0059444 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C00595D4 (UsbhGetGlobalUxdSettings.c)
 *     UsbhGetUxdDeviceKey @ 0x1C00599F0 (UsbhGetUxdDeviceKey.c)
 *     UsbhGetUxdPortKey @ 0x1C0059C74 (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x1C0059F10 (UsbhPropagateUxdState.c)
 *     UsbhUpdateUxdSettings @ 0x1C005A420 (UsbhUpdateUxdSettings.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C005ACEC (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C005AE08 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005AF58 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005B04C (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubInformation @ 0x1C005B170 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005B284 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhEtwLogPortInformation @ 0x1C005B45C (UsbhEtwLogPortInformation.c)
 *     MyRegQueryUlong @ 0x1C005CA44 (MyRegQueryUlong.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
