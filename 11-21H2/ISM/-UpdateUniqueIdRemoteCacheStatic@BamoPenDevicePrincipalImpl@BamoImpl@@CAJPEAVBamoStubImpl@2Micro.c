/*
 * XREFs of ?UpdateUniqueIdRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018A9EC
 * Callers:
 *     ?SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z @ 0x18018A580 (-SetUniqueId@BamoPenDevicePrincipal@@UEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?UpdateUniqueIdRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018A914 (-UpdateUniqueIdRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft.c)
 */

__int64 __fastcall BamoImpl::BamoPenDevicePrincipalImpl::UpdateUniqueIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoPenDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoPenDevicePrincipalImpl::UpdateUniqueIdRemoteCache(this, a1);
  return 0LL;
}
