/*
 * XREFs of ??_EGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800337D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003380C (--1GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::~GameModeConfigurationServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xD0uLL);
  return this;
}
