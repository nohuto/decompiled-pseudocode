/*
 * XREFs of ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x14004E020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x14004EEAC (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 */

__int64 __fastcall wil::details::RtlNtStatusToDosErrorNoTeb(wil::details *this)
{
  unsigned int v1; // edi
  FARPROC ProcAddress; // rax
  unsigned int v3; // ebx
  HMODULE NtDllModuleHandle; // rax

  v1 = (unsigned int)this;
  ProcAddress = (FARPROC)`wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb;
  v3 = 0;
  if ( `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb )
    return ((unsigned int (__fastcall *)(_QWORD))ProcAddress)(v1);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  ProcAddress = GetProcAddress(NtDllModuleHandle, "RtlNtStatusToDosErrorNoTeb");
  `wil::details::RtlNtStatusToDosErrorNoTeb'::`2'::s_pfnRtlNtStatusToDosErrorNoTeb = (__int64)ProcAddress;
  if ( ProcAddress )
    return ((unsigned int (__fastcall *)(_QWORD))ProcAddress)(v1);
  return v3;
}
