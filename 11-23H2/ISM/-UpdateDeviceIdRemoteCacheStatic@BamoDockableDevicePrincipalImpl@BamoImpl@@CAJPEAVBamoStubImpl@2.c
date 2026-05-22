/*
 * XREFs of ?UpdateDeviceIdRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18019EF64
 * Callers:
 *     ?SetDeviceId@BamoDockableDevicePrincipal@@UEAAXAEBUDockableDeviceIdentity@@@Z @ 0x18019E640 (-SetDeviceId@BamoDockableDevicePrincipal@@UEAAXAEBUDockableDeviceIdentity@@@Z.c)
 * Callees:
 *     ?UpdateDeviceIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019EE98 (-UpdateDeviceIdRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micr.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockableDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceIdRemoteCache(this, a1);
  return 0LL;
}
