/*
 * XREFs of TelpReadLocalSetting @ 0x1800020CC
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x1800027B8 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelEvaluateActiveSettingAuthority @ 0x1800028F0 (TelEvaluateActiveSettingAuthority.c)
 * Callees:
 *     TelpReadRegistryDword @ 0x1800014A8 (TelpReadRegistryDword.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004A4C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180005CA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelpReadLocalSetting(_DWORD *a1, void *a2)
{
  __int64 result; // rax
  int RegistryDword; // ebx
  HMODULE ModuleHandleW; // rax
  unsigned int v7; // r8d
  unsigned __int8 (*ProcAddress)(void); // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = CPSSPeekDwordSetting(0LL, 0LL, L"AllowTelemetry", a2);
  RegistryDword = result;
  if ( (int)result < 0 )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    if ( ModuleHandleW )
    {
      ProcAddress = (unsigned __int8 (*)(void))GetProcAddress(ModuleHandleW, "RtlIsStateSeparationEnabled");
      if ( ProcAddress )
      {
        if ( ProcAddress() )
          RegistryDword = TelpReadRegistryDword(
                            a2,
                            HKEY_LOCAL_MACHINE,
                            L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection",
                            L"AllowTelemetry");
      }
    }
    if ( RegistryDword == -2147024894 )
    {
      *a1 = 0;
      return 0LL;
    }
    else
    {
      *a1 = 1;
      if ( RegistryDword < 0 )
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0x39A, v7, (const char *)(unsigned int)RegistryDword, v9);
      return (unsigned int)RegistryDword;
    }
  }
  else
  {
    *a1 = 1;
  }
  return result;
}
