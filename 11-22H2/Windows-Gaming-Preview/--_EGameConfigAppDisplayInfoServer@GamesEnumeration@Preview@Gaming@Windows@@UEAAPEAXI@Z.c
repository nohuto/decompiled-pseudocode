/*
 * XREFs of ??_EGameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180036500
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003653C (--1GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::~GameConfigAppDisplayInfoServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x58uLL);
  return this;
}
