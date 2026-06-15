/*
 * XREFs of ?GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1800C3D70
 * Callers:
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800C2460 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall wil::details::GetModuleInformationFromAddress(
        wil::details *this,
        _DWORD *a2,
        unsigned int *a3,
        char *a4))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  if ( a3 )
    *(_BYTE *)a3 = 0;
  if ( a2 )
    *a2 = 0;
  result = wil::details::g_pfnGetModuleInformation;
  if ( wil::details::g_pfnGetModuleInformation )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))wil::details::g_pfnGetModuleInformation(
                                                                     this,
                                                                     a2,
                                                                     a3,
                                                                     64LL);
  return result;
}
