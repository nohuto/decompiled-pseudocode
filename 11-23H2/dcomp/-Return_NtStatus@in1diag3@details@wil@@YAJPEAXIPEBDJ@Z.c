/*
 * XREFs of ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18019FE44
 * Callers:
 *     ?CreateInputSink@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAPEAX@Z @ 0x180011CEC (-CreateInputSink@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ??$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z @ 0x18019FD18 (--$ReportFailure_NtStatus@$00@details@wil@@YAJPEAXIPEBD110J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_NtStatus(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  wil::details *v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v6) = (_DWORD)a4;
  return wil::details::ReportFailure_NtStatus<1>((int)this, a2, a3, (__int64)a4, v5, retaddr, v6);
}
