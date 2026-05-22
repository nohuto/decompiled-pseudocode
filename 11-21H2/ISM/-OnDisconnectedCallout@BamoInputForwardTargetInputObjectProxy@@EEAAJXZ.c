/*
 * XREFs of ?OnDisconnectedCallout@BamoInputForwardTargetInputObjectProxy@@EEAAJXZ @ 0x18010FE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputForwardTargetInputObjectProxyImpl@1@@Z @ 0x180103834 (--0-$CalloutWrapper@VBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 *     ??1?$CalloutWrapper@VBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105564 (--1-$CalloutWrapper@VBamoInputForwardTargetInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q.c)
 */

__int64 __fastcall BamoInputForwardTargetInputObjectProxy::OnDisconnectedCallout(
        BamoInputForwardTargetInputObjectProxy *this)
{
  BamoInputForwardTargetInputObjectProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputForwardTargetInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoInputForwardTargetInputObjectProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputForwardTargetInputObjectProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputForwardTargetInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputForwardTargetInputObjectProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
