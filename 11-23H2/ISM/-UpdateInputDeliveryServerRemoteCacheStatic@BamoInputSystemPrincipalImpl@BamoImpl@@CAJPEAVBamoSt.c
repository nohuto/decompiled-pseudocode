/*
 * XREFs of ?UpdateInputDeliveryServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CD6C
 * Callers:
 *     ?SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z @ 0x180052F50 (-SetInputDeliveryServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputDeliveryServerPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180007B30 (-UpdateInputDeliveryServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputDeliveryServerRemoteCache(this, a1);
  return 0LL;
}
