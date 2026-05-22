/*
 * XREFs of ?OnConnectedCallout@BamoInputSystemProxy@@EEAAJXZ @ 0x18010EF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSystemProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSystemProxyImpl@1@@Z @ 0x180103E1C (--0-$CalloutWrapper@VBamoInputSystemProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoCo.c)
 *     ??1?$CalloutWrapper@VBamoInputSystemProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18010584C (--1-$CalloutWrapper@VBamoInputSystemProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoInputSystemProxy::OnConnectedCallout(BamoInputSystemProxy *this)
{
  BamoInputSystemProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoInputSystemProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSystemProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
