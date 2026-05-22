/*
 * XREFs of ?UpdateUniqueIdRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801B6B34
 * Callers:
 *     ?SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z @ 0x1801B6730 (-SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?UpdateUniqueIdRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801B6A64 (-UpdateUniqueIdRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft.c)
 */

__int64 __fastcall BamoImpl::BamoPenDevicePrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoPenDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoPenDevicePrincipalImpl::UpdateUniqueIdRemoteCache(this, a1);
  return 0LL;
}
