/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f88dcadf2f2e3bf99c8fb7858933000d_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1802D87D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@E@?$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z @ 0x1804D41B4 (--$InternalCallback@E@-$wnf_subscription_state@E@details@wil@@QEAAXPEBEK@Z.c)
 */

__int64 __fastcall _lambda_f88dcadf2f2e3bf99c8fb7858933000d_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<unsigned char>::InternalCallback<unsigned char>(a4, a5, a6);
  return 0LL;
}
