/*
 * XREFs of ?OnConnectedCallout@BamoDeviceDockServerProxy@@EEAAJXZ @ 0x18010E730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDeviceDockServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDeviceDockServerProxyImpl@1@@Z @ 0x180102B68 (--0-$CalloutWrapper@VBamoDeviceDockServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseB.c)
 *     ??1?$CalloutWrapper@VBamoDeviceDockServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104F18 (--1-$CalloutWrapper@VBamoDeviceDockServerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDeviceDockServerProxy::OnConnectedCallout(BamoDeviceDockServerProxy *this)
{
  BamoDeviceDockServerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerProxyImpl>::CalloutWrapper<BamoImpl::BamoDeviceDockServerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDeviceDockServerProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDeviceDockServerProxyImpl>::~CalloutWrapper<BamoImpl::BamoDeviceDockServerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
