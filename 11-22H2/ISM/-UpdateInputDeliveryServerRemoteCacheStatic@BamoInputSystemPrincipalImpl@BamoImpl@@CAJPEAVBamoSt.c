/*
 * XREFs of ?UpdateInputDeliveryServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18014AC9C
 * Callers:
 *     ?SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x180053CC0 (-SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800089F0 (-UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCache(this, a1);
  return 0LL;
}
