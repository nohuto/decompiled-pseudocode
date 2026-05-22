/*
 * XREFs of ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801EB820
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPProcessor::OnInputReport(PTPProcessor *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  int v4; // eax
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 == 4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3));
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
        (const char *)(unsigned int)v5,
        v7);
  }
  else
  {
    if ( *(_DWORD *)a2 != 4096 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x53,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
        a4);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x49,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
        (const char *)(unsigned int)v4,
        v7);
  }
  return 0LL;
}
