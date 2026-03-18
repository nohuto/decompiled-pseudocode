/*
 * XREFs of PopSetupBluetoothChargingNotification @ 0x140864E10
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupBluetoothChargingNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (int)&v1,
           (int)&WNF_BLTH_BLUETOOTH_DEVICE_DOCK_STATUS,
           1,
           0,
           (__int64)PopWnfBluetoothChargingCallback,
           0LL);
}
