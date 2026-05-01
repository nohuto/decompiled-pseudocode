/*
 * XREFs of ?RtlNtStatusToDosErrorNoTeb@details@wil@@YGKJ@Z @ 0x10003CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ @ 0x10003CC4 (-wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

FARPROC __stdcall wil::details::RtlNtStatusToDosErrorNoTeb(wil::details *this, int a2)
{
  int (__thiscall *v2)(_DWORD, _DWORD); // esi
  HMODULE NtDllModuleHandle; // eax
  FARPROC result; // eax

  v2 = (int (__thiscall *)(_DWORD, _DWORD))`wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb;
  if ( `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb )
    return (FARPROC)v2(v2, this);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  result = GetProcAddress(NtDllModuleHandle, "RtlNtStatusToDosErrorNoTeb");
  v2 = (int (__thiscall *)(_DWORD, _DWORD))result;
  `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb = (int)result;
  if ( result )
    return (FARPROC)v2(v2, this);
  return result;
}
