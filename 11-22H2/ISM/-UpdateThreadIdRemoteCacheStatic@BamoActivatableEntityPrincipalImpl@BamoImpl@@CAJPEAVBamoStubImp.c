/*
 * XREFs of ?UpdateThreadIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B9454
 * Callers:
 *     ?SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x180018150 (-SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 * Callees:
 *     ?UpdateThreadIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B9394 (-UpdateThreadIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateThreadIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateThreadIdRemoteCache(this, a1);
  return 0LL;
}
