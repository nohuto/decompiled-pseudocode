/*
 * XREFs of ?UpdatePenEventsDispatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18014AD4C
 * Callers:
 *     ?SetPenEventsDispatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenEventsDispatcherPrincipal@@@Z @ 0x1800539A0 (-SetPenEventsDispatcher@BamoInputSystemPrincipal@@UEAAXPEAVBamoPenEventsDispatcherPrincipal@@@Z.c)
 * Callees:
 *     ?UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180004310 (-UpdatePenEventsDispatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdatePenEventsDispatcherRemoteCache(this, a1);
  return 0LL;
}
