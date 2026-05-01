/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run @ 0x1803C6DD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6084a6cce004fd5fee81c22a52dae34d_::operator() @ 0x1803C2510 (_lambda_6084a6cce004fd5fee81c22a52dae34d_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_6084a6cce004fd5fee81c22a52dae34d__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run(
        __int64 a1,
        int a2,
        signed int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_6084a6cce004fd5fee81c22a52dae34d_::operator()(a1 + 8, a4, a3);
  return (unsigned int)a3;
}
