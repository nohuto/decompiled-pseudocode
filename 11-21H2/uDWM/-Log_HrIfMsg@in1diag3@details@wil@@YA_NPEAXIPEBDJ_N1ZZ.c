/*
 * XREFs of ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800C6C3C
 * Callers:
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800C6798 (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x1800C661C (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

char wil::details::in1diag3::Log_HrIfMsg(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4,
        char a5,
        __int64 a6,
        const char *a7,
        ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  wil::details *v9; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( a5 )
  {
    LODWORD(v9) = (_DWORD)a4;
    wil::details::ReportFailure_HrMsg<2>((__int64)this, a2, a3, (__int64)a4, v8, retaddr, v9, a6, (char *)&a7);
  }
  return a5;
}
