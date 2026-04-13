/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::Run @ 0x180094690
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_4f27881777b3828299edd9a0e9cb6746_::operator() @ 0x1800900AC (_lambda_4f27881777b3828299edd9a0e9cb6746_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_4f27881777b3828299edd9a0e9cb6746__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 392);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_4f27881777b3828299edd9a0e9cb6746_::operator()((HSTRING *)(a1 + 8), a4);
  return (unsigned int)a3;
}
