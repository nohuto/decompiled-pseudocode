/*
 * XREFs of ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_711bfd1af15e27d1f27b55343e53885b_@@@impl@winrt@@UEAAHXZ @ 0x1805E1F40
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBAXXZ @ 0x1805E0BBC (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBAXXZ.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_711bfd1af15e27d1f27b55343e53885b_>::Invoke(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **)(a1 + 8);
  try
  {
    _lambda_711bfd1af15e27d1f27b55343e53885b_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
