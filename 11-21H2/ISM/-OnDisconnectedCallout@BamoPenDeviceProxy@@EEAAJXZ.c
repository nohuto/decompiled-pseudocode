/*
 * XREFs of ?OnDisconnectedCallout@BamoPenDeviceProxy@@EEAAJXZ @ 0x1801101E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenDeviceProxyImpl@1@@Z @ 0x180104014 (--0-$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConn.c)
 *     ??1?$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105944 (--1-$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoPenDeviceProxy::OnDisconnectedCallout(BamoPenDeviceProxy *this)
{
  BamoPenDeviceProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoPenDeviceProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
