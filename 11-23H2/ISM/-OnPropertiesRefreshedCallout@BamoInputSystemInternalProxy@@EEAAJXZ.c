/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoInputSystemInternalProxy@@EEAAJXZ @ 0x18012D700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSystemInternalProxyImpl@1@@Z @ 0x18011F8C4 (--0-$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180121130 (--1-$CalloutWrapper@VBamoInputSystemInternalProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoInputSystemInternalProxy::OnPropertiesRefreshedCallout(BamoInputSystemInternalProxy *this)
{
  BamoInputSystemInternalProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputSystemInternalProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSystemInternalProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
