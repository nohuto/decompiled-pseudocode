/*
 * XREFs of ?OnConnectedCallout@BamoSimpleHapticsControllerProxy@@EEAAJXZ @ 0x18010F220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSimpleHapticsControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSimpleHapticsControllerProxyImpl@1@@Z @ 0x180104404 (--0-$CalloutWrapper@VBamoSimpleHapticsControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PE.c)
 *     ??1?$CalloutWrapper@VBamoSimpleHapticsControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105B34 (--1-$CalloutWrapper@VBamoSimpleHapticsControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSimpleHapticsControllerProxy::OnConnectedCallout(BamoSimpleHapticsControllerProxy *this)
{
  BamoSimpleHapticsControllerProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoSimpleHapticsControllerProxy *))(*(_QWORD *)v1 + 32LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSimpleHapticsControllerProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
