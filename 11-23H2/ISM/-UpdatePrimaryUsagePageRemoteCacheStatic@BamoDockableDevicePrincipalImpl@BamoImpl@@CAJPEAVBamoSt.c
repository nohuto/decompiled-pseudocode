/*
 * XREFs of ?UpdatePrimaryUsagePageRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18019F5D0
 * Callers:
 *     ?SetPrimaryUsagePage@BamoDockableDevicePrincipal@@UEAAXG@Z @ 0x18019EC80 (-SetPrimaryUsagePage@BamoDockableDevicePrincipal@@UEAAXG@Z.c)
 * Callees:
 *     ?UpdatePrimaryUsagePageRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019F514 (-UpdatePrimaryUsagePageRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::UpdatePrimaryUsagePageRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockableDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockableDevicePrincipalImpl::UpdatePrimaryUsagePageRemoteCache(this, a1);
  return 0LL;
}
