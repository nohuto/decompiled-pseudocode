/*
 * XREFs of ??$InternalCallback@UWNF_AUDIO_ORIENTATION_STATE@@@?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@QEAAXPEBUWNF_AUDIO_ORIENTATION_STATE@@K@Z @ 0x1400766B8
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_f009824708dbe55f35ab228094a3f5e0_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x140076690 (-_lambda_invoker_cdecl_@_lambda_f009824708dbe55f35ab228094a3f5e0_@@CAJU_WNF_STATE_NAME@@KPEAU_WN.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x14004EB94 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14006D500 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::InternalCallback<WNF_AUDIO_ORIENTATION_STATE>(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v4; // rcx
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 != 4 )
    return wil::details::in1diag3::Log_HrMsg(
             retaddr,
             (void *)0x39D,
             (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
             (const char *)0x8000FFFFLL,
             (int)"Inconsistent state data size in WNF callback",
             v5);
  v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
}
