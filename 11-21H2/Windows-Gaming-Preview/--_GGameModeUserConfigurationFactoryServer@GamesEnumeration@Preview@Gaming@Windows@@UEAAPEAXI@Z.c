/*
 * XREFs of ??_GGameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180041810
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18004184C (--1GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::~GameModeUserConfigurationFactoryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x98uLL);
  return this;
}
