/*
 * XREFs of CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___::_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___ @ 0x1801EA5A8
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___::_scalar_deleting_destructor_ @ 0x1801EA8E0 (CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___--_scalar_deleting_destructo.c)
 * Callees:
 *     _lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_ @ 0x1801EA540 (_lambda_b057d2eecf04af11f3f014dd266c7d19_--__lambda_b057d2eecf04af11f3f014dd266c7d19_.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___::_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___(
        __int64 a1)
{
  lambda_b057d2eecf04af11f3f014dd266c7d19_::__lambda_b057d2eecf04af11f3f014dd266c7d19_((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 32));
}
