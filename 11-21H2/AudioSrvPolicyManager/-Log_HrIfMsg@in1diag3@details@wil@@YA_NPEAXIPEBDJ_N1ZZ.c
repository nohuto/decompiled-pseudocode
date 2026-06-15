/*
 * XREFs of ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18000A5C0
 * Callers:
 *     ??$wnf_query_nothrow@W4_USER_ACTIVITY_PRESENCE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_USER_ACTIVITY_PRESENCE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180008458 (--$wnf_query_nothrow@W4_USER_ACTIVITY_PRESENCE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_USER_AC.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180007F54 (--$ReportFailure_HrMsg@$01@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
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
    wil::details::ReportFailure_HrMsg<2>((__int64)this, a2, a3, (__int64)a4, v8, retaddr, v9, a6, (va_list)&a7);
  }
  return a5;
}
