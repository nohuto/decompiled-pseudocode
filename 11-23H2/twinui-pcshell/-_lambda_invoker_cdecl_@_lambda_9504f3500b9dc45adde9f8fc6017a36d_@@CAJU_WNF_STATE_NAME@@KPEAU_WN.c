/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_9504f3500b9dc45adde9f8fc6017a36d_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801B74B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@_N@?$wnf_subscription_state@_N@details@wil@@QEAAXPEB_NK@Z @ 0x1801B74D8 (--$InternalCallback@_N@-$wnf_subscription_state@_N@details@wil@@QEAAXPEB_NK@Z.c)
 */

__int64 __fastcall _lambda_9504f3500b9dc45adde9f8fc6017a36d_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<bool>::InternalCallback<bool>(a4, a5, a6);
  return 0LL;
}
