/*
 * XREFs of ??1Completer@?$static_lazy@VTouchKeyboardTelemetry@@@details@wil@@QEAA@XZ @ 0x180531CDC
 * Callers:
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_NAEA_NAEA_NAEA_NAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGPEBG_NAEA_NAEA_NHAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54AEA_N6611111110466$$QEAH6@Z @ 0x180530A30 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUI.c)
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54444000000004AEA_NAEAU?$atomic@_N@std@@$$QEAH6@Z @ 0x180530C28 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07_ea_180530C28.c)
 *     ?IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z @ 0x180533A8C (-IsEnabled@TouchKeyboardTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@P6AXXZ@Z @ 0x18053614C (-get@-$static_lazy@VTouchKeyboardTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardTraceLogging@@.c)
 */

BOOL __fastcall wil::details::static_lazy<TouchKeyboardTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rbx
  union _RTL_RUN_ONCE v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3.Ptr = *(PVOID *)(wil::details::static_lazy<TouchKeyboardTraceLogging>::get(
                          a1,
                          _lambda_1ac898bd3d40bc28a50fe4f0aa1b56f0_::_lambda_invoker_cdecl_)
                      + 8);
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = v3.Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
