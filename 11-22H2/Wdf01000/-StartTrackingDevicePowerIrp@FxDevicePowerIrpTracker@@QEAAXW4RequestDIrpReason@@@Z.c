/*
 * XREFs of ?StartTrackingDevicePowerIrp@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@@Z @ 0x1C008213C
 * Callers:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C007DCA0 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0086CA0 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall FxDevicePowerIrpTracker::StartTrackingDevicePowerIrp(
        FxDevicePowerIrpTracker *this,
        RequestDIrpReason Reason)
{
  bool v4; // zf
  __int64 v5; // rcx

  v4 = this->m_DIrpRequestedForSIrp == RequestDIrpReasonInvalid;
  v5 = *(_QWORD *)(*(_QWORD *)&this[-1].m_History[1].Reason + 96LL);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM((const char *)v5, *(_DWORD *)(v5 + 208), *(_DWORD *)(v5 + 204));
  if ( Reason == RequestD0ForS0 || Reason == RequestDxForSx )
    this->m_DIrpRequestedForSIrp = Reason;
}
