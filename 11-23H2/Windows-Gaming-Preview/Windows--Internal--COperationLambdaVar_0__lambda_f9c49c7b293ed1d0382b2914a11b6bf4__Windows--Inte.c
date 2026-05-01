/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run @ 0x180022880
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator() @ 0x18001F194 (_lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 40);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator()((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
