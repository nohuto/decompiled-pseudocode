/*
 * XREFs of ?OnDisconnectedCallout@BamoPenEventsClientProxy@@EEAAJXZ @ 0x1801BD010
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@@Z @ 0x1800506AC (--0-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBa.c)
 *     ??1?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180050784 (--1-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoPenEventsClientProxy::OnDisconnectedCallout(BamoPenEventsClientProxy *this)
{
  BamoPenEventsClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoPenEventsClientProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
