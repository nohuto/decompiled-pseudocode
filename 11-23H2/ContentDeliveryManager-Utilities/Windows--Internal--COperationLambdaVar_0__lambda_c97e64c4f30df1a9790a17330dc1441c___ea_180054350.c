/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180054350
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_ @ 0x180052C58 (Windows--Internal--COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows--Inte.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_c97e64c4f30df1a9790a17330dc1441c__Windows::Internal::CNoResult_(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
