/*
 * XREFs of ?UpdateProcessIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B9368
 * Callers:
 *     ?SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x180018220 (-SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 * Callees:
 *     ?UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B92A8 (-UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCache(this, a1);
  return 0LL;
}
