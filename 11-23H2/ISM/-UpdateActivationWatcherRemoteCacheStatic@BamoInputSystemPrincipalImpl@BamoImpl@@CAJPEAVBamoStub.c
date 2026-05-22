/*
 * XREFs of ?UpdateActivationWatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CB8C
 * Callers:
 *     ?SetActivationWatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoActivationWatcherPrincipal@@@Z @ 0x1800533B0 (-SetActivationWatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoActivationWatcherPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18013CAAC (-UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCache(this, a1);
  return 0LL;
}
