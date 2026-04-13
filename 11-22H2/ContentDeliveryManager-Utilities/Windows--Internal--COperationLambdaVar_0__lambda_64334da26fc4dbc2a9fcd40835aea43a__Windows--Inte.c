/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_64334da26fc4dbc2a9fcd40835aea43a__Windows::Internal::CNoResult_::Run @ 0x1800767A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator() @ 0x1800751F0 (_lambda_64334da26fc4dbc2a9fcd40835aea43a_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_64334da26fc4dbc2a9fcd40835aea43a__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_64334da26fc4dbc2a9fcd40835aea43a_::operator()((_QWORD *)(a1 + 8));
  return (unsigned int)a3;
}
