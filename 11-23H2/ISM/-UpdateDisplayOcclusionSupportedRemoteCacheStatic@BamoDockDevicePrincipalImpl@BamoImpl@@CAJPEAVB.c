/*
 * XREFs of ?UpdateDisplayOcclusionSupportedRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18019F228
 * Callers:
 *     ?SetDisplayOcclusionSupported@BamoDockDevicePrincipal@@UEAAX_N@Z @ 0x18019E880 (-SetDisplayOcclusionSupported@BamoDockDevicePrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?UpdateDisplayOcclusionSupportedRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019F16C (-UpdateDisplayOcclusionSupportedRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoS.c)
 */

__int64 __fastcall BamoImpl::BamoDockDevicePrincipalImpl::UpdateDisplayOcclusionSupportedRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockDevicePrincipalImpl::UpdateDisplayOcclusionSupportedRemoteCache(this, a1);
  return 0LL;
}
