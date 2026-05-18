/*
 * XREFs of ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x180005A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18000E320 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RtlDisownModuleHeapAllocation(wil::details *this, void *a2, void *a3)
{
  FARPROC ProcAddress; // rax
  unsigned int v4; // ebx
  HMODULE ModuleHandleW; // rax

  ProcAddress = (FARPROC)`wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation;
  v4 = 0;
  if ( `wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(wil::details *, void *, void *))ProcAddress)(this, a2, a3);
  ModuleHandleW = (HMODULE)g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = ModuleHandleW;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "RtlDisownModuleHeapAllocation");
  `wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((unsigned int (__fastcall *)(wil::details *, void *, void *))ProcAddress)(this, a2, a3);
  return v4;
}
