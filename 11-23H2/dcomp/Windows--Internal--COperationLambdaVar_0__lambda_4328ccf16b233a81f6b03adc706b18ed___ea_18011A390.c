/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::Run @ 0x18011A390
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4328ccf16b233a81f6b03adc706b18ed_::operator() @ 0x1801193D0 (_lambda_4328ccf16b233a81f6b03adc706b18ed_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_4328ccf16b233a81f6b03adc706b18ed__Windows::Internal::CMarshaledInterfaceResult_Windows::UI::Composition::Internal::IHolographicCompositionDisplay___::Run(
        __int64 a1,
        int a2,
        int a3,
        Windows::Internal::CResultBase *a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_4328ccf16b233a81f6b03adc706b18ed_::operator()(
                           (Windows::UI::Composition::Internal::HolographicCompositionDisplay **)(a1 + 8),
                           a4);
  return (unsigned int)a3;
}
