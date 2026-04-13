/*
 * XREFs of TelEvaluateActiveSettingAuthority @ 0x180002500
 * Callers:
 *     TelGetAllAllowedTelemetryTypes @ 0x180001480 (TelGetAllAllowedTelemetryTypes.c)
 *     TelSetLocalTelemetrySetting @ 0x180001700 (TelSetLocalTelemetrySetting.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002640 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelGetWerTelemetryMode @ 0x180002760 (TelGetWerTelemetryMode.c)
 * Callees:
 *     TelGetNumericPolicy @ 0x180001924 (TelGetNumericPolicy.c)
 *     TelpReadLocalSetting @ 0x180001CE8 (TelpReadLocalSetting.c)
 *     TelpEvaluateWithoutLicenseCheck @ 0x1800023C8 (TelpEvaluateWithoutLicenseCheck.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelEvaluateActiveSettingAuthority(int *a1, int *a2, unsigned int a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v14; // [rsp+60h] [rbp+30h] BYREF
  int v15; // [rsp+70h] [rbp+40h] BYREF
  int v16; // [rsp+78h] [rbp+48h] BYREF

  if ( !a1 )
  {
    v5 = -2147024809;
    v6 = 1413LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v6, a3, (const char *)(unsigned int)v5, v12);
    return (unsigned int)v5;
  }
  v15 = 2;
  v14 = 1;
  v5 = TelpEvaluateWithoutLicenseCheck(&v14, &v15, a3);
  v7 = v15;
  if ( a2 )
    *a2 = v15;
  if ( v5 < 0 )
  {
    *a1 = 0;
    goto LABEL_23;
  }
  v8 = v14;
  if ( v14 == 2 )
    v8 = 1;
  v14 = v8;
  *a1 = v8;
  if ( v7 > 1 )
    goto LABEL_19;
  v16 = 1;
  v15 = 1;
  if ( (int)TelGetNumericPolicy((__int64)L"ConfigureTelemetryOptInSettingsUx", &v15, &v16) < 0 || v15 && v16 )
    goto LABEL_19;
  v16 = 3;
  v15 = 1;
  v5 = TelpReadLocalSetting(&v15, &v16);
  if ( v5 < 0 )
  {
LABEL_23:
    v6 = 1461LL;
    goto LABEL_24;
  }
  if ( v15 )
  {
    v9 = v16;
    v10 = v14;
    if ( v16 == 2 )
      v9 = 1;
    if ( v9 < v14 )
      v10 = v9;
    *a1 = v10;
  }
LABEL_19:
  if ( !*a1 )
  {
    v15 = 0;
    v16 = 4;
    NtQueryLicenseValue(aB_0, 0LL, &v15, 4LL, &v16);
    if ( v15 != 1 )
      *a1 = 1;
  }
  return (unsigned int)v5;
}
