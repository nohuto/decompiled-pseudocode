/*
 * XREFs of DllGetActivationFactory @ 0x180008300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DllGetActivationFactory(HSTRING a1, _QWORD *a2)
{
  __int64 v4; // rdx

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    _lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_180032968 = 1;
  return Microsoft::WRL::Details::GetActivationFactory<1>(
           (__int64)&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
           v4,
           a1,
           a2);
}
