/*
 * XREFs of _lambda_23b9e37225fb098a3c1eb5310313a894_::_lambda_invoker_cdecl_ @ 0x18038D480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_23b9e37225fb098a3c1eb5310313a894_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  ExperienceManagerUtils::PostToUIThread(Context[7], (struct IUnknown *)Context, (void *)0x401, 3LL);
}
