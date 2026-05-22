/*
 * XREFs of ?UpdateUIAHitTestRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18014ADFC
 * Callers:
 *     ?SetUIAHitTest@BamoInputSystemPrincipal@@UEAAXPEAVBamoUIAHitTestPrincipal@@@Z @ 0x180054220 (-SetUIAHitTest@BamoInputSystemPrincipal@@UEAAXPEAVBamoUIAHitTestPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateUIAHitTestRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180004D50 (-UpdateUIAHitTestRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micro.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateUIAHitTestRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateUIAHitTestRemoteCache(this, a1);
  return 0LL;
}
