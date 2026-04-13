/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_6ab1f6f5bfb1610cca41dbb66aaa8812__Windows::Internal::CNoResult_::Run @ 0x180076790
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator() @ 0x180075338 (_lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_6ab1f6f5bfb1610cca41dbb66aaa8812__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_6ab1f6f5bfb1610cca41dbb66aaa8812_::operator()((_QWORD *)(a1 + 8));
  return (unsigned int)a3;
}
