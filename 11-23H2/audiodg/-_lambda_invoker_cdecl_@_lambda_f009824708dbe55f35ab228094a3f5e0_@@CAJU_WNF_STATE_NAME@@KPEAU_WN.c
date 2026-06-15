/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_f009824708dbe55f35ab228094a3f5e0_@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x140076640
 * Callers:
 *     <none>
 * Callees:
 *     ??$InternalCallback@UWNF_AUDIO_ORIENTATION_STATE@@@?$wnf_subscription_state@UWNF_AUDIO_ORIENTATION_STATE@@@details@wil@@QEAAXPEBUWNF_AUDIO_ORIENTATION_STATE@@K@Z @ 0x140076668 (--$InternalCallback@UWNF_AUDIO_ORIENTATION_STATE@@@-$wnf_subscription_state@UWNF_AUDIO_ORIENTATI.c)
 */

__int64 __fastcall _lambda_f009824708dbe55f35ab228094a3f5e0_::_lambda_invoker_cdecl_(
        struct _WNF_STATE_NAME a1,
        int a2,
        struct _WNF_TYPE_ID *a3,
        void *a4,
        const void *a5,
        unsigned int a6)
{
  if ( a2 )
    wil::details::wnf_subscription_state<WNF_AUDIO_ORIENTATION_STATE>::InternalCallback<WNF_AUDIO_ORIENTATION_STATE>(
      a4,
      a5,
      a6);
  return 0LL;
}
