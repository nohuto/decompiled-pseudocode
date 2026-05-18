/*
 * XREFs of sub_18000F390 @ 0x18000F390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F390(__int64 a1, __int64 a2)
{
  FARPROC RtlDisownModuleHeapAllocation; // rax
  unsigned int v5; // ebx
  HMODULE ModuleHandleW; // rax

  RtlDisownModuleHeapAllocation = (FARPROC)qword_1801F7480;
  v5 = 0;
  if ( qword_1801F7480 )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  ModuleHandleW = (HMODULE)hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlDisownModuleHeapAllocation = GetProcAddress(ModuleHandleW, "RtlDisownModuleHeapAllocation");
  qword_1801F7480 = (__int64)RtlDisownModuleHeapAllocation;
  if ( RtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  return v5;
}
