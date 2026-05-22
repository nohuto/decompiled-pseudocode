/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor___::Run @ 0x1801179A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_525e999c26fbeca1a1e2a68ab2096671_::operator() @ 0x180115804 (_lambda_525e999c26fbeca1a1e2a68ab2096671_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_525e999c26fbeca1a1e2a68ab2096671__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositor___::Run(
        __int64 a1,
        int a2,
        int a3,
        Windows::Internal::CResultBase *a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_525e999c26fbeca1a1e2a68ab2096671_::operator()(
                           (Windows::UI::Composition::Internal::HolographicCompositor **)(a1 + 8),
                           a4);
  return (unsigned int)a3;
}
