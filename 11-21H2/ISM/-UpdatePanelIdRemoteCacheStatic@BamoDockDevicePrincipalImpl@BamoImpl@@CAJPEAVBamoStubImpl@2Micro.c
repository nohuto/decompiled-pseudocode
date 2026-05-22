/*
 * XREFs of ?UpdatePanelIdRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018020C
 * Callers:
 *     ?SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18017F8B8 (-SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?UpdatePanelIdRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180180144 (-UpdatePanelIdRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft.c)
 */

__int64 __fastcall BamoImpl::BamoDockDevicePrincipalImpl::UpdatePanelIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoDockDevicePrincipalImpl::UpdatePanelIdRemoteCache(this, a1);
  return 0LL;
}
