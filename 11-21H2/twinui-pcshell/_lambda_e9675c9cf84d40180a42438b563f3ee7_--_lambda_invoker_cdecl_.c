/*
 * XREFs of _lambda_e9675c9cf84d40180a42438b563f3ee7_::_lambda_invoker_cdecl_ @ 0x18038D550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_e9675c9cf84d40180a42438b563f3ee7_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 (__fastcall ****Context)(ExperienceManagerUtils *, GUID *, LPVOID *),
        PTP_TIMER Timer)
{
  ExperienceManagerUtils::PostToUIThread(Context[7], (struct IUnknown *)Context, (void *)0x401, 4LL);
}
