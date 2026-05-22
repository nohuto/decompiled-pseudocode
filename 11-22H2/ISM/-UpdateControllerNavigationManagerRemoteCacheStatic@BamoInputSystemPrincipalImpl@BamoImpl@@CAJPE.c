/*
 * XREFs of ?UpdateControllerNavigationManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18014AAE8
 * Callers:
 *     ?SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManagerPrincipal@@@Z @ 0x180054080 (-SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManag.c)
 * Callees:
 *     ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180009430 (-UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(this, a1);
  return 0LL;
}
