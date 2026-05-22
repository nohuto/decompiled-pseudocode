/*
 * XREFs of ?OnPeerDisconnected@AnimationDataProviderConnection@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@_N@Z @ 0x180122AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800559C8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B9CDC (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall AnimationDataProviderConnection::OnPeerDisconnected(
        AnimationDataProviderConnection *this,
        struct dataprovider_AutoBamos::BamoPeer *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)(v2 + 24));
    Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)(v2 + 32));
  }
  return 0LL;
}
