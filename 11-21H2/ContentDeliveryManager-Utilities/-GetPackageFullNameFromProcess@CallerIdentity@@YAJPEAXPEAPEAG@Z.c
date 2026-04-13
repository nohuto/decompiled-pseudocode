/*
 * XREFs of ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800846F8
 * Callers:
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x18008468C (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180054154 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 */

__int64 __fastcall CallerIdentity::GetPackageFullNameFromProcess(HANDLE hProcess, PWSTR *a2, unsigned __int16 **a3)
{
  LONG v5; // eax
  signed int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  PWSTR v10; // rbx
  LONG v11; // eax
  PWSTR v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  UINT32 packageFullNameLength; // [rsp+58h] [rbp+10h] BYREF
  PWSTR packageFullName; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  packageFullNameLength = 0;
  v5 = GetPackageFullName(hProcess, &packageFullNameLength, 0LL);
  v6 = v5;
  if ( v5 > 0 )
    v6 = (unsigned __int16)v5 | 0x80070000;
  if ( v6 == -2147024774 && packageFullNameLength )
  {
    packageFullName = 0LL;
    CoTaskMemFree(0LL);
    v9 = _AllocStringWorker<CTCoAllocPolicy>(v8, v7, 0LL, packageFullNameLength, v14, &packageFullName);
    v10 = packageFullName;
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = GetPackageFullName(hProcess, &packageFullNameLength, packageFullName);
      v6 = v11;
      if ( v11 > 0 )
        v6 = (unsigned __int16)v11 | 0x80070000;
      if ( v6 >= 0 )
      {
        v12 = v10;
        v10 = 0LL;
        *a2 = v12;
      }
    }
    CoTaskMemFree(v10);
  }
  return (unsigned int)v6;
}
