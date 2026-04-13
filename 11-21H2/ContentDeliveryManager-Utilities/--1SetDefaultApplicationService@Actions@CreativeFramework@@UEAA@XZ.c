/*
 * XREFs of ??1SetDefaultApplicationService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800BD4B0
 * Callers:
 *     ??_EPinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800BDEE0 (--_EPinWebsiteToTaskbarService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::SetDefaultApplicationService::~SetDefaultApplicationService(void **this)
{
  if ( (unsigned __int64)this[12] >= 8 )
    operator delete(this[9]);
  this[12] = (void *)7;
  this[11] = 0LL;
  *((_WORD *)this + 36) = 0;
  if ( (unsigned __int64)this[8] >= 8 )
    operator delete(this[5]);
  this[8] = (void *)7;
  this[7] = 0LL;
  *((_WORD *)this + 20) = 0;
  if ( (unsigned __int64)this[4] >= 8 )
    operator delete(this[1]);
  this[4] = (void *)7;
  this[3] = 0LL;
  *((_WORD *)this + 4) = 0;
  *this = &CreativeFramework::Actions::IActionService::`vftable';
}
