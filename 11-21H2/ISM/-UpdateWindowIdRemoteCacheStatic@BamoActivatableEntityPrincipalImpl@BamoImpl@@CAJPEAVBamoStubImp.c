/*
 * XREFs of ?UpdateWindowIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18008FFC4
 * Callers:
 *     ?SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z @ 0x180005F30 (-SetWindowId@BamoActivatableEntityPrincipal@@UEAAX_K@Z.c)
 * Callees:
 *     ?UpdateWindowIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008FF00 (-UpdateWindowIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateWindowIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateWindowIdRemoteCache(this, a1);
  return 0LL;
}
