/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoPenEventsClientProxy@@EEAAJXZ @ 0x180191330
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465C4 (--1-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@@Z @ 0x18018FC58 (--0-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE_ea_18018FC58.c)
 */

__int64 __fastcall BamoPenEventsClientProxy::OnPropertiesRefreshedCallout(BamoPenEventsClientProxy *this)
{
  BamoPenEventsClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
    (__int64)v3,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (void (__fastcall ***)(_QWORD))this + 2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoPenEventsClientProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
