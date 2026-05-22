/*
 * XREFs of ?UpdateProcessIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18008FDE4
 * Callers:
 *     ?SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x180006150 (-SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z.c)
 * Callees:
 *     ?UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008FD20 (-UpdateProcessIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateProcessIdRemoteCache(this, a1);
  return 0LL;
}
