/*
 * XREFs of ?UpdateGestureServicesRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CD14
 * Callers:
 *     ?SetGestureServices@BamoInputSystemPrincipal@@UEAAXPEAVBamoGestureServicesPrincipal@@@Z @ 0x180053090 (-SetGestureServices@BamoInputSystemPrincipal@@UEAAXPEAVBamoGestureServicesPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateGestureServicesRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180008050 (-UpdateGestureServicesRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateGestureServicesRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateGestureServicesRemoteCache(this, a1);
  return 0LL;
}
