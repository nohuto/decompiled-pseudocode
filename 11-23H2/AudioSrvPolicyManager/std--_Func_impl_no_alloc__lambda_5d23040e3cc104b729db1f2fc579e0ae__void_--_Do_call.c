/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x180030F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call(__int64 a1)
{
  return CApplicationManager::SetSmtcSubscriptionState(
           (struct _RTL_CRITICAL_SECTION *)a1,
           *(struct CProcess **)(a1 + 8),
           *(_DWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 20));
}
