/*
 * XREFs of TelpReadRegistryDword @ 0x1800012FC
 * Callers:
 *     TelpReadLocalSetting @ 0x180001CE8 (TelpReadLocalSetting.c)
 *     TelpReadGroupPolicySetting @ 0x180001DC8 (TelpReadGroupPolicySetting.c)
 *     TelpReadUsersPolicySetting @ 0x1800020C8 (TelpReadUsersPolicySetting.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002640 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelpReadRegistryDword(PVOID pvData, HKEY hkey, LPCWSTR lpSubKey, LPCWSTR lpValue)
{
  __int64 result; // rax
  LSTATUS ValueW; // ecx
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  if ( pvData )
  {
    pcbData = 4;
    ValueW = RegGetValueW(hkey, lpSubKey, lpValue, 0x10010u, 0LL, pvData, &pcbData);
    result = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      return (unsigned int)ValueW;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x51, (unsigned int)lpSubKey, (const char *)0x80070057LL, v6);
    return 2147942487LL;
  }
  return result;
}
