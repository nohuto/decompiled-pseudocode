/*
 * XREFs of ?OnConnectedCallout@BamoManualResizeAreaClientProxy@@EEAAJXZ @ 0x18016FD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoManualResizeAreaClientProxyImpl@1@@Z @ 0x18016F840 (--0-$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEA.c)
 *     ??1?$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016F93C (--1-$CalloutWrapper@VBamoManualResizeAreaClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoManualResizeAreaClientProxy::OnConnectedCallout(BamoManualResizeAreaClientProxy *this)
{
  BamoManualResizeAreaClientProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>::CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoManualResizeAreaClientProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoManualResizeAreaClientProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
