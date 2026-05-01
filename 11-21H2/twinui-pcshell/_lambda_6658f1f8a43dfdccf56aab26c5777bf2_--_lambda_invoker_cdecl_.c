/*
 * XREFs of _lambda_6658f1f8a43dfdccf56aab26c5777bf2_::_lambda_invoker_cdecl_ @ 0x1800FAC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_6658f1f8a43dfdccf56aab26c5777bf2_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        ExperienceManagerUtils **Context,
        PTP_TIMER Timer,
        __int64 a4,
        __int64 a5)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[7], (struct IUnknown *)Context, (void *)0x401, 2u, a5);
}
