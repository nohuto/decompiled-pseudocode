/*
 * XREFs of ?UpdateResizeContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18014AD78
 * Callers:
 *     ?SetResizeContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoResizeContextualProcessorPrincipal@@@Z @ 0x180053900 (-SetResizeContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoResizeContextualProcessorPr.c)
 * Callees:
 *     ?UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800045A0 (-UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamo.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCache(this, a1);
  return 0LL;
}
