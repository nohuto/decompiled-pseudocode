/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_8d476462564c7429b3edd0aaa6c2160c__Windows::Internal::CNoResult_::Run @ 0x180042AA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8d476462564c7429b3edd0aaa6c2160c_::operator() @ 0x180042198 (_lambda_8d476462564c7429b3edd0aaa6c2160c_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_8d476462564c7429b3edd0aaa6c2160c__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_8d476462564c7429b3edd0aaa6c2160c_::operator()((_QWORD *)(a1 + 8));
  return (unsigned int)a3;
}
