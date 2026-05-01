/*
 * XREFs of ?Invoke@?$delegate@UDispatcherQueueHandler@System@Windows@winrt@@V_lambda_26f44cd4480ca991a21fc760d40b2af7_@@@impl@winrt@@UEAAHXZ @ 0x180038A40
 * Callers:
 *     <none>
 * Callees:
 *     ??R_lambda_26f44cd4480ca991a21fc760d40b2af7_@@QEBAXXZ @ 0x180038A64 (--R_lambda_26f44cd4480ca991a21fc760d40b2af7_@@QEBAXXZ.c)
 */

__int64 winrt::impl::delegate<winrt::Windows::System::DispatcherQueueHandler,_lambda_26f44cd4480ca991a21fc760d40b2af7_>::Invoke()
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    _lambda_26f44cd4480ca991a21fc760d40b2af7_::operator()();
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v1);
  }
  return result;
}
