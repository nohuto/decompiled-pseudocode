/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140070BD0
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140017A70 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
