/*
 * XREFs of PnpPowerStateTransitionWatchdogPushRecord @ 0x140957CAC
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BBB0 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9DF68 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F5F4 (PoPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 PnpPowerStateTransitionWatchdogPushRecord()
{
  return PoPushPowerStateTransitionRecordWithCallback(
           PsInitialSystemProcess,
           KeGetCurrentThread(),
           0LL,
           (LARGE_INTEGER)PnpPowerStateTransitionWatchdogCallback);
}
