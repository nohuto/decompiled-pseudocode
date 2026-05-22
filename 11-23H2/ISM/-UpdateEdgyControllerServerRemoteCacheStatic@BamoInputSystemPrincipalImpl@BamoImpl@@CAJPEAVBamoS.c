/*
 * XREFs of ?UpdateEdgyControllerServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CCE8
 * Callers:
 *     ?SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@Z @ 0x180053130 (-SetEdgyControllerServer@BamoInputSystemPrincipal@@UEAAXPEAVBamoEdgyControllerServerPrincipal@@@.c)
 * Callees:
 *     ?UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800082E0 (-UpdateEdgyControllerServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateEdgyControllerServerRemoteCache(this, a1);
  return 0LL;
}
