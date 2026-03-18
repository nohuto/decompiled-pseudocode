/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C008338C
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0082DA0 (ReadPointerDeviceSettings.c)
 *     GetTouchTimeFromCPLValue @ 0x1C0151E80 (GetTouchTimeFromCPLValue.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C0083920 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1C0086C54 (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(off_1C02880F8);
    if ( !(unsigned int)GetDWORDSettingValuesEx(2LL, off_1C02880F8, 13LL) )
      return 0LL;
  }
  if ( !gMultiTouchMonitor && !(unsigned int)GetDWORDSettingValuesEx(3LL, off_1C02880E8, 1LL) )
    return 0LL;
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
