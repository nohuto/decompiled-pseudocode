/*
 * XREFs of ?OnConnectedCallout@BamoAnimationTargetClientProxy@@EEAAJXZ @ 0x1800507F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoAnimationTargetClientProxyImpl@1@@Z @ 0x18005084C (--0-$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180050924 (--1-$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoAnimationTargetClientProxy::OnConnectedCallout(BamoAnimationTargetClientProxy *this)
{
  BamoAnimationTargetClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>(
    v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (char *)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoAnimationTargetClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>(v3);
  return (unsigned int)v1;
}
