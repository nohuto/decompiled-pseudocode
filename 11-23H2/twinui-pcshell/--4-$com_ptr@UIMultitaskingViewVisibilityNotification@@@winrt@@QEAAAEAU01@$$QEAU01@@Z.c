/*
 * XREFs of ??4?$com_ptr@UIMultitaskingViewVisibilityNotification@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C540
 * Callers:
 *     _lambda_92c90ed01b0d8642303ed5be6c53eb36_::operator() @ 0x18012C430 (_lambda_92c90ed01b0d8642303ed5be6c53eb36_--operator().c)
 *     _lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator() @ 0x18020E018 (_lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

__int64 *__fastcall winrt::com_ptr<IMultitaskingViewVisibilityNotification>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax

  if ( a1 != a2 )
  {
    if ( *a1 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
    v4 = *a2;
    *a2 = 0LL;
    *a1 = v4;
  }
  return a1;
}
