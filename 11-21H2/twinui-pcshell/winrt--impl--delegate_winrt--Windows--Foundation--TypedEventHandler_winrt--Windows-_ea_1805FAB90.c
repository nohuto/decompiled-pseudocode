/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fac63ae4a10d0c60eda94047ae860b1f___::Invoke @ 0x1805FAB90
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fac63ae4a10d0c60eda94047ae860b1f_::operator() @ 0x1805F9A40 (_lambda_fac63ae4a10d0c60eda94047ae860b1f_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView_winrt::Windows::Internal::ComposableShell::Multitasking::IEvaluateItemEventArgs___lambda_fac63ae4a10d0c60eda94047ae860b1f___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rcx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v3 = (__int64 *)(a1 + 8);
  try
  {
    lambda_fac63ae4a10d0c60eda94047ae860b1f_::operator()(v3, a2, &v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
