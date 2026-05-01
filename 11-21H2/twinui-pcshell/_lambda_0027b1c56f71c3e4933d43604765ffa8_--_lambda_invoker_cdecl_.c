/*
 * XREFs of _lambda_0027b1c56f71c3e4933d43604765ffa8_::_lambda_invoker_cdecl_ @ 0x1803A0700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_0027b1c56f71c3e4933d43604765ffa8_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  SetThreadpoolTimer(Timer, 0LL, 0, 0);
  ExperienceManagerUtils::PostToUIThread(Context[4], (struct IUnknown *)Context, (void *)0x401, 2LL);
}
