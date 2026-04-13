/*
 * XREFs of ??_GSetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800CF630
 * Callers:
 *     <none>
 * Callees:
 *     ??1SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800CF550 (--1SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

void **__fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::`scalar deleting destructor'(
        void **this,
        char a2)
{
  CreativeFramework::Actions::SetLockScreenHotspotsService::~SetLockScreenHotspotsService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
