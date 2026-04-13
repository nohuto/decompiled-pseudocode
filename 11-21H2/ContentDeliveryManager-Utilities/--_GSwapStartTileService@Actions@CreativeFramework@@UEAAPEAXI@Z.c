/*
 * XREFs of ??_GSwapStartTileService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800BDF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1SwapStartTileService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800BD674 (--1SwapStartTileService@Actions@CreativeFramework@@UEAA@XZ.c)
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
