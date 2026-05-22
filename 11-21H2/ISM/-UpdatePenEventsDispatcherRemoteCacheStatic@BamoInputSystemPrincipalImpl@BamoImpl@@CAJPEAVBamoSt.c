/*
 * XREFs of ?UpdatePenEventsDispatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180122388
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036E00 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetPenEventsDispatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenEventsDispatcherPrincipal@@@Z @ 0x180121D00 (-SetPenEventsDispatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenEventsDispatcherPrincipal@@@Z.c)
 * Callees:
 *     ?UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001FFA0 (-UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCache(this, a1);
  return 0LL;
}
