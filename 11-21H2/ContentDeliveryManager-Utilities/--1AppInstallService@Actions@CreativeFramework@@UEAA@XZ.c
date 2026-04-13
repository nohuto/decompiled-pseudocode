/*
 * XREFs of ??1AppInstallService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800B9F20
 * Callers:
 *     ??_GAppInstallService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800BA0C0 (--_GAppInstallService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::AppInstallService::~AppInstallService(void **this)
{
  if ( (unsigned __int64)this[33] >= 8 )
    operator delete(this[30]);
  this[33] = (void *)7;
  this[32] = 0LL;
  *((_WORD *)this + 120) = 0;
  if ( (unsigned __int64)this[29] >= 8 )
    operator delete(this[26]);
  this[29] = (void *)7;
  this[28] = 0LL;
  *((_WORD *)this + 104) = 0;
  if ( (unsigned __int64)this[25] >= 8 )
    operator delete(this[22]);
  this[25] = (void *)7;
  this[24] = 0LL;
  *((_WORD *)this + 88) = 0;
  if ( (unsigned __int64)this[21] >= 8 )
    operator delete(this[18]);
  this[21] = (void *)7;
  this[20] = 0LL;
  *((_WORD *)this + 72) = 0;
  if ( (unsigned __int64)this[17] >= 8 )
    operator delete(this[14]);
  this[17] = (void *)7;
  this[16] = 0LL;
  *((_WORD *)this + 56) = 0;
  if ( (unsigned __int64)this[13] >= 8 )
    operator delete(this[10]);
  this[13] = (void *)7;
  this[12] = 0LL;
  *((_WORD *)this + 40) = 0;
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
