/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x1800A7270
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator() @ 0x1800A55AC (_lambda_de7ca9b0ec13d6a85971aebf8330bbf3_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_de7ca9b0ec13d6a85971aebf8330bbf3__Windows::Internal::CBasicResult_unsigned_char_0___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator()((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
