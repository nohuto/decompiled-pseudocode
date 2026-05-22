/*
 * XREFs of ?UpdatePrimaryUsageIdRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801AD4C8
 * Callers:
 *     ?SetPrimaryUsageId@BamoDockableDevicePrincipal@@UEAAXG@Z @ 0x1801ACBA0 (-SetPrimaryUsageId@BamoDockableDevicePrincipal@@UEAAXG@Z.c)
 * Callees:
 *     ?UpdatePrimaryUsageIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801AD40C (-UpdatePrimaryUsageIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::UpdatePrimaryUsageIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockableDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockableDevicePrincipalImpl::UpdatePrimaryUsageIdRemoteCache(this, a1);
  return 0LL;
}
