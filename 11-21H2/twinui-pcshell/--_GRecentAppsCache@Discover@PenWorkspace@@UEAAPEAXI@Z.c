/*
 * XREFs of ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x18016A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x18016A82C (--1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

PenWorkspace::Discover::RecentAppsCache *__fastcall PenWorkspace::Discover::RecentAppsCache::`scalar deleting destructor'(
        PenWorkspace::Discover::RecentAppsCache *this,
        char a2)
{
  PenWorkspace::Discover::RecentAppsCache::~RecentAppsCache(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xE8uLL);
  return this;
}
