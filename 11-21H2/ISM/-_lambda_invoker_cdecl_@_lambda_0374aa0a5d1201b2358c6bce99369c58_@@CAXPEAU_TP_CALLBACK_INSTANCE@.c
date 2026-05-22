/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_0374aa0a5d1201b2358c6bce99369c58_@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007F940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _lambda_0374aa0a5d1201b2358c6bce99369c58_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        wil::details::EnabledStateManager *Context,
        PTP_TIMER Timer)
{
  wil::details::EnabledStateManager::OnTimer(Context);
}
