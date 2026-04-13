/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x1800543E0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_ @ 0x180052CF4 (Windows--Internal--COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows--Inte.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_::_COperationLambdaVar_0__lambda_986e623d0ce256a5f32fdc507965e6c2__Windows::Internal::CNoResult_(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
