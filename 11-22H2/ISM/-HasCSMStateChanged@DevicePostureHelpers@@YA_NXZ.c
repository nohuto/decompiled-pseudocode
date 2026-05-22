/*
 * XREFs of ?HasCSMStateChanged@DevicePostureHelpers@@YA_NXZ @ 0x18006EBB0
 * Callers:
 *     ?IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ @ 0x18006ECA0 (-IsDeviceConvertible@DevicePostureHelpers@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DevicePostureHelpers::HasCSMStateChanged(DevicePostureHelpers *this)
{
  DWORD v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v2 = 4;
  return !RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\TabletTip\\ConvertibleSlateModeChanged",
            L"ConvertibleSlateModeChanged",
            0x10u,
            0LL,
            &v3,
            &v2)
      && v3 != 0;
}
