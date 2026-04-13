/*
 * XREFs of TelGetMaximumAllowedTelemetryLevel @ 0x180002640
 * Callers:
 *     <none>
 * Callees:
 *     TelpReadRegistryDword @ 0x1800012FC (TelpReadRegistryDword.c)
 *     TelGetLocalAllowTelemetryRegPath @ 0x180001510 (TelGetLocalAllowTelemetryRegPath.c)
 *     TelpReadGroupPolicySetting @ 0x180001DC8 (TelpReadGroupPolicySetting.c)
 *     TelpReadMdmSetting @ 0x180001E9C (TelpReadMdmSetting.c)
 *     TelpReadEnterpriseGovSetting @ 0x180001F6C (TelpReadEnterpriseGovSetting.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180002500 (TelEvaluateActiveSettingAuthority.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002D2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelGetMaximumAllowedTelemetryLevel(int *a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int active; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  const WCHAR *LocalAllowTelemetryRegPath; // rax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  int pvData; // [rsp+40h] [rbp+20h] BYREF
  int v15; // [rsp+48h] [rbp+28h] BYREF
  int v16; // [rsp+50h] [rbp+30h] BYREF

  if ( !a1 )
  {
    v4 = -2147024809;
    v5 = 1479LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(retaddr, (void *)v5, a3, (const char *)v4, savedregs);
    return v4;
  }
  v16 = 2;
  pvData = 1;
  active = TelEvaluateActiveSettingAuthority(&pvData, &v16, a3);
  v7 = active;
  if ( active < 0 )
    wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x5CE, a3, (const char *)(unsigned int)active, savedregs);
  *a1 = pvData;
  pvData = 1;
  v15 = 1;
  if ( v7 < 0 || v16 == 2 )
  {
    pvData = 1;
    LocalAllowTelemetryRegPath = TelGetLocalAllowTelemetryRegPath();
    v4 = TelpReadRegistryDword(&pvData, HKEY_LOCAL_MACHINE, LocalAllowTelemetryRegPath, L"MaxTelemetryAllowed");
    if ( (v4 & 0x80000000) == 0 )
    {
      v9 = pvData;
      goto LABEL_22;
    }
    goto LABEL_17;
  }
  if ( v16 == 3 )
  {
    v8 = TelpReadEnterpriseGovSetting(&pvData, &v15);
  }
  else if ( v16 )
  {
    if ( v16 != 1 )
    {
      v4 = -2147418113;
      goto LABEL_17;
    }
    v8 = TelpReadMdmSetting(&pvData, &v15);
  }
  else
  {
    v8 = TelpReadGroupPolicySetting(&pvData, &v15);
  }
  v4 = v8;
  if ( v8 < 0 )
  {
LABEL_17:
    v5 = 1540LL;
    goto LABEL_18;
  }
  if ( !pvData )
    return v4;
  v9 = v15;
LABEL_22:
  if ( v9 == 2 )
    v9 = 1;
  *a1 = v9;
  return v4;
}
