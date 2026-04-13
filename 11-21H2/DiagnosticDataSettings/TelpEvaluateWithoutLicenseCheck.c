/*
 * XREFs of TelpEvaluateWithoutLicenseCheck @ 0x1800023C8
 * Callers:
 *     TelEvaluateActiveSettingAuthority @ 0x180002500 (TelEvaluateActiveSettingAuthority.c)
 * Callees:
 *     TelpReadLocalSetting @ 0x180001CE8 (TelpReadLocalSetting.c)
 *     TelpReadGroupPolicySetting @ 0x180001DC8 (TelpReadGroupPolicySetting.c)
 *     TelpReadMdmSetting @ 0x180001E9C (TelpReadMdmSetting.c)
 *     TelpReadEnterpriseGovSetting @ 0x180001F6C (TelpReadEnterpriseGovSetting.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TelpEvaluateWithoutLicenseCheck(int *a1, _DWORD *a2, unsigned int a3)
{
  int v6; // edi
  unsigned int v7; // r8d
  int v8; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v10; // [rsp+50h] [rbp+20h] BYREF
  int v11; // [rsp+60h] [rbp+30h] BYREF

  if ( a1 )
  {
    v11 = 1;
    v6 = TelpReadEnterpriseGovSetting(&v11, a1);
    if ( v11 )
    {
      if ( a2 )
        *a2 = 3;
    }
    else
    {
      v10 = 1;
      v6 = TelpReadGroupPolicySetting(&v10, a1);
      if ( v10 )
      {
        if ( a2 )
          *a2 = 0;
      }
      else
      {
        v6 = TelpReadMdmSetting(&v10, a1);
        if ( v10 )
        {
          if ( a2 )
            *a2 = 1;
        }
        else
        {
          if ( a2 )
            *a2 = 2;
          v6 = TelpReadLocalSetting(&v11, a1);
          if ( !v11 )
          {
            v10 = 1;
            v11 = 4;
            NtQueryLicenseValue(aB, 0LL, &v10, 4LL, &v11);
            *a1 = v10;
          }
        }
      }
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x56D, v7, (const char *)(unsigned int)v6, v8);
    return (unsigned int)v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x536, a3, (const char *)0x80070057LL, v8);
    return 2147942487LL;
  }
}
