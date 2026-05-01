/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::Run @ 0x1804A0670
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_67d44a18aa71790abd3976d622df6952_::operator() @ 0x18049BB74 (_lambda_67d44a18aa71790abd3976d622df6952_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_67d44a18aa71790abd3976d622df6952__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_67d44a18aa71790abd3976d622df6952_::operator()(a1 + 8, a4);
  return (unsigned int)a3;
}
