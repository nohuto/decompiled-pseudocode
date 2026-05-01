/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c__Windows::Internal::CNoResult_::Run @ 0x180035C80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator() @ 0x1800304F8 (_lambda_ef8eb52c9e6883c3173b82c9be862a9c_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_ef8eb52c9e6883c3173b82c9be862a9c__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        HSTRING a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 40);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator()((_QWORD *)(a1 + 8), a2);
  return (unsigned int)a3;
}
