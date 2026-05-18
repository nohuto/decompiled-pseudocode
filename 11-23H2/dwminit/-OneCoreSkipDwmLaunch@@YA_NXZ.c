/*
 * XREFs of ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x18000B5B4
 * Callers:
 *     DwmpCreateSessionProcess @ 0x18000C160 (DwmpCreateSessionProcess.c)
 * Callees:
 *     ?IsRunningInWininit@@YA_NXZ @ 0x18000ADF0 (-IsRunningInWininit@@YA_NXZ.c)
 */

bool OneCoreSkipDwmLaunch(void)
{
  char v0; // bl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v0 = 0;
  if ( IsRunningInWininit() )
  {
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"OneCoreNoBootDWM",
      0x20000010u,
      0LL,
      &pvData,
      &pcbData);
    return pvData != 0;
  }
  return v0;
}
