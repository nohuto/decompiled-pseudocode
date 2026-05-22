/*
 * XREFs of ?OnConnectedCallout@BamoDockDeviceProxy@@EEAAJXZ @ 0x18010E7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoDockDeviceProxyImpl@1@@Z @ 0x180102C64 (--0-$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoCon.c)
 *     ??1?$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104F94 (--1-$CalloutWrapper@VBamoDockDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDockDeviceProxy::OnConnectedCallout(BamoDockDeviceProxy *this)
{
  BamoDockDeviceProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoDockDeviceProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoDockDeviceProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
