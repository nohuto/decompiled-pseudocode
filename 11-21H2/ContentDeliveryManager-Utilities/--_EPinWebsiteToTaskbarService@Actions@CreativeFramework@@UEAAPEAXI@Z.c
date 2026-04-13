/*
 * XREFs of ??_EPinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800BDEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SetDefaultApplicationService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800BD4B0 (--1SetDefaultApplicationService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

void **__fastcall CreativeFramework::Actions::PinWebsiteToTaskbarService::`vector deleting destructor'(
        void **this,
        char a2)
{
  CreativeFramework::Actions::SetDefaultApplicationService::~SetDefaultApplicationService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
