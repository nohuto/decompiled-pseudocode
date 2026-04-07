/*
 * XREFs of ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x180055D80
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180055E00 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RtlDisownModuleHeapAllocation(wil::details *this, void *a2, void *a3)
{
  FARPROC ProcAddress; // rax
  unsigned int v6; // ebx
  HMODULE NtDllModuleHandle; // rax

  ProcAddress = (FARPROC)`wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation;
  v6 = 0;
  if ( `wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(wil::details *, void *, void *))ProcAddress)(this, a2, a3);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlDisownModuleHeapAllocation");
  `wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((unsigned int (__fastcall *)(wil::details *, void *, void *))ProcAddress)(this, a2, a3);
  return v6;
}
