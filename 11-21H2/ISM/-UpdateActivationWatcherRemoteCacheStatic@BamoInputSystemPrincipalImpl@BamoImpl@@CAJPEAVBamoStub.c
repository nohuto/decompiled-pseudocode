/*
 * XREFs of ?UpdateActivationWatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801220F4
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036E00 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetActivationWatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoActivationWatcherPrincipal@@@Z @ 0x1801212E0 (-SetActivationWatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoActivationWatcherPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180122010 (-UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCache(this, a1);
  return 0LL;
}
