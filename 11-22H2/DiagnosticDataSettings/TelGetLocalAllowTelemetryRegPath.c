/*
 * XREFs of TelGetLocalAllowTelemetryRegPath @ 0x1800016B0
 * Callers:
 *     TelpReadUsersPolicySetting @ 0x1800024B8 (TelpReadUsersPolicySetting.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002A20 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180005CA0 (_guard_xfg_dispatch_icall_nop.c)
 */

const wchar_t *TelGetLocalAllowTelemetryRegPath()
{
  HMODULE ModuleHandleW; // rax
  __int64 (*ProcAddress)(void); // rax
  char v2; // al
  const WCHAR *v3; // rcx

  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( !ModuleHandleW )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  ProcAddress = GetProcAddress(ModuleHandleW, "RtlIsStateSeparationEnabled");
  if ( !ProcAddress )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  v2 = ProcAddress();
  v3 = L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  if ( v2 )
    return L"OSDATA\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  return v3;
}
