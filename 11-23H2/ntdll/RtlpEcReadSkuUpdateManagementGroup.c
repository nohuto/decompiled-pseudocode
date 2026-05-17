/*
 * XREFs of RtlpEcReadSkuUpdateManagementGroup @ 0x18009FFA4
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x18009FE80 (RtlIsFeatureEnabledForEnterprise.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x1800A3A60 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlpEcReadSkuUpdateManagementGroup(bool *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-10h] BYREF
  const wchar_t *v4; // [rsp+38h] [rbp-8h]
  int v5; // [rsp+58h] [rbp+18h] BYREF
  int v6; // [rsp+60h] [rbp+20h] BYREF
  int v7; // [rsp+68h] [rbp+28h] BYREF

  v7 = 0;
  v6 = 0;
  v5 = 0;
  v4 = L"UpdatePolicy-UpdateManagementGroup";
  v3 = 4587588;
  result = ZwQueryLicenseValue(&v3, &v6, &v7, 4LL, &v5);
  if ( (int)result >= 0 )
  {
    if ( v5 == 4 && v6 == 4 )
      *a1 = v7 == 0;
    else
      return 3221225508LL;
  }
  return result;
}
