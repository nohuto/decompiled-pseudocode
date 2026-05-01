/*
 * XREFs of ?Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x18002A480
 * Callers:
 *     ?Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x1800288C0 (-Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKX.c)
 *     ?Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ @ 0x180028920 (-Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAA.c)
 *     ?Release@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAKXZ @ 0x180028F60 (-Release@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::Release(
        __int64 this,
        __int64 a2)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(
           this,
           a2);
}
