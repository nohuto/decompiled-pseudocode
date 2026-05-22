/*
 * XREFs of ?OnPropertiesRefreshedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x18012CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18004D5B4 (--1-$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationListenerInputObjectProxyImpl@1@@Z @ 0x18011E008 (--0-$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl_ea_18011E008.c)
 */

__int64 __fastcall BamoActivationListenerInputObjectProxy::OnPropertiesRefreshedCallout(
        BamoActivationListenerInputObjectProxy *this)
{
  BamoActivationListenerInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>(
    (__int64)v3,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (void (__fastcall ***)(_QWORD))this + 2);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoActivationListenerInputObjectProxy *))(*(_QWORD *)v1 + 48LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
