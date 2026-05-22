/*
 * XREFs of ?UpdateUniqueIdRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800F8B8C
 * Callers:
 *     ?SetUniqueId@BamoDataSourcePrincipal@@UEAAXAEBU_LUID@@@Z @ 0x1800F7DA0 (-SetUniqueId@BamoDataSourcePrincipal@@UEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?UpdateUniqueIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800F8A8C (-UpdateUniqueIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsof.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDataSourcePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoDataSourcePrincipalImpl::UpdateUniqueIdRemoteCache(this, a1);
  return 0LL;
}
