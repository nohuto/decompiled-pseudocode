/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x180035D00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x18002E054 (_lambda_75b78523e3da460933f50e5d76bfa16b_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b__Windows::Internal::CBasicResult_unsigned_char_0___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_75b78523e3da460933f50e5d76bfa16b_::operator()((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
