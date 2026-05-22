/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CA@PEAX@Z @ 0x1800E30A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000BD18 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 */

void __fastcall _lambda_1ad7ecfab602a777ecf020873216a663_::_lambda_invoker_cdecl_(RTL_SRWLOCK *a1)
{
  if ( LOBYTE(a1->Ptr) )
    wil::details_abi::SubscriptionList::OnSignaled((wil::details_abi::SubscriptionList *)&a1[9], a1 + 4);
}
