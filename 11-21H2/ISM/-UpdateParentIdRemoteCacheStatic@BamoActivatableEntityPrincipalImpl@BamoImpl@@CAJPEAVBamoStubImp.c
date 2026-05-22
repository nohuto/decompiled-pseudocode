/*
 * XREFs of ?UpdateParentIdRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18008FCF4
 * Callers:
 *     ?SetParentId@BamoActivatableEntityPrincipal@@UEAAX_K@Z @ 0x18008FA70 (-SetParentId@BamoActivatableEntityPrincipal@@UEAAX_K@Z.c)
 * Callees:
 *     ?UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008FC2C (-UpdateParentIdRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2M.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateParentIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateParentIdRemoteCache(this, a1);
  return 0LL;
}
