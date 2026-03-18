/*
 * XREFs of GetDWORDSettingValues @ 0x1C0095EC0
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0095570 (ReadPointerDeviceSettings.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0095C9C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C0095EE0 (GetDWORDSettingValuesEx.c)
 */

__int64 __fastcall GetDWORDSettingValues(__int64 a1, __int64 a2, __int64 a3)
{
  return GetDWORDSettingValuesEx(a1, a2, a3, 0LL);
}
