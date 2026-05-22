/*
 * XREFs of ?OnConnectedCallout@BamoInputSiteManagerProxy@@EEAAJXZ @ 0x180137990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerProxyImpl@1@@Z @ 0x18012D6BC (--0-$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F028 (--1-$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoInputSiteManagerProxy::OnConnectedCallout(BamoInputSiteManagerProxy *this)
{
  BamoInputSiteManagerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputSiteManagerProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
