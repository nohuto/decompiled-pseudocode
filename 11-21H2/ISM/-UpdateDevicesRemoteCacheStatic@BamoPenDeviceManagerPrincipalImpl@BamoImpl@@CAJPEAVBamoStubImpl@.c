/*
 * XREFs of ?UpdateDevicesRemoteCacheStatic@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801881C0
 * Callers:
 *     ?SetDevices@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180188014 (-SetDevices@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincipal_Pri.c)
 * Callees:
 *     ?UpdateDevicesRemoteCache@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801880DC (-UpdateDevicesRemoteCache@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mic.c)
 */

__int64 __fastcall BamoImpl::BamoPenDeviceManagerPrincipalImpl::UpdateDevicesRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoPenDeviceManagerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoPenDeviceManagerPrincipalImpl::UpdateDevicesRemoteCache(this, a1);
  return 0LL;
}
