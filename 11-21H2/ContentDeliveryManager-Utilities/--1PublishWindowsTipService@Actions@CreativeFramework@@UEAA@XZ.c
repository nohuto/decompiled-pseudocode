/*
 * XREFs of ??1PublishWindowsTipService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800CDF34
 * Callers:
 *     ??_GPublishWindowsTipService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800CDFB0 (--_GPublishWindowsTipService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::PublishWindowsTipService::~PublishWindowsTipService(void **this)
{
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
