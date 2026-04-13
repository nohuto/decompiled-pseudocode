/*
 * XREFs of TelpReadGroupPolicySetting @ 0x1800021B8
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x1800027B8 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002A20 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     TelpReadRegistryDword @ 0x1800014A8 (TelpReadRegistryDword.c)
 *     TelpReadUsersPolicySetting @ 0x1800024B8 (TelpReadUsersPolicySetting.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelpReadGroupPolicySetting(_DWORD *a1, int *a2)
{
  char v4; // di
  int v5; // eax
  unsigned int v6; // r8d
  int v7; // ebx
  int v8; // eax
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int pvData; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF
  int v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 1;
  pvData = 3;
  v4 = 1;
  v5 = TelpReadRegistryDword(
         &pvData,
         HKEY_LOCAL_MACHINE,
         L"Software\\Policies\\Microsoft\\Windows\\DataCollection",
         L"AllowTelemetry");
  v7 = v5;
  if ( v5 == -2147024894 )
  {
    v4 = 0;
  }
  else if ( v5 < 0 )
  {
LABEL_6:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x3DD, v6, (const char *)(unsigned int)v7, v10);
    return (unsigned int)v7;
  }
  v13 = 1;
  v14 = 3;
  v7 = TelpReadUsersPolicySetting(&v13, &v14, L"AllowTelemetry");
  if ( v7 < 0 && v13 )
    goto LABEL_6;
  if ( v4 || v13 )
  {
    v8 = v14;
    if ( pvData < v14 )
      v8 = pvData;
    *a2 = v8;
  }
  else
  {
    *a1 = 0;
  }
  return 0;
}
