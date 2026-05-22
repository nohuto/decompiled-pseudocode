/*
 * XREFs of ?UpdateDeviceTypeRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18019F048
 * Callers:
 *     ?SetDeviceType@BamoDockableDevicePrincipal@@UEAAXW4DockableDeviceObjectType@@@Z @ 0x18019E700 (-SetDeviceType@BamoDockableDevicePrincipal@@UEAAXW4DockableDeviceObjectType@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTypeRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019EF90 (-UpdateDeviceTypeRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mi.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceTypeRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockableDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceTypeRemoteCache(this, a1);
  return 0LL;
}
