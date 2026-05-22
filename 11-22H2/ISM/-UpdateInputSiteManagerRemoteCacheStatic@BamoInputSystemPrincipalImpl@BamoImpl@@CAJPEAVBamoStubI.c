/*
 * XREFs of ?UpdateInputSiteManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18014ACF4
 * Callers:
 *     ?SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x180053B80 (-SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800084D0 (-UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCache(this, a1);
  return 0LL;
}
