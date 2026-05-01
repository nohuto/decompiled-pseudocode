/*
 * XREFs of CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___::_scalar_deleting_destructor_ @ 0x1801EA8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___::_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___ @ 0x1801EA5A8 (CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___::_CAsyncCallbackWithLambda__lambda_1dc6729d9ad27942be7b6a7593c66a88___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
