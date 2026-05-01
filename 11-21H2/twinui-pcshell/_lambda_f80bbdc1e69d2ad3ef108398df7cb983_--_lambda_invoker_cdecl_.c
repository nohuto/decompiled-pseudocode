/*
 * XREFs of _lambda_f80bbdc1e69d2ad3ef108398df7cb983_::_lambda_invoker_cdecl_ @ 0x1803A0770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_f80bbdc1e69d2ad3ef108398df7cb983_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)0x401, 1LL);
}
