/*
 * XREFs of ?OnDisconnectedCallout@BamoPenEventsDispatcherProxy@@EEAAJXZ @ 0x18012ADC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsDispatcherProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsDispatcherProxyImpl@1@@Z @ 0x18011FCB4 (--0-$CalloutWrapper@VBamoPenEventsDispatcherProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoPenEventsDispatcherProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180121320 (--1-$CalloutWrapper@VBamoPenEventsDispatcherProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoPenEventsDispatcherProxy::OnDisconnectedCallout(BamoPenEventsDispatcherProxy *this)
{
  BamoPenEventsDispatcherProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoPenEventsDispatcherProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsDispatcherProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsDispatcherProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
