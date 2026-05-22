/*
 * XREFs of ?UpdateHeatGripServiceRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18014AC70
 * Callers:
 *     ?SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x180053D60 (-SetHeatGripService@BamoInputSystemPrincipal@@UEAAXPEAVBamoHeatGripServicePrincipal@@@Z.c)
 * Callees:
 *     ?UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180008C80 (-UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCache(this, a1);
  return 0LL;
}
