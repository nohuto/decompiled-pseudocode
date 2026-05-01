/*
 * XREFs of ?RtlDllShutdownInProgress@details@wil@@YGEXZ @ 0x10003D70
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ @ 0x10003CC4 (-wil_details_GetNtDllModuleHandle@@YGPAUHINSTANCE__@@XZ.c)
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 *     @_guard_check_icall_nop@4 @ 0x100072B0 (@_guard_check_icall_nop@4.c)
 */

unsigned __int8 wil::details::RtlDllShutdownInProgress()
{
  BOOLEAN (__stdcall *RtlDllShutdownInProgress)(); // esi
  HMODULE NtDllModuleHandle; // eax

  RtlDllShutdownInProgress = (BOOLEAN (__stdcall *)())`wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress;
  if ( `wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress )
    return ((int (__thiscall *)(BOOLEAN (__stdcall *)()))RtlDllShutdownInProgress)(RtlDllShutdownInProgress);
  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  RtlDllShutdownInProgress = (BOOLEAN (__stdcall *)())GetProcAddress(NtDllModuleHandle, "RtlDllShutdownInProgress");
  `wil::details::RtlDllShutdownInProgress'::`2'::s_pfnRtlDllShutdownInProgress = (int)RtlDllShutdownInProgress;
  if ( RtlDllShutdownInProgress )
    return ((int (__thiscall *)(BOOLEAN (__stdcall *)()))RtlDllShutdownInProgress)(RtlDllShutdownInProgress);
  else
    return 0;
}
