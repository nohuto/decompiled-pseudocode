/*
 * XREFs of ?RtlDisownModuleHeapAllocation@details@wil@@YGJPAX0@Z @ 0x10003DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ @ 0x10003CC4 (-wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

FARPROC __stdcall wil::details::RtlDisownModuleHeapAllocation(wil::details *this, void *a2, void *a3)
{
  int (__thiscall *v3)(_DWORD, _DWORD, _DWORD); // esi
  HMODULE NtDllModuleHandle; // eax
  FARPROC result; // eax

  v3 = (int (__thiscall *)(_DWORD, _DWORD, _DWORD))`wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation;
  if ( `wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation )
    return (FARPROC)v3(v3, this, a2);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  result = GetProcAddress(NtDllModuleHandle, "RtlDisownModuleHeapAllocation");
  v3 = (int (__thiscall *)(_DWORD, _DWORD, _DWORD))result;
  `wil::details::RtlDisownModuleHeapAllocation'::`2'::s_pfnRtlDisownModuleHeapAllocation = (int)result;
  if ( result )
    return (FARPROC)v3(v3, this, a2);
  return result;
}
