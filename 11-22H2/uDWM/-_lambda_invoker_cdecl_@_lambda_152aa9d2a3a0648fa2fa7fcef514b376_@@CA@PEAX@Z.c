/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CA@PEAX@Z @ 0x180016900
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180015AA8 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall _lambda_152aa9d2a3a0648fa2fa7fcef514b376_::_lambda_invoker_cdecl_(RTL_SRWLOCK *a1)
{
  if ( LOBYTE(a1->Ptr) )
    wil::details_abi::SubscriptionList::OnSignaled((wil::details_abi::SubscriptionList *)&a1[19], a1 + 4);
}
