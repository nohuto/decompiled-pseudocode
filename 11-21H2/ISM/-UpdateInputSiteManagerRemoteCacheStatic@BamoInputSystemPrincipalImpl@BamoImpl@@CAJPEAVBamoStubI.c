/*
 * XREFs of ?UpdateInputSiteManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180122330
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036E00 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x180121AE0 (-SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180020220 (-UpdateInputSiteManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateInputSiteManagerRemoteCache(this, a1);
  return 0LL;
}
