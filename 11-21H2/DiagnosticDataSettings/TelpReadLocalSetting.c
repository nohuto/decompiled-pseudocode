/*
 * XREFs of TelpReadLocalSetting @ 0x180001CE8
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x1800023C8 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180002500 (TelEvaluateActiveSettingAuthority.c)
 * Callees:
 *     TelpReadRegistryDword @ 0x1800012FC (TelpReadRegistryDword.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003EA4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180005060 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelpReadLocalSetting(_DWORD *a1, void *a2)
{
  HMODULE ModuleHandleW; // rax
  unsigned __int8 (*ProcAddress)(void); // rax
  __int64 result; // rax
  int RegistryDword; // eax
  unsigned int v8; // r8d
  unsigned int v9; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( ModuleHandleW
    && (ProcAddress = (unsigned __int8 (*)(void))GetProcAddress(ModuleHandleW, "RtlIsStateSeparationEnabled")) != 0LL
    && ProcAddress()
    && (result = TelpReadRegistryDword(
                   a2,
                   HKEY_LOCAL_MACHINE,
                   L"OSDATA\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection",
                   L"AllowTelemetry"),
        (int)result >= 0) )
  {
    *a1 = 1;
  }
  else
  {
    RegistryDword = TelpReadRegistryDword(
                      a2,
                      HKEY_LOCAL_MACHINE,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection",
                      L"AllowTelemetry");
    v9 = RegistryDword;
    if ( RegistryDword == -2147024894 )
    {
      *a1 = 0;
      return 0LL;
    }
    else
    {
      *a1 = 1;
      if ( RegistryDword < 0 )
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x3AF, v8, (const char *)(unsigned int)RegistryDword, v10);
      return v9;
    }
  }
  return result;
}
