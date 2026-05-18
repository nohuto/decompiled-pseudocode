/*
 * XREFs of sub_18000F430 @ 0x18000F430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char sub_18000F430()
{
  __int64 (*RtlDllShutdownInProgress)(void); // rax
  char v1; // bl
  HMODULE ModuleHandleW; // rax

  RtlDllShutdownInProgress = (__int64 (*)(void))qword_1801F7478;
  v1 = 0;
  if ( qword_1801F7478 )
    return RtlDllShutdownInProgress();
  ModuleHandleW = (HMODULE)hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDllShutdownInProgress = GetProcAddress(ModuleHandleW, "RtlDllShutdownInProgress");
  qword_1801F7478 = (__int64)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return RtlDllShutdownInProgress();
  return v1;
}
