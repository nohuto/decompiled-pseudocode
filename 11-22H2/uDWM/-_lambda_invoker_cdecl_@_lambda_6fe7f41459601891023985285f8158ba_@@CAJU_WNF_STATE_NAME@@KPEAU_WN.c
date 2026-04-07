/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_6fe7f41459601891023985285f8158ba_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180057E80
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@H@?$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z @ 0x180057EA8 (--$InternalCallback@H@-$wnf_subscription_state@H@details@wil@@QEAAXPEBHK@Z.c)
 */

__int64 __fastcall _lambda_6fe7f41459601891023985285f8158ba_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<int>::InternalCallback<int>(a4, a5, a6);
  return 0LL;
}
