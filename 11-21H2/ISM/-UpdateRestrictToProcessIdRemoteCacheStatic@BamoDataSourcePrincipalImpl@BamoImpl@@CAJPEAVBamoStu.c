/*
 * XREFs of ?UpdateRestrictToProcessIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F8A60
 * Callers:
 *     ?SetRestrictToProcessId@BamoDataSourcePrincipal@@UEAAXI@Z @ 0x1800F7B70 (-SetRestrictToProcessId@BamoDataSourcePrincipal@@UEAAXI@Z.c)
 * Callees:
 *     ?UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800F899C (-UpdateRestrictToProcessIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImp.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDataSourcePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdRemoteCache(this, a1);
  return 0LL;
}
