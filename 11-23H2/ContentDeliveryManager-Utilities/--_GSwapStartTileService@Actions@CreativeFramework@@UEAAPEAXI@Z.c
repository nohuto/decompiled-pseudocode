/*
 * XREFs of ??_GSwapStartTileService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800AD030
 * Callers:
 *     <none>
 * Callees:
 *     ??1SwapStartTileService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800ACA2C (--1SwapStartTileService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::SwapStartTileService *__fastcall CreativeFramework::Actions::SwapStartTileService::`scalar deleting destructor'(
        CreativeFramework::Actions::SwapStartTileService *this,
        char a2)
{
  CreativeFramework::Actions::SwapStartTileService::~SwapStartTileService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
