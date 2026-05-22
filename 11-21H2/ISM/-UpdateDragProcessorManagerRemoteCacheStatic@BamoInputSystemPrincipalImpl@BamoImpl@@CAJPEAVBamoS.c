/*
 * XREFs of ?UpdateDragProcessorManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180122254
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036E00 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetDragProcessorManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoDragProcessorManagerPrincipal@@@Z @ 0x1801215E0 (-SetDragProcessorManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoDragProcessorManagerPrincipal@@@.c)
 * Callees:
 *     ?UpdateDragProcessorManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180020EA0 (-UpdateDragProcessorManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubI.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateDragProcessorManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateDragProcessorManagerRemoteCache(this, a1);
  return 0LL;
}
