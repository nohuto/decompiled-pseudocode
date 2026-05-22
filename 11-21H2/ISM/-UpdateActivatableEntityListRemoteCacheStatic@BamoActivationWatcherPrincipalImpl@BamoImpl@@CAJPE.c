/*
 * XREFs of ?UpdateActivatableEntityListRemoteCacheStatic@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18008E664
 * Callers:
 *     ?SetActivatableEntityList@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800476A0 (-SetActivatableEntityList@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoList_ActivatableEntityPri.c)
 * Callees:
 *     ?UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008E588 (-UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatableEntityListRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivationWatcherPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatableEntityListRemoteCache(this, a1);
  return 0LL;
}
