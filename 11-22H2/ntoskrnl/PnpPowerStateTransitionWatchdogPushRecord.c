/*
 * XREFs of PnpPowerStateTransitionWatchdogPushRecord @ 0x140957B5C
 * Callers:
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096BA60 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9E1B8 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F194 (PoPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 PnpPowerStateTransitionWatchdogPushRecord()
{
  return PoPushPowerStateTransitionRecordWithCallback(
           PsInitialSystemProcess,
           KeGetCurrentThread(),
           0LL,
           (LARGE_INTEGER)PnpPowerStateTransitionWatchdogCallback);
}
