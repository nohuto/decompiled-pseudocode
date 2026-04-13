/*
 * XREFs of TelGetLocalAllowTelemetryRegPath @ 0x180001510
 * Callers:
 *     TelSetLocalTelemetrySetting @ 0x180001700 (TelSetLocalTelemetrySetting.c)
 *     TelpReadUsersPolicySetting @ 0x1800020C8 (TelpReadUsersPolicySetting.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180002640 (TelGetMaximumAllowedTelemetryLevel.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180005060 (_guard_xfg_dispatch_icall_nop.c)
 */

const WCHAR *TelGetLocalAllowTelemetryRegPath()
{
  HMODULE ModuleHandleW; // rax
  unsigned __int8 (*ProcAddress)(void); // rax
  bool v2; // zf
  const WCHAR *result; // rax

  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( !ModuleHandleW )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  ProcAddress = (unsigned __int8 (*)(void))GetProcAddress(ModuleHandleW, "RtlIsStateSeparationEnabled");
  if ( !ProcAddress )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  v2 = ProcAddress() == 0;
  result = L"OSDATA\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  if ( v2 )
    return L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\DataCollection";
  return result;
}
