/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_0d276c7ea3d710d19b822c1822ed0068__Windows::Internal::CNoResult_::Run @ 0x180080E70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0d276c7ea3d710d19b822c1822ed0068_::operator() @ 0x18007E7F8 (_lambda_0d276c7ea3d710d19b822c1822ed0068_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_0d276c7ea3d710d19b822c1822ed0068__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_0d276c7ea3d710d19b822c1822ed0068_::operator()((_QWORD *)(a1 + 8));
  return (unsigned int)a3;
}
