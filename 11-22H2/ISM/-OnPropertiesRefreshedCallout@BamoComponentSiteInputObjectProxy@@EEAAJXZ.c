/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoComponentSiteInputObjectProxy@@EEAAJXZ @ 0x18013ACE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoComponentSiteInputObjectProxyImpl@1@@Z @ 0x18012C21C (--0-$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ??1?$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012E678 (--1-$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

__int64 __fastcall BamoComponentSiteInputObjectProxy::OnPropertiesRefreshedCallout(
        BamoComponentSiteInputObjectProxy *this)
{
  BamoComponentSiteInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoComponentSiteInputObjectProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
