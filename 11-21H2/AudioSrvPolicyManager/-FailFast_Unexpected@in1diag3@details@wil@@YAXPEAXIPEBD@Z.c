/*
 * XREFs of ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005464
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800051DC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180006514 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ??$wnf_query_nothrow@W4_USER_ACTIVITY_PRESENCE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_USER_ACTIVITY_PRESENCE@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180008458 (--$wnf_query_nothrow@W4_USER_ACTIVITY_PRESENCE@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4_USER_AC.c)
 * Callees:
 *     ??$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z @ 0x1800042C8 (--$ReportFailure_Hr@$02@details@wil@@YAXPEAXIPEBD110J@Z.c)
 */

void __fastcall __noreturn wil::details::in1diag3::FailFast_Unexpected(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr<3>((__int64)this, a2, a3, (__int64)a4, v4, retaddr);
}
