/*
 * XREFs of CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___::_scalar_deleting_destructor_ @ 0x180217E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___::_CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___ @ 0x1802170DC (CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___--_CAsyncCallbackWithLambda_.c)
 */

void *__fastcall CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___::_CAsyncCallbackWithLambda__lambda_bb0c2f0ed47fbf1d2251f1c7eebd5067___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
