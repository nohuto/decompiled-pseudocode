/*
 * XREFs of ??1SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800CF550
 * Callers:
 *     ??_GSetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800CF630 (--_GSetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::~SetLockScreenHotspotsService(void **this)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( (unsigned __int64)this[14] >= 8 )
    operator delete(this[11]);
  this[14] = (void *)7;
  this[13] = 0LL;
  *((_WORD *)this + 44) = 0;
  if ( (unsigned __int64)this[10] >= 8 )
    operator delete(this[7]);
  this[10] = (void *)7;
  this[9] = 0LL;
  *((_WORD *)this + 28) = 0;
  if ( (unsigned __int64)this[6] >= 8 )
    operator delete(this[3]);
  this[6] = (void *)7;
  this[5] = 0LL;
  *((_WORD *)this + 12) = 0;
  v2 = this[2];
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = this[1];
  if ( v3 )
    LocalFree(v3);
  *this = &CreativeFramework::Actions::IActionService::`vftable';
}
