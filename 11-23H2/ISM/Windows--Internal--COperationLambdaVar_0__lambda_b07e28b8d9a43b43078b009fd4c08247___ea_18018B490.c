/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run @ 0x18018B490
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b07e28b8d9a43b43078b009fd4c08247_::operator() @ 0x180184F28 (_lambda_b07e28b8d9a43b43078b009fd4c08247_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_b07e28b8d9a43b43078b009fd4c08247__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_b07e28b8d9a43b43078b009fd4c08247_::operator()((unsigned int *)(a1 + 8), a4);
  return (unsigned int)a3;
}
