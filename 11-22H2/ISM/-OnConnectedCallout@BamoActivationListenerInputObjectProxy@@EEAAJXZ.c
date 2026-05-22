/*
 * XREFs of ?OnConnectedCallout@BamoActivationListenerInputObjectProxy@@EEAAJXZ @ 0x18004DD00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationListenerInputObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18004DD68 (--0-$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18004DE14 (--1-$CalloutWrapper@VBamoActivationListenerInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoActivationListenerInputObjectProxy::OnConnectedCallout(
        BamoActivationListenerInputObjectProxy *this)
{
  BamoActivationListenerInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>(
    v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (char *)this + 16,
    (BamoActivationListenerInputObjectProxy *)((char *)this + 16) != 0LL ? 3 : 0);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoActivationListenerInputObjectProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationListenerInputObjectProxyImpl>(v3);
  return (unsigned int)v1;
}
