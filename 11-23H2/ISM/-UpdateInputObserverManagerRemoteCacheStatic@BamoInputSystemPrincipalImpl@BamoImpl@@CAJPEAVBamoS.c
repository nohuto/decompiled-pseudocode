/*
 * XREFs of ?UpdateInputObserverManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CD98
 * Callers:
 *     ?SetInputObserverManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputObserverManagerPrincipal@@@Z @ 0x180052EB0 (-SetInputObserverManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputObserverManagerPrincipal@@@.c)
 * Callees:
 *     ?UpdateInputObserverManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800078A0 (-UpdateInputObserverManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputObserverManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputObserverManagerRemoteCache(this, a1);
  return 0LL;
}
