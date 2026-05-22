/*
 * XREFs of ?UpdatePenDeviceManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CDF0
 * Callers:
 *     ?SetPenDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z @ 0x180052CD0 (-SetPenDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenDeviceManagerPrincipal@@@Z.c)
 * Callees:
 *     ?UpdatePenDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800031C0 (-UpdatePenDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenDeviceManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenDeviceManagerRemoteCache(this, a1);
  return 0LL;
}
