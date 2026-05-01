/*
 * XREFs of ?AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180029A70
 * Callers:
 *     ?AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAKXZ @ 0x180028410 (-AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAKXZ.c)
 *     ?AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180028930 (-AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ @ 0x180028990 (-AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::AddRef(__int64 this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::AddRef(this);
}
