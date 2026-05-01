/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::_scalar_deleting_destructor_ @ 0x1801D8EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::_CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___ @ 0x1801D8930 (CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::_CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
