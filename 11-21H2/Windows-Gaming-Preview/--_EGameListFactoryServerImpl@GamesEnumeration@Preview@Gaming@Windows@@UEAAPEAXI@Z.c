/*
 * XREFs of ??_EGameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001D8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18001D92C (--1GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::~GameListFactoryServerImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x88uLL);
  return this;
}
