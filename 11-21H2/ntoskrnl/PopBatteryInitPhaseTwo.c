/*
 * XREFs of PopBatteryInitPhaseTwo @ 0x140B01A8C
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     PopReadUlongPowerKey @ 0x1403C0CB0 (PopReadUlongPowerKey.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     PopBatteryReadOscBits @ 0x140B01A3C (PopBatteryReadOscBits.c)
 */

char PopBatteryInitPhaseTwo()
{
  NTSTATUS v0; // eax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  PopReadUlongPowerKey(
    L"ChargerWeakDetectionThresholdPercent",
    (unsigned int *)&WeakChargerChargeDropMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  WeakChargerChargeDropMilliPercent *= 1000;
  PopReadUlongPowerKey(
    L"BatteryChargeTrajectoryThresholdPercent",
    (unsigned int *)&BatteryChargeTrajectoryThresholdMilliPercent,
    1u,
    1u,
    0xAu,
    100);
  BatteryChargeTrajectoryThresholdMilliPercent *= 1000;
  v0 = EtwRegister(&BATTERY_ETW_PROVIDER, (PETWENABLECALLBACK)PopBatteryEtwCallback, 0LL, &PopBatteryEtwHandle);
  if ( v0 >= 0 )
  {
    PopBatteryEtwRegistered = 1;
    ExSubscribeWnfStateChange(
      (int)&v2,
      (int)&WNF_USB_ERROR_NOTIFICATION,
      1,
      0,
      (__int64)PopUsbErrorWNFNotificationCallback,
      0LL);
    LOBYTE(v0) = PopBatteryReadOscBits();
  }
  return v0;
}
