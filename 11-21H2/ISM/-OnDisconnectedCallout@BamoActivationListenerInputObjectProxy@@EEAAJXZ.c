/*
 * XREFs of ?OnDisconnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x18010F530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationListenerInputObjectProxyImpl@1@@Z @ 0x1801022A0 (--0-$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104ABC (--1-$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 */

__int64 __fastcall BamoActivationListenerInputObjectProxy::OnDisconnectedCallout(
        BamoActivationListenerInputObjectProxy *this)
{
  BamoActivationListenerInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoActivationListenerInputObjectProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
