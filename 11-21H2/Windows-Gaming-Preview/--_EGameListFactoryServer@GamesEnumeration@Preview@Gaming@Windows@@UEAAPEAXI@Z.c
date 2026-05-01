/*
 * XREFs of ??_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001D500
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18001D53C (--1GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::~GameListFactoryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x70uLL);
  return this;
}
