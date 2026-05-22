/*
 * XREFs of ?UpdateUniqueIdRemoteCacheStatic@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180122870
 * Callers:
 *     ?SetUniqueId@BamoDataProviderPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x1800548A0 (-SetUniqueId@BamoDataProviderPrincipal@@UEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?UpdateUniqueIdRemoteCache@BamoDataProviderPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180031FF0 (-UpdateUniqueIdRemoteCache@BamoDataProviderPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micros.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDataProviderPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCache(this, a1);
  return 0LL;
}
