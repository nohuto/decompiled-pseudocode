/*
 * XREFs of ?UpdateResizeContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801223B4
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036E00 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetResizeContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoResizeContextualProcessorPrincipal@@@Z @ 0x180121E00 (-SetResizeContextualProcessor@BamoInputSystemPrincipal@@UEAAXPEAVBamoResizeContextualProcessorPr.c)
 * Callees:
 *     ?UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001FD20 (-UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamo.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCache(this, a1);
  return 0LL;
}
