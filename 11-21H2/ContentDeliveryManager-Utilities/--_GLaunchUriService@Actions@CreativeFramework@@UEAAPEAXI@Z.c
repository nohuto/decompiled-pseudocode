/*
 * XREFs of ??_GLaunchUriService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800C3D40
 * Callers:
 *     <none>
 * Callees:
 *     ??1LaunchUriService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800C39F0 (--1LaunchUriService@Actions@CreativeFramework@@UEAA@XZ.c)
 */

CreativeFramework::Actions::LaunchUriService *__fastcall CreativeFramework::Actions::LaunchUriService::`scalar deleting destructor'(
        CreativeFramework::Actions::LaunchUriService *this,
        char a2)
{
  CreativeFramework::Actions::LaunchUriService::~LaunchUriService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
