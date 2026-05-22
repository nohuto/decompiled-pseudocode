/*
 * XREFs of ?OnDisconnectedCallout@BamoActivationControllerProxy@@EEAAJXZ @ 0x1800A59E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18001525C (--1-$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationControllerProxyImpl@1@@Z @ 0x1800A57CC (--0-$CalloutWrapper@VBamoActivationControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoActivationControllerProxy::OnDisconnectedCallout(BamoActivationControllerProxy *this)
{
  BamoActivationControllerProxy *v1; // rbx
  __int64 v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoActivationControllerProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationControllerProxyImpl>(v3);
  return (unsigned int)v1;
}
