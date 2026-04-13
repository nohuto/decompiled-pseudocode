/*
 * XREFs of TelpReadMdmSetting @ 0x18000228C
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x1800027B8 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002A20 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     TelGetNumericPolicy @ 0x180001A40 (TelGetNumericPolicy.c)
 *     TelpReadUsersPolicySetting @ 0x1800024B8 (TelpReadUsersPolicySetting.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelpReadMdmSetting(_DWORD *a1, int *a2)
{
  char v4; // si
  int v5; // edi
  int NumericPolicy; // ebx
  unsigned int v7; // r8d
  int v8; // eax
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  int v12; // [rsp+50h] [rbp+30h] BYREF
  int v13; // [rsp+60h] [rbp+40h] BYREF
  int v14; // [rsp+68h] [rbp+48h] BYREF

  v13 = 0;
  v12 = 0;
  *a1 = 1;
  v4 = 1;
  v5 = 3;
  NumericPolicy = TelGetNumericPolicy((__int64)L"AllowTelemetry", &v12, &v13);
  if ( NumericPolicy < 0
    || (!v12 ? (v4 = 0) : (v5 = v13),
        (v12 = 1,
         v14 = 3,
         NumericPolicy = TelpReadUsersPolicySetting(&v12, &v14, L"AllowTelemetry_PolicyManager"),
         NumericPolicy < 0)
     && v12) )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x422, v7, (const char *)(unsigned int)NumericPolicy, savedregs);
  }
  else
  {
    if ( v4 || v12 )
    {
      v8 = v14;
      if ( v5 < v14 )
        v8 = v5;
      *a2 = v8;
    }
    else
    {
      *a1 = 0;
    }
    return 0;
  }
  return (unsigned int)NumericPolicy;
}
