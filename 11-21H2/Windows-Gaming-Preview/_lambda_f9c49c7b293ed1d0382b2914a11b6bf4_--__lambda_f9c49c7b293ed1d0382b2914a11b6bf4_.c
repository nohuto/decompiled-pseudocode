/*
 * XREFs of _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_ @ 0x18001EDD4
 * Callers:
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_f9c49c7b293ed1d0382b2914a11b6bf4____::_1_::dtor$2 @ 0x18004CCBD (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Fou.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@UIGameListStatics2@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_18002A110.c)
 */

HRESULT __fastcall lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_(__int64 a1)
{
  HRESULT result; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx

  result = WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(
             v5,
             v3,
             v4);
  }
  return result;
}
