/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoActivationConfigurationInputObjectProxy@@EEAAJXZ @ 0x18013AB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180002928 (--1-$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microso.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationConfigurationInputObjectProxyImpl@1@@Z @ 0x18012BEFC (--0-$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microso.c)
 */

__int64 __fastcall BamoActivationConfigurationInputObjectProxy::OnPropertiesRefreshedCallout(
        BamoActivationConfigurationInputObjectProxy *this)
{
  BamoActivationConfigurationInputObjectProxy *v1; // rbx
  __int64 v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoActivationConfigurationInputObjectProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>(v3);
  return (unsigned int)v1;
}
