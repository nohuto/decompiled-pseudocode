/*
 * XREFs of ??_EPinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800AD040
 * Callers:
 *     <none>
 * Callees:
 *     ??1SetDefaultApplicationService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800AC9C0 (--1SetDefaultApplicationService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::PinWebsiteToTaskbarService *__fastcall CreativeFramework::Actions::PinWebsiteToTaskbarService::`vector deleting destructor'(
        CreativeFramework::Actions::PinWebsiteToTaskbarService *this,
        char a2)
{
  CreativeFramework::Actions::SetDefaultApplicationService::~SetDefaultApplicationService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
