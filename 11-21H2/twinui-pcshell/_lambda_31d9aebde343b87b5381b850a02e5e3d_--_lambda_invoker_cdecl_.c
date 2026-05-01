/*
 * XREFs of _lambda_31d9aebde343b87b5381b850a02e5e3d_::_lambda_invoker_cdecl_ @ 0x1803A0750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_31d9aebde343b87b5381b850a02e5e3d_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        struct IUnknown *Context,
        PTP_TIMER Timer)
{
  ExperienceManagerUtils::PostToUIThread(0LL, Context, (void *)0x401, 0LL);
}
