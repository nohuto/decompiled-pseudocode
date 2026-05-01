/*
 * XREFs of _lambda_fa4fa0583ff6b4cef130c22b12f95f68_::_lambda_invoker_cdecl_ @ 0x180198690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_fa4fa0583ff6b4cef130c22b12f95f68_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[7], (struct IUnknown *)Context, (void *)0x401, 9LL);
}
