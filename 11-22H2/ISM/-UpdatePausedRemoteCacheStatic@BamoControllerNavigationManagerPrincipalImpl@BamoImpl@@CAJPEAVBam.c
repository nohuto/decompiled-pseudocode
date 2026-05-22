/*
 * XREFs of ?UpdatePausedRemoteCacheStatic@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801A05CC
 * Callers:
 *     ?SetPaused@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z @ 0x1801A0360 (-SetPaused@BamoControllerNavigationManagerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?UpdatePausedRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801A0510 (-UpdatePausedRemoteCache@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStu.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdatePausedRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoControllerNavigationManagerPrincipalImpl::UpdatePausedRemoteCache(this, a1);
  return 0LL;
}
