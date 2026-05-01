/*
 * XREFs of ??_EGameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180041C60
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180041C9C (--1GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::~GameModeUserConfigurationServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x78uLL);
  return this;
}
