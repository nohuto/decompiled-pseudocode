/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoInputSiteElementProxy@@EEAAJXZ @ 0x18014E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18002A36C (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteElementProxyImpl@1@@Z @ 0x18014E148 (--0-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_18014E148.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoInputSiteElementProxy::OnPropertiesRefreshedCallout(BamoInputSiteElementProxy *this)
{
  BamoInputSiteElementProxy *v1; // rbx
  __int64 v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (void (__fastcall ***)(_QWORD))this + 2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v3);
  return (unsigned int)v1;
}
