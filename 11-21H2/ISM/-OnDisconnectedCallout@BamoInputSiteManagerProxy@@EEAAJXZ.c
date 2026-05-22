/*
 * XREFs of ?OnDisconnectedCallout@BamoInputSiteManagerProxy@@EEAAJXZ @ 0x18010FFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerProxyImpl@1@@Z @ 0x180103B28 (--0-$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801056D8 (--1-$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoInputSiteManagerProxy::OnDisconnectedCallout(BamoInputSiteManagerProxy *this)
{
  BamoInputSiteManagerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputSiteManagerProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
