/*
 * XREFs of VslRegisterIumPowerCallbacks @ 0x140B31688
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 */

void VslRegisterIumPowerCallbacks()
{
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  if ( VslVsmEnabled && NtPowerInformation(PlatformInformation, 0LL, 0, &OutputBuffer, 1u) >= 0 )
  {
    if ( OutputBuffer )
    {
      ExSubscribeWnfStateChange(
        (int)&VslpIumCsWnfSubscription,
        (int)&WNF_PO_SCENARIO_CHANGE,
        1,
        0,
        (__int64)VslpConnectedStandbyWnfCallback,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
        (PPOWER_SETTING_CALLBACK)VslpConnectedStandbyPoCallback,
        0LL,
        0LL);
    }
  }
}
