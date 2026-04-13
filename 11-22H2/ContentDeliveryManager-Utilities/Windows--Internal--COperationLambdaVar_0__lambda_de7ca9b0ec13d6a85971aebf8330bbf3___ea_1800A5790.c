/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::_scalar_deleting_destructor_ @ 0x1800A5790
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::_COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___ @ 0x1800A541C (Windows--Internal--COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows--Inte.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::_COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
