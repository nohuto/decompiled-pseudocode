/*
 * XREFs of ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x18031A390
 * Callers:
 *     wil::details::functor_wrapper_other__lambda_4d22249b2e966fdcd7fec0fc117130b9__&_int_::Run @ 0x180151250 (wil--details--functor_wrapper_other__lambda_4d22249b2e966fdcd7fec0fc117130b9__-_int_--Run.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x1803199A8 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1800E186C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::wnf_query_nothrow(
        wil *this,
        const struct _WNF_STATE_NAME *a2,
        bool *a3,
        struct wil::WNF_CHANGE_STAMP_STRUCT *a4)
{
  unsigned int v6; // edi
  int v8; // ecx
  const char *v9; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(a2->Data[0]) = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  v6 = NtQueryWnfStateData(&WNF_SHEL_ENTERPRISE_START_LAYOUT_POLICY_VALUE_CHANGED, 0LL, 0LL, &v11) | 0x10000000;
  if ( (int)(v6 + 0x80000000) < 0 || v6 == -805306333 )
  {
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x29B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (__int64)"Inconsistent state data size in wnf_query",
      v9);
    v8 = v11;
    LOBYTE(a2->Data[0]) = v11 != 0;
    if ( a3 )
      *(_DWORD *)a3 = v8;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x299,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v6);
    return v6;
  }
}
