/*
 * XREFs of TelpReadEnterpriseGovSetting @ 0x180001F6C
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x1800023C8 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002640 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180005060 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelpReadEnterpriseGovSetting(_DWORD *a1, int *a2)
{
  unsigned int v3; // ebx
  FARPROC ProcAddress; // rdi
  HMODULE ModuleHandleW; // rax
  int v7; // eax
  unsigned int v8; // r8d
  int v10; // [rsp+44h] [rbp-3Ch] BYREF
  int v11; // [rsp+48h] [rbp-38h] BYREF
  const wchar_t *v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+58h] [rbp-28h] BYREF
  const wchar_t *v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h] BYREF
  const wchar_t *v16; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v18; // [rsp+B0h] [rbp+30h] BYREF
  int v19; // [rsp+C0h] [rbp+40h] BYREF
  int v20; // [rsp+C8h] [rbp+48h] BYREF

  *a1 = 1;
  v16 = L"Reserved.PlatformSigned";
  v14 = L"CodeIntegrity.Telemetry";
  v15 = 3145774;
  v3 = 0;
  v12 = L"OptInLevel";
  v19 = 0;
  v13 = 3145774;
  ProcAddress = 0LL;
  v11 = 1441812;
  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( ModuleHandleW )
    ProcAddress = GetProcAddress(ModuleHandleW, "NtQuerySecurityPolicy");
  v18 = 0;
  v20 = 4;
  NtQueryLicenseValue(asc_180009010, 0LL, &v18, 4LL, &v20);
  if ( (unsigned int)(v18 - 171) <= 1 && ProcAddress )
  {
    v7 = ((__int64 (__fastcall *)(int *, int *, int *, int *))ProcAddress)(&v15, &v13, &v11, &v10);
    v3 = v7 | 0x10000000;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x478, v8, (const char *)v3, (int)&v19);
    }
    else if ( v10 == 1 && (unsigned int)v19 <= 3 )
    {
      *a2 = v19;
    }
    else
    {
      *a2 = 0;
    }
  }
  else
  {
    *a1 = 0;
  }
  return v3;
}
