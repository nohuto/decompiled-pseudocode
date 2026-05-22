/*
 * XREFs of ?UpdateDisplayOcclusionLogicalRangeRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18019F140
 * Callers:
 *     ?SetDisplayOcclusionLogicalRange@BamoDockDevicePrincipal@@UEAAXAEBUtagRECT@@@Z @ 0x18019E7C0 (-SetDisplayOcclusionLogicalRange@BamoDockDevicePrincipal@@UEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?UpdateDisplayOcclusionLogicalRangeRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019F074 (-UpdateDisplayOcclusionLogicalRangeRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoDockDevicePrincipalImpl::UpdateDisplayOcclusionLogicalRangeRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockDevicePrincipalImpl::UpdateDisplayOcclusionLogicalRangeRemoteCache(this, a1);
  return 0LL;
}
