/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoInputSiteManagerProxy@@EEAAJXZ @ 0x18012D620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerProxyImpl@1@@Z @ 0x18011F6CC (--0-$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180121038 (--1-$CalloutWrapper@VBamoInputSiteManagerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoInputSiteManagerProxy::OnPropertiesRefreshedCallout(BamoInputSiteManagerProxy *this)
{
  BamoInputSiteManagerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputSiteManagerProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
