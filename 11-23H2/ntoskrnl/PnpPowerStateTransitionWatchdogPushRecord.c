/*
 * XREFs of PnpPowerStateTransitionWatchdogPushRecord @ 0x140957AAC
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096B9B0 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9E0F8 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F104 (PoPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 PnpPowerStateTransitionWatchdogPushRecord()
{
  return PoPushPowerStateTransitionRecordWithCallback(
           PsInitialSystemProcess,
           KeGetCurrentThread(),
           0LL,
           (__int64)PnpPowerStateTransitionWatchdogCallback);
}
