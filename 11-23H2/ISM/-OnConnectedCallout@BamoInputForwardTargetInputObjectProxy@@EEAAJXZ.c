/*
 * XREFs of ?OnConnectedCallout@BamoInputForwardTargetInputObjectProxy@@EEAAJXZ @ 0x180129850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputForwardTargetInputObjectProxyImpl@1@@Z @ 0x18011F3D8 (--0-$CalloutWrapper@VBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120EC4 (--1-$CalloutWrapper@VBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoInputForwardTargetInputObjectProxy::OnConnectedCallout(
        BamoInputForwardTargetInputObjectProxy *this)
{
  BamoInputForwardTargetInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputForwardTargetInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoInputForwardTargetInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputForwardTargetInputObjectProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputForwardTargetInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputForwardTargetInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
