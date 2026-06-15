/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d51448ba32f8ef42e59400edd4566183_@@CA@PEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180032FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _lambda_d51448ba32f8ef42e59400edd4566183_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        wil::details::FeatureStateManager *Context,
        PTP_TIMER Timer)
{
  wil::details::FeatureStateManager::OnTimer(Context);
}
