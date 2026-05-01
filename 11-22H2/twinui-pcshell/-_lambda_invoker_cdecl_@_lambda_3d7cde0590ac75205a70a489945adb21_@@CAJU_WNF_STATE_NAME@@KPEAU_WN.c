/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_3d7cde0590ac75205a70a489945adb21_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801B7550
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@U_SEB_EVENT_HEADER@@@?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@QEAAXPEBU_SEB_EVENT_HEADER@@K@Z @ 0x1801B7578 (--$InternalCallback@U_SEB_EVENT_HEADER@@@-$wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@w.c)
 */

__int64 __fastcall _lambda_3d7cde0590ac75205a70a489945adb21_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<_SEB_EVENT_HEADER>::InternalCallback<_SEB_EVENT_HEADER>(a4, a5, a6);
  return 0LL;
}
