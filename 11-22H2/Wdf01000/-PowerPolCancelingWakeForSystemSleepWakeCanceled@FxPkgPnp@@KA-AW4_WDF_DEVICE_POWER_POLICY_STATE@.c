/*
 * XREFs of ?PowerPolCancelingWakeForSystemSleepWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1C007DCA0 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolCancelingWakeForSystemSleepWakeCanceled(FxPkgPnp *This)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, PowerDeviceD0, NoRetry, RequestD0ForSx);
  v2 = 1472;
  if ( v1 < 0 )
    return 1404;
  return v2;
}
