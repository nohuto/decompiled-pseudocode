/*
 * XREFs of ??_GAppInstallService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800BA0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppInstallService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800B9F20 (--1AppInstallService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

void **__fastcall CreativeFramework::Actions::AppInstallService::`scalar deleting destructor'(void **this, char a2)
{
  CreativeFramework::Actions::AppInstallService::~AppInstallService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
