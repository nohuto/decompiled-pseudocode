/*
 * XREFs of ?OnDisconnectedCallout@BamoGestureServicesProxy@@EEAAJXZ @ 0x18012A880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoGestureServicesProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoGestureServicesProxyImpl@1@@Z @ 0x18011F0E4 (--0-$CalloutWrapper@VBamoGestureServicesProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBa.c)
 *     ??1?$CalloutWrapper@VBamoGestureServicesProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180120D50 (--1-$CalloutWrapper@VBamoGestureServicesProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoGestureServicesProxy::OnDisconnectedCallout(BamoGestureServicesProxy *this)
{
  BamoGestureServicesProxy *v1; // rbx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesProxyImpl>::CalloutWrapper<BamoImpl::BamoGestureServicesProxyImpl>(
    (__int64)v3,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL),
    (__int64)this + 16);
  LODWORD(v1) = (*(__int64 (__fastcall **)(BamoGestureServicesProxy *))(*(_QWORD *)v1 + 40LL))(v1);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesProxyImpl>::~CalloutWrapper<BamoImpl::BamoGestureServicesProxyImpl>((__int64)v3);
  return (unsigned int)v1;
}
