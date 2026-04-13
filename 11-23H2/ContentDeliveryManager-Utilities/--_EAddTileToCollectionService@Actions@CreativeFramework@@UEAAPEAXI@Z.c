/*
 * XREFs of ??_EAddTileToCollectionService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800ACFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AddTileToCollectionService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800AC89C (--1AddTileToCollectionService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::AddTileToCollectionService *__fastcall CreativeFramework::Actions::AddTileToCollectionService::`vector deleting destructor'(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        char a2)
{
  CreativeFramework::Actions::AddTileToCollectionService::~AddTileToCollectionService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
